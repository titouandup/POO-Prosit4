# POO-Prosit4

## CESI & Dragons - L'armée s'agrandit

### Présentation

Dans ce prosit, le projet CESI & Dragons évolue avec l'ajout de nouveaux personnages. Chaque personnage possède ses propres caractéristiques et son propre mode d'attaque.

L'objectif est d'unifier ces implémentations grâce aux mécanismes de la programmation orientée objet afin de disposer d'un moteur de combat commun et facilement maintenable.

### Objectif

Comment utiliser une méthode générique de combat tout en conservant les attaques spécifiques de chaque personnage ?

### Mots-clés

- Héritage
- Polymorphisme
- Virtualisation
- Fonctions virtuelles
- Surcharge de fonctions
- Fonctions génériques

### Contraintes

- Conserver les types d'attaque propres à chaque personnage
- Utiliser le même moteur de combat
- Uniformiser l'écriture du code
- Faciliter l'ajout de nouveaux personnages

### Architecture

La classe `Personnage` représente le modèle commun à tous les combattants. Elle centralise les caractéristiques et les fonctions communes.

Les classes suivantes héritent de `Personnage` :

- `Guerrier`
- `Archer`
- `Mage`
- `Dragon`
- `Gobelin`
- `Troll`

Chaque classe fille peut spécialiser son attaque grâce au polymorphisme, tandis que le programme principal manipule les personnages à travers des pointeurs vers `Personnage`.

### Livrables

- Diagramme des classes
- Implémentation des personnages
- Programme principal complété

```mermaid
classDiagram
class Personnage {
    #pv : int
    #pa : int
    #niveau : int
    +Personnage()
    +Personnage(int, int, int)
    +Personnage(Personnage)
    +~Personnage()
    +setPV() void
    +setPA() void
    +setNiveau() void
    +getPV() int
    +getPA() int
    +getNiveau() int
    +subitDegats() void
    +attaque() int <<virtual>>
    +affiche() void
    +EstVivant() bool
}

class Guerrier {
    -Nom : string
    +Guerrier()
    +Guerrier(int, int, int, string)
    +Guerrier(Guerrier)
    +setNom() void
    +getNom() string
    +attaque() int <<override>>
}

class Mage {
    +Mage()
    +Mage(int, int, int, string)
    +Mage(Mage)
    +setNom() void
    +getNom() string
    -Nom : string
    +attaque() int <<override>>
}

class Archer {
    +Archer()
    +Archer(int, int, int, string)
    +Archer(Archer)
    +setNom() void
    +getNom() string
    -Nom : string
    +attaque() int <<override>>
}

class Dragon {
    +Dragon()
    +Dragon(int, int, int)
    +Dragon(Dragon)
    +attaque() int <<override>>
}

class Gobelin {
    +Gobelin()
    +Gobelin(int, int, int)
    +Gobelin(Gobelin)
    +attaque() int <<override>>
}

class Troll {
    +Troll()
    +Troll(int, int, int)
    +Troll(Troll)
    +attaque() int <<override>>
}

Personnage<|--Guerrier
Personnage<|--Mage
Personnage<|--Archer
Personnage<|--Dragon
Personnage<|--Gobelin
Personnage<|--Troll
