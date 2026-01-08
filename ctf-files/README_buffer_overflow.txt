=== BUFFER OVERFLOW CHALLENGE ===

DESCRIPTION :
Ce programme contient une vulnérabilité de buffer overflow classique.
Votre objectif est d'écraser la variable 'authenticated' pour obtenir le flag.

FICHIERS :
- buffer_overflow : Binaire ELF 64-bit (exécutable Linux)
- buffer_overflow.c : Code source (pour analyse)

OBJECTIF :
Modifiez la variable 'authenticated' pour qu'elle contienne la valeur 0xdeadbeef

INDICES :
1. Le programme utilise gets() qui ne vérifie pas la taille du buffer
2. Le buffer fait 64 bytes
3. La variable 'authenticated' est placée après le buffer sur la stack
4. Vous devez envoyer plus de 64 bytes pour écraser 'authenticated'

OUTILS RECOMMANDÉS :
- gdb (débogueur)
- python ou python3 (pour générer le payload)
- pattern_create et pattern_offset (de pwntools)
- checksec (pour vérifier les protections)

COMMENT EXÉCUTER :
chmod +x buffer_overflow
./buffer_overflow

EXEMPLE DE PAYLOAD :
python3 -c 'print("A"*72 + "\xef\xbe\xad\xde")' | ./buffer_overflow

PROTECTIONS :
- Stack canary: NON
- NX: OUI
- PIE: NON
- RELRO: Partial

FLAG FORMAT : TPM{...}

DIFFICULTÉ : Moyen (★★★☆☆)
POINTS : 100

Bon courage !
