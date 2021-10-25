# CLIBASE V6 Premium 

Fichiers et informations nécessaires pour la création d'un firmware open-source pour le bloqueur d'appels CLIBASE V6 Premium

**A propos des fichiers :**

- "CLIBASE V6 - Descriptif technique développeurs - Rév 1.1.pdf" contient les explications pour développer le firmware
- "Encodeur_FW_ClibaseV6_r1.0.exe.7z" est l'utilitaire permettant de téléverser le nouveau firmware
- "MPLAB.X.7z" contient un projet MPLAB paramétré.
- Voir ici pour la datasheet du mircocontroleur utilisé https://www.microchip.com/wwwproducts/en/PIC18F67J60

## FAQ du CLIBASE V6

### L'appareil fonctionnera-t-il avec ma box Internet ?

Le boitier call-blocker CLIBASE v6 est universel et fonctionne avec toutes les box Internet commercialisées en France, qu'elles soient ADSL, fibre, câble ou satellite, à l'exception du modem "TC7210" de VOO en Belgique

### L'appareil est-il garanti ?

~~Le bloqueur d'appels CLIBASE v6 bénéficie d'une garantie de 2 ans pour la version 'Basic' et de 3 ans pour la version 'Premium'~~

### L'appareil fonctionne-t-il avec tous les téléphones ?

CLIBASE V6 est compatible avec l'ensemble des téléphones commercialisés en Europe.  
Sur les modèles antérieurs à 2003, une brève sonnerie peut se faire entendre lors d'appels bloqués. Ce problème est aussi présent sur de rares références de téléphones plus modernes, essentiellement PHILIPS (CD150/D205/D215/D270/D280/D400/D405/D450/D455/D460/D560), le ALCATEL Versatis 550, la gamme DORO EasyPhone et autres téléphones spécialisés "séniors".  
Par ailleurs, la fonction de "Détection et rejet automatiques des appels de robots" du CLIBASE v6 Premium n'est pas compatible avec les "Téléphones HD" commercialisés en boutique par Orange ainsi que les téléphones connectés directement par ondes DECT à la box (sans base).  

### Le numéro/nom de l'appelant continuera-t-il de s'afficher sur mon téléphone ?

Oui. Une fois le CLIBASE branché, le numéro/nom de l'appelant continuera de s'afficher comme avant sur l'écran de votre téléphone. Il s'affichera également sur l'écran du CLIBASE (Premium seulement).

### Que se passe-t-il une fois que j'ai banni 340/500 numéros ?

La mémoire du CLIBASE v6 Basic peut contenir 340 numéros, le Premium peut en contenir 500. Lorsque 340/500 numéros auront été bannis, le bannissement d'un 341ème/501ème viendra automatiquement remplacer le tout premier, et ainsi de suite. C'est donc totalement transparent pour l'utilisateur.

### Que se passe-t-il lors d'une coupure de courant électrique ?

Lors d'une coupure de courant électrique, les paramètres et la liste de numéros bannis sont conservés, et ce quelle que soit la durée de la coupure.

### Est-il possible de ne pas bloquer les appels étrangers, nocturnes ou anonymes ?

Le boitier pour bloquer les appels intempestifs (call blocker) CLIBASE v6 est entièrement paramétrable. Ainsi, l'utilisateur peut choisir d'activer ou non chacun des 3 modes de blocage proposés. Il est donc possible, par exemple, de ne pas autoriser les appels anonymes tout en laissant passer les appels de l'étranger et les appels nocturnes.

### Je dispose également d'un fax ou d'une alarme, puis-je utiliser CLIBASE v6 ?

Il est parfaitement possible de connecter le bloqueur d'appels CLIBASE v6 à une ligne sur laquelle est déjà présent un fax ou un système d'alarme. Si un système d'alarme est présent, il doit toujours être connecté en amont du boitier CLIBASE (mesure de précaution). Si un fax est également présent et selon le branchement appliqué, celui-ci pourra également profiter des bienfaits du système CLIBASE.

