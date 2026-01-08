# 🎮 TRY-PWN-ME - Plateforme CTF d'Entraînement

## 📋 Vue d'ensemble

Plateforme d'entraînement CTF (Capture The Flag) complète avec 8 challenges couvrant 4 catégories différentes.

**🎯 Total : 8 challenges • 4 catégories • 725 points**

---

## 🚀 Démarrage Rapide

### Installation

1. Téléchargez tous les fichiers
2. Placez-les dans un dossier sur votre serveur web (Apache, Nginx) ou utilisez un serveur local
3. Ouvrez `index.html` dans votre navigateur
4. Pour les challenges PWN, vous aurez besoin d'un environnement Linux

### Serveur Local

```bash
# Python 3
python3 -m http.server 8000

# PHP
php -S localhost:8000

# Node.js (avec http-server)
npx http-server
```

Puis accédez à `http://localhost:8000`

---

## 📁 Structure des Fichiers

```
try-pwn-me/
├── index.html              # Page d'accueil avec tous les challenges
├── challenge1.html         # User-Agent Challenge
├── challenge2.html         # Source Code Challenge
├── challenge3.html         # Caesar Cipher
├── challenge4.html         # Base64 Multi-Layers
├── challenge5.html         # RSA Weak Key
├── challenge6.html         # Buffer Overflow
├── challenge7.html         # Format String
├── challenge8.html         # SQL Injection
├── ctf-files/             # Fichiers téléchargeables pour les challenges
│   ├── crypto_caesar.zip
│   ├── crypto_base64.zip
│   ├── crypto_rsa.zip
│   ├── pwn_buffer_overflow.zip
│   └── pwn_format_string.zip
├── README.md              # Ce fichier
└── challenges-list.md     # Documentation détaillée
```

---

## 🎯 Challenges Disponibles

### 🌐 Web (3 challenges - 175 points)

| # | Nom | Difficulté | Points | Description |
|---|-----|------------|--------|-------------|
| 01 | User-Agent | ⭐⭐ Facile | 50 | Modifier les headers HTTP |
| 02 | Source Code | ⭐ Très Facile | 25 | Trouver un flag caché dans le HTML |
| 08 | SQL Injection | ⭐⭐⭐ Moyen | 100 | Contourner l'authentification SQL |

### 🔐 Cryptographie (3 challenges - 350 points)

| # | Nom | Difficulté | Points | Description |
|---|-----|------------|--------|-------------|
| 03 | Caesar Cipher | ⭐⭐ Facile | 50 | Déchiffrer ROT13 |
| 04 | Base64 Layers | ⭐⭐⭐ Moyen | 100 | Décoder 5 couches de Base64 |
| 05 | RSA Weak Key | ⭐⭐⭐⭐ Difficile | 200 | Factoriser RSA faible |

### 💀 PWN / Binary Exploitation (2 challenges - 300 points)

| # | Nom | Difficulté | Points | Description |
|---|-----|------------|--------|-------------|
| 06 | Buffer Overflow | ⭐⭐⭐ Moyen | 100 | Exploiter un débordement de buffer |
| 07 | Format String | ⭐⭐⭐⭐ Difficile | 200 | Vulnérabilité format string |

---

## 🔧 Prérequis par Catégorie

### Web
- ✅ Navigateur moderne (Chrome, Firefox, Edge)
- ✅ Outils développeur (F12)
- 📦 Extensions utiles : User-Agent Switcher

### Cryptographie
- ✅ Python 3.x (recommandé)
- 📦 Outils en ligne : CyberChef, dCode.fr
- 📦 Modules Python : base64, sympy

### PWN
- ⚠️ **IMPORTANT : Environnement Linux requis**
- ✅ GDB (débogueur)
- ✅ GCC (compilateur)
- 📦 pwntools : `pip3 install pwntools`
- 📦 pwndbg ou peda (extensions GDB)
- 💡 VM recommandée : Kali Linux, Parrot OS

---

## 🎓 Pour les Débutants

### Par où commencer ?

**Ordre recommandé :**

1. **Challenge 02** - Source Code (Très Facile) - Apprendre à inspecter le code
2. **Challenge 01** - User-Agent (Facile) - Manipulation HTTP basique
3. **Challenge 03** - Caesar Cipher (Facile) - Introduction crypto
4. **Challenge 04** - Base64 Layers (Moyen) - Encodage multi-couches
5. **Challenge 08** - SQL Injection (Moyen) - Injection SQL basique
6. **Challenge 06** - Buffer Overflow (Moyen) - Premier pwn
7. **Challenge 05** - RSA Weak Key (Difficile) - Crypto avancée
8. **Challenge 07** - Format String (Difficile) - Pwn avancé

### Ressources d'apprentissage

