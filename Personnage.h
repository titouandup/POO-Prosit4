<<<<<<< HEAD
#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
};

class Guerrier : public Personnage
{
    
};

class Archer : public Personnage
{
};

class Mage : public Personnage
{
};

class Dragon : public Personnage
{
};

class Gobelin : public Personnage
{
};

class Troll : public Personnage
{
};

#endif
=======
#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
private:
    int pv;
    int pa;
    int niveau;

public:

bool EstVivant()
    {
        return pv > 0;
    }

};

class Guerrier : public Personnage
{
};

class Archer : public Personnage
{
};

class Mage : public Personnage
{
};

class Dragon : public Personnage
{
};

class Gobelin : public Personnage
{
};

class Troll : public Personnage
{
};

#endif
>>>>>>> 7b5277c8ee63054a97b4eda47624a49517fb3a50