### Y a-t-il des conditions particulières pour que CLIBASE v6 fonctionne chez moi ?

La condition essentielle pour que le boitier bloqueur d'appels CLIBASE v6 Premium fonctionne est que votre téléphone passe par une box Internet. Si vous n'avez qu'une ligne analogique RTC ("ligne France Télécom"), vous pourrez y utiliser le v6 Basic. Le Premium y sera utilisable une fois que votre opérateur vous aura fourni le "boitier fixe". Il s'agit d'un appareil progressivement distribué à tous les utilisateurs de lignes téléphoniques classiques dans le cadre de l'arrêt programmé de la téléphonie RTC. Vous pouvez vous-même demander à votre opérateur de vous fournir ce boitier et commander ensuite votre CLIBASE.  
Le CLIBASE v6 Basic peut, lui, fonctionner sur une ligne analogique France Télécom. Il suffira alors de vous assurer que le service de présentation du numéro est bien actif sur la ligne (= le téléphone affiche le numéro/nom des appelants).

### Je dispose d'un MAC (iOS) ou d'un PC sous Linux, est-ce compatible ?

Le bloqueur d'appels indésirables CLIBASE V6 se paramètre via une interface web (intranet).  
Il peut donc être configuré depuis n'importe quel appareil disposant d'un navigateur Internet : PC sous Windows/Linux, MAC, Smartphone, Tablette, console de jeux... En revanche, les mises à jour logicielles du CLIBASE ne peuvent être faites que depuis un environnement Windows.

### J'ai plusieurs téléphones, le boitier CLIBASE v6 bloquera-t-il les appels sur tous mes téléphones ?

Le boitier CLIBASE v6 permet de bloquer les appels publicitaires et indésirables sur l'ensemble des téléphones raccordés à sa prise "TEL". Lorsqu'un logement comporte plusieurs téléphones sans fil, c'est directement leur base qui est connectée à cette prise "TEL" et l'ensemble des combinés est donc protégé contre les appels malveillants.

### Je suis en liste rouge, est-ce gênant ?

Être en liste rouge signifie que votre numéro ne paraît pas dans les annuaires et/ou que votre numéro ne s'affiche pas sur le téléphone des personnes que vous appelez. Cela n'empêchera en rien le Clibase de fonctionner correctement, et de vous protéger davantage contre les appels importuns sur votre téléphone fixe.


## Informations connues

### Fichiers

|                  |                    |               |               |                   |
|-------           |-------             |-------        |-------        |-------            |
| cadenas.png      | favicon.ico        | header.inc    | reboot.cgi    | drap_pref/31.png  |
| clibase.png      | fgen.bin           | index.htm     | reglages.htm  | drap_pref/32.png  |
| doctype.inc      | fgen.wav           | infotech.htm  | styles.css    | drap_pref/33.png  |
| eeprom_dump.bin  | fonctions.js       | journal.htm   | tel.png       | drap_pref/41.png  |
| ethconfig.htm    | footer.inc         | listes.htm    | tests.xml     | drap_pref/49.png  |
| etoile.png       | gest_btns_menu.js  | maj.htm       | upload.htm    |                   |


### Matériels

- Contôleur Microship PIC18F67J60
- Afficheur Sitronix ST7565P

### EEPROM

Un dump de l'EEPROM peut être réalisé à partir de la page [http://monclibasev6/infotech.htm](http://monclibasev6/infotech.htm) ([http://monclibasev6/eeprom_dump.bin?dat=C](http://monclibasev6/eeprom_dump.bin?dat=C))

