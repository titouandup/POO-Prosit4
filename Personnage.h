#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
    private:
        int pv;
        int pa;
        int niveau;
        

    public:
        Personnage() : pv(10), pa(5), niveau(1) {}
        Personnage(int pv, int pa, int niveau) : pv(pv), pa(pa), niveau(niveau) {}
        Personnage(Personnage &Import) : pv(Import.pv), pa(Import.pa), niveau(Import.niveau) {}
        ~Personnage(){}
        void setPV(int NouveauPV){pv = NouveauPV;}
        void setPA(int NouveauPA){pa = NouveauPA;}
        void setNiveau(int NouveauNiveau){niveau = NouveauNiveau;}        
        int getPV(){return pv;}
        int getPA(){return pa;}
        int getNiveau(){return niveau;}
        void subitDegat(int degat){
            pv = pv - degat;
            if (pv < 0) {
                pv = 0;
            }
        }
        int attaque(){  return pa = rand() % 10;}
        bool EstVivant() {return pv > 0;}
        void affiche(){
            std::cout << "Creature - PV : " << pv << ", PA : " << pa
                    << ", Niveau : " << niveau << std::endl;
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