# 🎮 TRY-PWN-ME - RÉPERTOIRE DES CHALLENGES

## 📋 Vue d'ensemble

Plateforme d'entraînement CTF (Capture The Flag) pour apprendre la sécurité informatique de manière pratique.

**Design:** Sobre, noir mat et blanc  
**Architecture:** Fichiers HTML séparés par challenge  
**Format des flags:** `TPM{contenu_du_flag}`

---

## 📁 STRUCTURE DES FICHIERS

```
try-pwn-me/
├── index.html          # Page d'accueil principale
├── challenge1.html     # Challenge User-Agent
├── challenge2.html     # Challenge Source Code
├── challenge9.html     # Challenge Cookie Manipulation
└── challenges.md       # Ce fichier (documentation)
```

---

## 🌐 CATÉGORIE: WEB

### 1. User-Agent Challenge 🕵️
**Fichier:** `challenge1.html`  
**Difficulté:** Facile  
**Points:** 50  
**Catégorie:** Web - HTTP Headers

**Description:**  
Seuls les administrateurs peuvent accéder à cette ressource protégée. Le serveur vérifie l'identité via le header HTTP User-Agent. Vous devez modifier votre User-Agent pour inclure le mot "admin".

**Objectif:**  
Contourner la vérification d'authentification basée sur le User-Agent en modifiant les headers HTTP de votre requête.

**Flag:**  
`TPM{us3r_ag3nt_m4st3r_2024}`

**Compétences développées:**
- Manipulation des headers HTTP
- Compréhension du protocole HTTP
- Utilisation des outils développeur
- Techniques de spoofing basiques
- Identification de vulnérabilités côté client

**Outils recommandés:**
- **Extensions navigateur:** User-Agent Switcher and Manager
- **DevTools:** F12 → Network → Modifier headers
- **curl:** `curl -A "admin" URL`
- **Burp Suite:** Intercepter et modifier les requêtes
- **OWASP ZAP:** Alternative à Burp Suite

**Méthodes de résolution:**

**Méthode 1 - Extension navigateur:**
```
1. Installer "User-Agent Switcher and Manager"
2. Créer un User-Agent personnalisé contenant "admin"
3. Activer l'extension et recharger la page
4. Cliquer sur "Vérifier l'accès"
```

**Méthode 2 - curl en ligne de commande:**
```bash
curl -A "admin" https://votre-site.com/challenge1.html
```

**Méthode 3 - Outils développeur:**
```
1. F12 pour ouvrir les DevTools
2. Onglet Network
3. Modifier les headers de requête
4. Ajouter/Modifier User-Agent pour inclure "admin"
```

**Vulnérabilité exploitée:**  
Vérification d'authentification côté client facilement contournable. En production, l'authentification doit TOUJOURS être vérifiée côté serveur.

---

### 2. Source Code Challenge 🔍
**Fichier:** `challenge2.html`  
**Difficulté:** Très Facile  
**Points:** 25  
**Catégorie:** Web - Code Source

**Description:**  
Les développeurs laissent parfois des informations sensibles dans le code source des pages web. Un flag est caché quelque part dans le HTML de cette page, soit dans un commentaire, soit dans un élément masqué.

**Objectif:**  
Examiner le code source de la page pour trouver le flag caché. Comprendre que tout ce qui est côté client est accessible à l'utilisateur.

**Flag:**  
`TPM{s0urc3_c0d3_1s_y0ur_fr13nd}`

**Compétences développées:**
- Analyse du code source HTML
- Compréhension de la structure web
- Reconnaissance basique (OSINT)
- Attention aux détails
- Utilisation des outils développeur

**Outils recommandés:**
- **Code source:** Clic droit → "Afficher le code source"
- **Raccourci:** Ctrl+U (Windows/Linux) ou Cmd+U (Mac)
- **DevTools:** F12 → Onglet Elements/Inspector
- **Recherche:** Ctrl+F dans le code source
- **URL:** `view-source:URL_DE_LA_PAGE`

**Méthodes de résolution:**

**Méthode 1 - Clic droit:**
```
1. Clic droit sur la page
2. "Afficher le code source de la page"
3. Chercher les commentaires HTML <!-- -->
4. Chercher les éléments avec class="secret-flag"
5. Le flag est dans un commentaire à l'intérieur d'un div caché
```

**Méthode 2 - Raccourci clavier:**
```
1. Ctrl+U (ou Cmd+U sur Mac)
2. Ctrl+F pour rechercher "flag", "secret", "TPM"
3. Examiner les résultats
```

**Méthode 3 - DevTools:**
```
1. F12 pour ouvrir les DevTools
2. Onglet Elements/Inspector
3. Chercher les éléments avec display: none
4. Examiner leur contenu et leurs commentaires
```

**Indices dans le code:**
- Un premier commentaire HTML donne un indice
- Un élément avec la classe `.secret-flag` est caché avec `display: none`
- Le flag est dans un commentaire HTML à l'intérieur de cet élément

**Vulnérabilité illustrée:**  
Stockage d'informations sensibles côté client. Les données côté client sont toujours accessibles et ne doivent jamais contenir de secrets (passwords, API keys, etc.).

---

## 📊 STATISTIQUES

**Total de challenges:** 2  
**Catégories disponibles:** Web (2)  
**Points totaux disponibles:** 875

**Répartition par difficulté:**
- ⭐ Très Facile: 1 challenge (25 points)
 - ⭐⭐ Facile: 3 challenges (150 points)
 - ⭐⭐⭐ Moyen: 3 challenges (300 points)
 - ⭐⭐⭐⭐ Difficile: 2 challenges (400 points)
- ⭐⭐⭐⭐⭐ Expert: 0 challenge

---

## 🎯 CHALLENGES À VENIR

