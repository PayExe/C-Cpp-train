# Cours 1 — Introduction au logiciel, à la compilation et au C

## 1) C’est quoi un logiciel ?

Un logiciel, c’est un ensemble de lignes de code écrites dans un langage compréhensible par l’humain, puis traduites en langage machine.

Cette conversion s’appelle **la Compilation**.

---

## 2) Types de langages

### Langages compilés

Exemples : C / CPP / GO

- Le code est traduit puis lancé
- Produit un exécutable (.exe)
- Souvent plus rapide

### Langages interprétés

Exemples : Pyhton / JS / PHP / bash

- Le code est traduit pendant l’exécution
- Ne produit pas forcément d’exécutable
- Souvent plus flexible (par exemple :-> un site webn s'il est compilé et qu'on doit faire un fix, il faut faire la modif mais aussi compilé le prog, prendre l'exec, l'envoie sur le serveur, refresh ectect donc voila pourquoi l'interprété est plus flex)

### Langages hybrides

Exemples : Java / C# / TS

---

## 3) Résumé simple

- Le langage compilé passe par un compiler (compileur (en fr t'as capté)) puis produit un exécutable lancé par la machine.
- Le langage interprété utilise un traducteur en runtime, qui fait la traduction en temps réel entre le code et la machine.

Le compilateur fait en sorte que le code soit prêt à être exécuté.

---

## 4) Pourquoi utiliser un langage compilé ?

- Performance
- Contrôle de la mémoire
- Léger et portable (cad un exécutable c'est légé, un programme puissant, quali mais en exect tres léger)

Exemples d’usage :

- Système embarqué (tel, montre connecté, ect)
- Système d’exploitation
- Jeux vidéo
- Logiciel complexe et exigeant

---

## 5) Le langage C dans ce projet

### `cmake`

Permet de build le projet, définir les fichiers à compiler, etc.
Ici on ne touche à rien (check doc C pour plus d'info)

### `main.c`

- `#include` c’est comme un import, avec `<...>`
- Une fonction se déclare avec : type + nom + arguments
- `int main(...)` retourne un nombre
- Pourquoi `int` ? Pour signaler si tout va bien ou s’il y a une erreur (ex : `-1`)

---

## 6) Processus de compilation

1. On écrit le programme dans `main.c`
2. Le préprocesseur traite les directives (`#include`, etc.)
3. La compilation transforme le code en assembleur
4. L’assemblage organise les morceaux en code objet
5. Le linker fait la liaison entre les morceaux pour produire l’exécutable

---

## 7) Détail commande compilation

- gcc main.c -o app ./app (commande de run qu'on voit pas)

Détail :

- `gcc` -> GNU C compileur
- `-o` -> permet de précisé le nom de l'exe
- On peut custom la compilation via CMake (go check doc broski!)

---

## 8) Variables et types

Syntaxe générale :

`type identificateur [=valeur];`

Types :

- `_Bool` (c'est pas True False, c'est 1 et 0 gngngngngngngngn je suis débile)
- `char`
- `signed char`
- `int`
- `long int`
- `long long int`
- `float`
- `double`
- `long double`

(c'est face a face t'as capté tu vois genre char -> caractere)

Sert à stocker un :

- entier
- caractere
- entier
- entier
- entier
- entier
- réel
- réel
- réel

(la aussi :D)

Mini :

- 0
- Ascii Table
- -127 (il stock jusqu'a -127)
- -32 767 (huh pas capté)
- -2 147 483 647
- huh ouais
- ouais aussi
- aussi
- ouais nombres grand

Maxi :

- 1
- Ascii Table
- 127
- 32 767
- 2 147 483 647
- ...
- ... x2
- ... x3
- allez frr

(je recopierais sur le diapo hein)
