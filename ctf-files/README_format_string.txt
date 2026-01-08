=== FORMAT STRING CHALLENGE ===

DESCRIPTION :
Ce programme contient une vulnérabilité de format string.
Votre objectif est de modifier la variable 'access_granted' pour obtenir le flag.

FICHIERS :
- format_string : Binaire ELF 64-bit (exécutable Linux)
- format_string.c : Code source (pour analyse)

OBJECTIF :
Modifiez la variable 'access_granted' pour qu'elle contienne 0x1337c0de

INDICES :
1. Le programme utilise printf() avec un input utilisateur non sanitisé
2. Vous pouvez lire et écrire en mémoire avec les spécificateurs de format
3. L'adresse de 'access_granted' est affichée au démarrage
4. Utilisez %n pour écrire en mémoire
5. Utilisez %x ou %p pour lire la stack

OUTILS RECOMMANDÉS :
- gdb (débogueur)
- python3 avec pwntools
- Format string exploiter
- Calculatrice hex

COMMENT EXÉCUTER :
chmod +x format_string
./format_string

TECHNIQUE D'EXPLOITATION :
1. Utilisez %x pour explorer la stack et trouver votre input
2. Calculez l'offset de votre input sur la stack
3. Placez l'adresse de 'access_granted' au début de votre input
4. Utilisez %n pour écrire à cette adresse
5. Utilisez des techniques avancées (%hn, padding) pour écrire 0x1337c0de

EXEMPLE DE PAYLOAD (simplifié) :
[adresse_access_granted]%[offset]$n

PROTECTIONS :
- Stack canary: OUI
- NX: OUI
- PIE: NON
- RELRO: Partial

FLAG FORMAT : TPM{...}

DIFFICULTÉ : Difficile (★★★★☆)
POINTS : 200

RESSOURCES :
- https://www.exploit-db.com/docs/english/28476-linux-format-string-exploitation.pdf
- https://cs155.stanford.edu/papers/formatstring-1.2.pdf

Bon courage !