Il se trouve que deux autres dump peuvent être réalisés :
- [http://monclibasev6/eeprom_dump.bin?dat=C](http://monclibasev6/eeprom_dump.bin?dat=J)
- [http://monclibasev6/eeprom_dump.bin?dat=C](http://monclibasev6/eeprom_dump.bin?dat=L)

Ces deux derniers semblent contenir la liste et l'historique des noms connus

## Liens

### Site

- Actuel  
[https://www.clibase.com/](https://www.clibase.com/)

- Avant arrêt (The Wayback Machine)  
[https://web.archive.org/web/20200809225710/http://clibase.com/](https://web.archive.org/web/20200809225710/http://clibase.com/)

- Après arrêt (TWM)  
[https://web.archive.org/web/20211022081216/http://clibase.com/](https://web.archive.org/web/20211022081216/http://clibase.com/)

### Notices

- V6 Premium : [http://www.clibase.com/notices/notice_clibase_v6_premium_rev_1_1.pdf](http://www.clibase.com/notices/notice_clibase_v6_premium_rev_1_1.pdf)
- V6 Basic : [http://www.clibase.com/notices/notice_clibase_v6_basic_rev_1_0.pdf](http://www.clibase.com/notices/notice_clibase_v6_basic_rev_1_0.pdf)
- V5 : [https://www.clibase.com/notices/notice_clibase_v5_rev_1_1.pdf](https://www.clibase.com/notices/notice_clibase_v5_rev_1_1.pdf)
- V4 : [https://www.clibase.com/notices/notice_clibase_v4_rev_1_4.pdf](https://www.clibase.com/notices/notice_clibase_v4_rev_1_4.pdf)
- V3 : [https://www.clibase.com/notices/notice_clibase_primo_v3.pdf](https://www.clibase.com/notices/notice_clibase_primo_v3.pdf)
- Primo V1/V2 : [https://www.clibase.com/notices/notice_clibase_primo_v1_v2_rev_1_1.pdf](https://www.clibase.com/notices/notice_clibase_primo_v1_v2_rev_1_1.pdf)

### Firmwares officiels

- V1.0.1 : [https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.1.exe](https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.1.exe)
- V1.0.2 : n/d
- V1.0.3 : [https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.3.exe](https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.3.exe)
- V1.0.4 : [https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.4.exe](https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.4.exe)
- V1.0.5 : [https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.5.exe](https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.5.exe)

### Firmware officiels sur TWM

- V1.0.1 : [https://web.archive.org/web/20211021132519/https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.1.exe](https://web.archive.org/web/20211021132519/https://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.1.exe)
- V1.0.2 : n/d
- V1.0.3 : [https://web.archive.org/web/20211021132054/http://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.3.exe](https://web.archive.org/web/20211021132054/http://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.3.exe)
- V1.0.4 : [https://web.archive.org/web/20211021132133/http://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.4.exe](https://web.archive.org/web/20211021132133/http://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.4.exe)
- V1.0.5 : [https://web.archive.org/web/20211021132332/http://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.5.exe](https://web.archive.org/web/20211021132332/http://clibase.com/v6/maj/MAJ_CLIBASE_V6_Premium_V1.0.5.exe)

## Changelog

[See here](./CHANGELOG.md)

## Outils

- Détecteur réseau : [https://www.clibase.com/v6/CLIBASE%20V6%20-%20D%c3%a9tecteur%20r%c3%a9seau%20(rev%201.0).exe](https://www.clibase.com/v6/CLIBASE%20V6%20-%20D%c3%a9tecteur%20r%c3%a9seau%20(rev%201.0).exe)
- Kit de développement : [https://www.clibase.com/v6/CLIBASE%20V6%20-%20Kit%20d%c3%a9veloppeur%20OpenSource%20%5b2020-02-21%5d.rar](https://www.clibase.com/v6/CLIBASE%20V6%20-%20Kit%20d%c3%a9veloppeur%20OpenSource%20%5b2020-02-21%5d.rar)
- Installeur de firmware officiel : [https://www.clibase.com/v6/installeurs_FWs_officiels_CLIBASE.rar](https://www.clibase.com/v6/installeurs_FWs_officiels_CLIBASE.rar)

## Matériels

### Microship PIC18F67J60

- [https://www.microchip.com/en-us/product/PIC18F67J60](https://www.microchip.com/en-us/product/PIC18F67J60)

### Sitronix ST7565P

[https://newhavendisplay.com/app_notes/ST7565P.pdf](https://newhavendisplay.com/app_notes/ST7565P.pdf)