### Web - Niveau Débutant
- [x] Cookie Manipulation (Modifier les cookies)
- [ ] Robots.txt Discovery (Fichier robots.txt)
- [ ] Hidden Form Fields (Champs cachés dans les formulaires)
- [ ] Client-Side Validation Bypass (Contourner validation JS)

### Web - Niveau Intermédiaire
- [x] SQL Injection - Login Bypass
- [ ] XSS Reflected (Cross-Site Scripting)
- [ ] Directory Traversal (Path Traversal)
- [ ] File Upload Bypass
- [ ] XXE (XML External Entity)
- [ ] IDOR (Insecure Direct Object Reference)

### Web - Niveau Avancé
- [ ] JWT Token Forgery
- [ ] SSRF (Server-Side Request Forgery)
- [ ] Deserialization Attack
- [ ] Race Condition
- [ ] HTTP Request Smuggling

### Cryptographie
- [x] Caesar Cipher Decoding
- [x] Base64 Multiple Encoding
- [ ] ROT13 with Twist
- [ ] Hash Cracking (MD5/SHA1)
- [x] Weak RSA Implementation

### Forensics
- [ ] Image Metadata (EXIF)
- [ ] Steganography - LSB
- [ ] Network Packet Analysis (pcap)
- [ ] Memory Dump Analysis
- [ ] Log File Analysis

### Reverse Engineering
- [ ] Crackme - Simple Password
- [ ] Binary Patching
- [ ] Anti-Debugging Bypass
- [ ] Code Obfuscation Analysis

### Programmation
- [ ] Algorithm Challenge
- [ ] Automation Script
- [ ] API Exploitation

---

## 📚 RESSOURCES D'APPRENTISSAGE

### Pour les débutants
- **OWASP Top 10** - Les 10 vulnérabilités web les plus critiques
- **PortSwigger Web Security Academy** - Cours gratuits sur la sécurité web
- **HackTheBox Academy** - Modules d'apprentissage structurés
- **TryHackMe** - Parcours d'apprentissage guidés
- **PentesterLab** - Exercices pratiques de pentesting

### Documentation technique
- **MDN Web Docs** - Documentation HTML/CSS/JavaScript
- **OWASP Cheat Sheets** - Aide-mémoires de sécurité
- **CWE (Common Weakness Enumeration)** - Base de données de vulnérabilités

### Outils essentiels
- **Burp Suite Community** - Proxy d'interception web
- **OWASP ZAP** - Scanner de vulnérabilités open-source
- **curl** - Client HTTP en ligne de commande
- **Python** - Pour l'automatisation et le scripting
- **Git** - Pour versionner vos scripts et notes

---

## 🏆 SYSTÈME DE SCORING

**Distribution des points:**
- ⭐ Très Facile: 25 points
- ⭐⭐ Facile: 50 points
- ⭐⭐⭐ Moyen: 100 points
- ⭐⭐⭐⭐ Difficile: 200 points
- ⭐⭐⭐⭐⭐ Expert: 500 points

**Bonus possibles:**
- First Blood: +10% (premier à résoudre)
- Speed Run: +5% (résolution rapide)
- No Hints: +10% (sans utiliser d'indices)

---

## 💡 CONSEILS GÉNÉRAUX

### Méthodologie
1. **Lisez attentivement** la description du challenge
2. **Prenez des notes** sur vos découvertes
3. **Testez systématiquement** différentes approches
4. **Utilisez les indices** si vous êtes bloqué
5. **Documentez vos solutions** pour apprendre

### Approche de résolution
- Commencez par la reconnaissance (information gathering)
- Identifiez les points d'entrée et les fonctionnalités
- Testez les cas limites et les comportements inattendus
- Utilisez les outils appropriés pour chaque type de challenge
- N'hésitez pas à faire des recherches (Google, forums, documentation)

### Éthique et légalité
- Ces challenges sont à des fins éducatives uniquement
- N'utilisez jamais ces techniques sur des systèmes réels sans autorisation
- Le hacking éthique nécessite toujours un consentement explicite
- Respectez les lois et les règlements en vigueur

---

## 🔧 CONFIGURATION TECHNIQUE

### Prérequis
- Navigateur moderne (Chrome, Firefox, Edge)
- Outils développeur activés (F12)
- Connexion Internet (pour certains challenges)

### Extensions recommandées
- User-Agent Switcher and Manager
- Cookie Editor
- Wappalyzer (identification des technologies)
- FoxyProxy (gestion de proxy)

### Environnement optionnel
- Machine virtuelle Linux (Kali, Parrot)
- Burp Suite installé
- Python 3.x
- curl, wget, netcat

---

## 📝 FORMAT DES FLAGS

**Format standard:** `TPM{contenu_du_flag}`

**Exemples:**
- `TPM{us3r_ag3nt_m4st3r_2024}`
- `TPM{s0urc3_c0d3_1s_y0ur_fr13nd}`

**Règles:**
- Toujours en majuscules pour le préfixe TPM
- Accolades obligatoires { }
- Le contenu peut mélanger majuscules, minuscules, chiffres, underscores
- Sensible à la casse (respectez exactement le format)

---

## 🔄 HISTORIQUE DES VERSIONS

**Version 1.0** - Janvier 2026
- Lancement initial de la plateforme
- 2 challenges web disponibles
- Design sobre noir et blanc
- Architecture avec fichiers HTML séparés

---

## 📬 CONTACT & FEEDBACK

Pour toute question, suggestion ou signalement de bug :
- Utilisez le système de feedback intégré
- Contactez l'équipe de développement
- Contribuez avec vos propres challenges

---

*Made with ♥ for hackers by hackers*  
*Try-Pwn-Me © 2026 - Plateforme éducative CTF*