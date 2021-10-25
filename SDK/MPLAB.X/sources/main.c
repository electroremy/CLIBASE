/*********************************************************************
 *
 *  CLIBASE V6 Premium - Base de développement Micrologiciel OpenSource
 * 
 *  Point d'entrée principal du micrologiciel
 *
 *********************************************************************
 * Microcontrôleur:    PIC18F67J60
 * Compilateur:        Microchip C18 v3.36 ou supérieur
 * 
 */

#include "Compiler.h"
#include "HardwareProfile.h"


// Paramétrage du "Config Word" du PIC
#pragma config CP0=ON       // Protection du code contre la lecture activée
#pragma config WDT=OFF      // Watchdog Timer désactivé
#pragma config ETHLED=OFF   // LEDs Ethernet désactivées, RA0 et RA1 en GPIO
#pragma config XINST=OFF    // Jeu d'instructions étendu désactivé
#pragma config FOSC=HSPLL   // Mode d'oscillateur primaire : Crystal haute vitesse sous contrôle PLL interne
#pragma config FOSC2=ON     // Quand OSCCON.SCS (System Clock Select) n'est pas défini (=0b00), utilisation de l'oscillateur primaire comme horloge système
// Freq. oscillateur primaire = 25Mhz (quartz)
// Freq. horloge système = voir config OSCTUNE dans init_generale()

void init_generale(void);

// INTERRUPTIONS

    // Interruption Basse Priorité
    #pragma interruptlow LowISR
    void LowISR(void)
    {
        // [ Saisir ici le code des interruptions basse priorité ]
    }   

    // Interruption Haute Priorité
    #pragma interrupt HighISR
    void HighISR(void)
    {
        // [ Saisir ici le code des interruptions haute priorité ]
    }

    // Directives nécessaires pour la gestion des interruptions, à laisser intacte
    #pragma code lowVector=0x18
    void LowVector(void){_asm goto LowISR _endasm}
    #pragma code highVector=0x8
    void HighVector(void){_asm goto HighISR _endasm}
    #pragma code // Return to default code section

// FIN SECTION INTERRUPTIONS



// Point d'entrée principal de l'application
void main(void)
{
    // Initialisation générale
    init_generale();
    
    
    LUMIN_LEDS_IO = 1;      // Luminosité des LEDs à 100% (pour autre valeur, configurer la broche en PWM)
    LED_BLEUE_IO = 1;       // LED Rouge éteinte (active à l'état bas)
    
    while(1)
    {
        // Allumage du rétroéclairage en vert lorsque le bouton est relâché
        // ou en rouge lorsqu'il est enfoncé       
        LED_VERTE_IO = !BOUTON_IO;       
        LED_ROUGE_IO = BOUTON_IO;
    }
}



void init_generale(void)
{            
    // Configuration des GPIO :
    
        // - LEDs
        LED_ROUGE_TRIS = 0;
        LED_VERTE_TRIS = 0;
        LED_BLEUE_TRIS = 0;
        LUMIN_LEDS_TRIS = 0;

        // - Divers
        SORTIE_PWM_BOOST_TRIS = 0;      // Broche SORTIE_PWM_BOOST en sortie (sortie PWM - CCP1)
        SORTIE_PWM_BOOST_IO = 0;        // Sortie PWM du convertisseur boost initialement à 0 (si à 1 en continu : court-circuit)

        
    // Initialisation des registres système :
        
        // Activation de la PLL 5x
        OSCTUNE = 0x40;                 // PLL x5 active, prescaler [:3], pas de postscaler.
                                        // Avec crystal de 25MHz, on obtient Fosc = 41.6667MHz

        
        // Activation des pull-ups internes sur le PORTB (nécessaire pour bouton)
        INTCON2bits.NOT_RBPU = 0;       // (actif à l'état bas)
        
        /*
        // Paramètres des interruptions 
        RCONbits.IPEN = 1;              // Activation des priorités d'interruptions
        INTCONbits.GIEH = 0;            // Interruptions de priorité haute : désactivées
        INTCONbits.GIEL = 0;            // Interruptions de priorité basse : désactivées
        */
}
