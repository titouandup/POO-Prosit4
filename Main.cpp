int main()
{

    Guerrier guerrier{12, 8, 4, "Arthur"};
    Archer archer{10, 6, 3, "Legolas"};
    Mage mage{8, 10, 5, "Merlin"};

    Dragon dragon{20, 12, 6};
    Gobelin gobelin{6, 4, 2};
    Troll troll{18, 9, 5};

    Personnage *combattants[6];

    combattants[0] = &guerrier;
    combattants[1] = &archer;
    combattants[2] = &mage;
    combattants[3] = &dragon;
    combattants[4] = &gobelin;
    combattants[5] = &troll;

    cout << "Etat initial :" << endl;

    for (int i = 0; i < 6; i++)
    {
        combattants[i]->affiche();
    }

    cout << endl
         << "Le combat commence !" << endl;

    int degats;

    degats = combattants[0]->attaque();
    combattants[3]->subitDegats(degats);

    degats = combattants[3]->attaque();
    combattants[0]->subitDegats(degats);

    degats = combattants[1]->attaque();
    combattants[4]->subitDegats(degats);

    degats = combattants[4]->attaque();
    combattants[1]->subitDegats(degats);

    degats = combattants[2]->attaque();
    combattants[5]->subitDegats(degats);

    degats = combattants[5]->attaque();
    combattants[2]->subitDegats(degats);

    cout << endl
         << "Etat final :" << endl;

    for (int i = 0; i < 6; i++)
    {
        combattants[i]->affiche();
    }

    return 0;
}
