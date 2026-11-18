#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
    protected:
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
        void subitDegats(int degat){
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
    private:
        std::string nom;
    public:
        Guerrier() : Personnage(), nom("Non appelé"){}
        Guerrier(int pv, int pa, int niveau, std::string nom) : Personnage(pv,pa,niveau), nom(nom){}
        Guerrier(Guerrier &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau), nom(Combattant.nom){}
        void setNom (std::string nouveauNom){
            nom = nouveauNom;
        }
        std::string getNom (){
            return nom;
        }
        
};

class Archer : public Personnage
{
    private:
        std::string nom;
    public:
        Archer() : Personnage(), nom("Non appelé"){}
        Archer(int pv, int pa, int niveau, std::string nom) : Personnage(pv,pa,niveau), nom(nom){}
        Archer(Archer &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau), nom(Combattant.nom){}
        void setNom (std::string nouveauNom){
            nom = nouveauNom;
        }
        std::string getNom (){
            return nom;
        }
};

class Mage : public Personnage
{
    private:
        std::string nom;
    public:
        Mage() : Personnage(), nom("Non appelé"){}
        Mage(int pv, int pa, int niveau, std::string nom) : Personnage(pv,pa,niveau), nom(nom){}
        Mage(Mage &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau), nom(Combattant.nom){}
        void setNom (std::string nouveauNom){
            nom = nouveauNom;
        }
        std::string getNom (){
            return nom;
        }
};

class Dragon : public Personnage
{
    private:
    public:
        Dragon() : Personnage(){}
        Dragon(int pv, int pa, int niveau) : Personnage(pv,pa,niveau){}
        Dragon(Dragon &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau){}
};

class Gobelin : public Personnage
{
    private:
    public:
        Gobelin() : Personnage(){}
        Gobelin(int pv, int pa, int niveau) : Personnage(pv,pa,niveau){}
        Gobelin(Gobelin &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau){}
};

class Troll : public Personnage
{
    private:
        std::string nom;
    public:
        Troll() : Personnage(){}
        Troll(int pv, int pa, int niveau) : Personnage(pv,pa,niveau){}
        Troll(Troll &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau){}
};

#endif