- **Web Security** : PortSwigger Academy, OWASP Top 10
- **Cryptographie** : CryptoHack, Cryptopals
- **PWN** : pwn.college, Nightmare, LiveOverflow
- **Général** : TryHackMe, HackTheBox, PicoCTF

---

## 📥 Fichiers Téléchargeables

Les challenges nécessitant des fichiers ont des archives ZIP disponibles :

- **crypto_caesar.zip** - Message chiffré en ROT13
- **crypto_base64.zip** - Message encodé 5 fois
- **crypto_rsa.zip** - Clé publique RSA et message chiffré
- **pwn_buffer_overflow.zip** - Binaire ELF + code source + README
- **pwn_format_string.zip** - Binaire ELF + code source + README

Chaque archive contient tous les fichiers nécessaires pour le challenge.

---

## 🏆 Système de Points

- ⭐ Très Facile : 25 points
- ⭐⭐ Facile : 50 points
- ⭐⭐⭐ Moyen : 100 points
- ⭐⭐⭐⭐ Difficile : 200 points
- ⭐⭐⭐⭐⭐ Expert : 500 points (challenges futurs)

**Total actuel : 725 points**

---

## 🔒 Flags

Format standard : `TPM{contenu_du_flag}`

**Exemples :**
- `TPM{us3r_ag3nt_m4st3r_2024}`
- `TPM{s0urc3_c0d3_1s_y0ur_fr13nd}`
- `TPM{buff3r_0v3rfl0w_m4st3r}`

⚠️ **Les flags sont sensibles à la casse !**

---

## 🛠️ Outils Recommandés

### Web
- Burp Suite Community
- OWASP ZAP
- Browser DevTools (F12)
- curl, wget

### Crypto
- CyberChef (en ligne)
- Python + pycryptodome
- John the Ripper
- Hashcat

### PWN
- GDB + pwndbg/peda
- pwntools (Python)
- ROPgadget
- checksec
- radare2 / Ghidra

---

## ⚠️ Avertissements Importants

### Éthique et Légalité

- ✅ Ces challenges sont **uniquement à des fins éducatives**
- ❌ **N'utilisez JAMAIS ces techniques sur des systèmes réels sans autorisation**
- ⚖️ Le hacking sans permission est **illégal** et peut entraîner des poursuites
- 🎓 Pratiquez uniquement sur :
  - Cette plateforme CTF
  - Plateformes légales (HackTheBox, TryHackMe)
  - Vos propres systèmes
  - Systèmes avec autorisation explicite écrite

### Sécurité

- 🔒 Les challenges PWN doivent être exécutés dans une **VM isolée**
- 💻 N'exécutez pas de binaires non vérifiés sur votre système principal
- 🛡️ Utilisez des environnements sandbox pour l'exploitation binaire

---

## 🚧 Challenges Futurs

Catégories en développement :

- **Forensics** : Analyse d'images, PCAP, mémoire
- **Reverse Engineering** : Crackme, déobfuscation
- **OSINT** : Recherche d'informations
- **Steganographie** : Messages cachés dans des images
- **Programmation** : Défis algorithmiques

---

## 🤝 Contribution

Pour signaler des bugs ou proposer des améliorations :

1. Testez le challenge problématique
2. Documentez le problème
3. Proposez une solution
4. Contactez les mainteneurs

---

## 📞 Support

**Besoin d'aide ?**

- 📚 Consultez `challenges-list.md` pour des solutions détaillées
- 💡 Utilisez les indices fournis dans chaque challenge
- 🔍 Recherchez des tutoriels en ligne sur les techniques spécifiques
- 👥 Rejoignez des communautés CTF (Discord, Reddit r/netsec)

---

## 📜 Licence

Cette plateforme est à but éducatif. Utilisez-la de manière responsable et éthique.

---

## 🎯 Objectifs Pédagogiques

En complétant ces challenges, vous apprendrez :

✅ Les bases de la sécurité web (HTTP, HTML, SQL)  
✅ Les principes de cryptographie (chiffrement, encodage)  
✅ L'exploitation binaire (buffer overflow, format string)  
✅ L'utilisation d'outils de sécurité professionnels  
✅ La méthodologie de résolution de problèmes en sécurité  
✅ L'importance de coder de manière sécurisée  

---

**Made with ♥ for hackers by hackers**

*Try-Pwn-Me © 2026 - Plateforme éducative CTF*

---

## 📊 Progression Recommandée

```
Débutant (0-2 mois)
├── Challenge 02 (Source Code)
├── Challenge 01 (User-Agent)
└── Challenge 03 (Caesar)

Intermédiaire (2-6 mois)
├── Challenge 04 (Base64)
├── Challenge 08 (SQL Injection)
└── Challenge 06 (Buffer Overflow)

Avancé (6+ mois)
├── Challenge 05 (RSA)
└── Challenge 07 (Format String)
```

**Bon apprentissage ! 🚀**
