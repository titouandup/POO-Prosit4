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
        virtual ~Personnage(){}
        void Jesuis(void){ std::cout << "Je suis" << std::endl;}
        virtual int attaque(void) = 0;
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
        virtual int attaque(){  return pa = rand() % 10;}
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

        int attaque() override {
            std::cout  << " coup d'épée " << std::endl;
            return pa + 2;
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

        int attaque () override {
            std::cout << " coup de flèche " << std::endl;
            return pa + 5;
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

        int attaque() override {
            std::cout << " boule de feu " << std::endl;
            return (int) (pa * 1.25);
        }
};

class Dragon : public Personnage
{
    private:
    public:
        Dragon() : Personnage(){}
        Dragon(int pv, int pa, int niveau) : Personnage(pv,pa,niveau){}
        Dragon(Dragon &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau){}
        int attaque() override {
            std::cout << "Souffle du dragon" << std::endl;
            return pa + 4;
        }
};

class Gobelin : public Personnage
{
    private:
    public:
        Gobelin() : Personnage(){}
        Gobelin(int pv, int pa, int niveau) : Personnage(pv,pa,niveau){}
        Gobelin(Gobelin &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau){}
        int attaque() override {
            std::cout << "Attaque sournoise du gobelin" << std::endl;
            return pa + 1;
        }
};

class Troll : public Personnage
{
    private:
        std::string nom;
    public:
        Troll() : Personnage(){}
        Troll(int pv, int pa, int niveau) : Personnage(pv,pa,niveau){}
        Troll(Troll &Combattant) : Personnage(Combattant.pv,Combattant.pa,Combattant.niveau){}
        int attaque() override {
            std::cout << "Coup lourd du troll" << std::endl;
            return pa + 3;
        }
};

#endif