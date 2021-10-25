#ifndef HARDWARE_PROFILE_H
#define HARDWARE_PROFILE_H

#define LED_BLEUE_TRIS              (TRISBbits.TRISB6)
#define LED_BLEUE_IO                (LATBbits.LATB6)            // Active à l'état bas
#define LED_VERTE_TRIS              (TRISBbits.TRISB5)
#define LED_VERTE_IO                (LATBbits.LATB5)            // Active à l'état bas
#define LED_ROUGE_TRIS              (TRISBbits.TRISB4)
#define LED_ROUGE_IO                (LATBbits.LATB4)            // Active à l'état bas
#define SORTIE_PWM_BOOST_TRIS       (TRISCbits.TRISC2)
#define SORTIE_PWM_BOOST_IO         (LATCbits.LATC2)            // Doit être à 0 quand boost inutilisé, sinon court-circuit
#define LUMIN_LEDS_TRIS             (TRISGbits.TRISG4)
#define LUMIN_LEDS_IO               (LATGbits.LATG4)            // Actif à l'état haut ; modulation PWM possible
#define BOUTON_TRIS                 (TRISBbits.TRISB7)
#define BOUTON_IO                   (PORTBbits.RB7)             // Actif à l'état bas
       
#endif // #ifndef HARDWARE_PROFILE_H
