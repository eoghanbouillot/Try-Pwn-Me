# 🚀 QUICK START GUIDE - TRY-PWN-ME

## Installation en 3 étapes

### 1️⃣ Télécharger
Téléchargez `try-pwn-me-complete.zip` et décompressez-le.

### 2️⃣ Lancer un serveur local

**Option A - Python (recommandé)**
```bash
cd try-pwn-me
python3 -m http.server 8000
```

**Option B - PHP**
```bash
cd try-pwn-me
php -S localhost:8000
```

**Option C - Node.js**
```bash
cd try-pwn-me
npx http-server
```

### 3️⃣ Accéder
Ouvrez votre navigateur : `http://localhost:8000`

---

## 🎯 Premier Challenge

**Recommandé pour débuter :**

1. Allez sur la page d'accueil
2. Cliquez sur "Challenge 02 - Source Code"
3. Suivez les instructions
4. Utilisez Ctrl+U pour voir le code source
5. Cherchez le flag caché !

---

## 📂 Structure

```
try-pwn-me/
├── index.html              ← Commencez ici !
├── challenge1-8.html       ← Pages des challenges
├── ctf-files/             ← Fichiers téléchargeables
│   ├── crypto_*.zip       ← Challenges crypto
│   └── pwn_*.zip          ← Challenges pwn
├── README.md              ← Documentation complète
└── FLAGS.md               ← Tous les flags (spoilers!)
```

---

## 💡 Conseils

### Pour les challenges Web (01, 02, 08)
- ✅ Aucun prérequis spécial
- ✅ Fonctionne directement dans le navigateur
- 🔧 Ouvrez les DevTools avec F12

### Pour les challenges Crypto (03, 04, 05)
- 📥 Téléchargez les fichiers depuis la page du challenge
- 🔧 Utilisez Python ou CyberChef
- 💻 Les fichiers sont dans `ctf-files/crypto_*.zip`

### Pour les challenges PWN (06, 07)
- ⚠️ **Nécessite Linux !**
- 📥 Téléchargez les binaires depuis la page
- 🔧 Utilisez GDB et pwntools
- 💡 Lisez les README inclus dans les archives

---

## 🏆 Ordre Recommandé

1. **Challenge 02** (Très Facile) - 5 min
2. **Challenge 01** (Facile) - 10 min
3. **Challenge 03** (Facile) - 15 min
4. **Challenge 09** (Facile) - 15 min
4. **Challenge 04** (Moyen) - 20 min
5. **Challenge 08** (Moyen) - 30 min
6. **Challenge 06** (Moyen) - 1-2h
7. **Challenge 05** (Difficile) - 2-3h
8. **Challenge 07** (Difficile) - 3-4h

---

## ❓ Besoin d'aide ?

1. **Indices** : Chaque challenge a des indices intégrés
2. **README.md** : Documentation complète
3. **challenges-list.md** : Solutions détaillées
4. **FLAGS.md** : Tous les flags (si vraiment bloqué)

---

## 🔒 Sécurité

⚠️ **N'exécutez les binaires PWN que dans une VM !**

VM recommandées :
- Kali Linux
- Parrot OS
- Ubuntu dans VirtualBox

---

## 🎓 Ressources

**Web Security**
- PortSwigger Academy
- OWASP Top 10

**Crypto**
- CyberChef (gchq.github.io/CyberChef)
- CryptoHack

**PWN**
- pwn.college
- LiveOverflow (YouTube)

---

## 📊 Progression

```
☐ Challenge 02 - Source Code (25 pts)
☐ Challenge 01 - User-Agent (50 pts)
☐ Challenge 03 - Caesar Cipher (50 pts)
☐ Challenge 04 - Base64 Layers (100 pts)
☐ Challenge 08 - SQL Injection (100 pts)
☐ Challenge 06 - Buffer Overflow (100 pts)
☐ Challenge 05 - RSA Weak Key (200 pts)
☐ Challenge 07 - Format String (200 pts)

Total : ___ / 725 points
```

---

**Bon apprentissage ! 🚀**

*N'oubliez pas : L'objectif est d'apprendre, pas juste de trouver les flags !*
