#include <iostream>
#include <string>
using namespace std;

class EtudiantGenieElectrique {
private:
    class Etudiant {
    protected:
        string nom;
        double numeroMatricule;
        int moyenne;

    public:
        Etudiant(string, double);
        string getNom();
        double getMatricule();
        void setMoyenne(int);
        int getMoyenne();
    };

    Etudiant etudiant;

public:
    EtudiantGenieElectrique(string, double);
    void setMoyenne(int);
    int getMoyenne();
    double getMatricule();
    string getNom();
};

EtudiantGenieElectrique::Etudiant::Etudiant(string nom, double nouveauMatricule) : nom(nom) {
    // Le numéro de matricule doit nécessairement avoir 6 chiffres
    if ((nouveauMatricule >= 100000) && (nouveauMatricule <= 999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0;
    }
}

string EtudiantGenieElectrique::Etudiant::getNom() {
    return nom;
}

double EtudiantGenieElectrique::Etudiant::getMatricule() {
    return this->numeroMatricule;
}

void EtudiantGenieElectrique::Etudiant::setMoyenne(int nouvelleMoyenne) {
    if (nouvelleMoyenne <= 100){
        this->moyenne = nouvelleMoyenne;
    }
    else{
        this->moyenne = 100;
    }
}

int EtudiantGenieElectrique::Etudiant::getMoyenne() {
    return this->moyenne;
}

EtudiantGenieElectrique::EtudiantGenieElectrique(string nom, double nouveauMatricule) : etudiant(nom, nouveauMatricule) {}

void EtudiantGenieElectrique::setMoyenne(int nouvelleMoyenne) {
    etudiant.setMoyenne(nouvelleMoyenne);
}

int EtudiantGenieElectrique::getMoyenne() {
    return etudiant.getMoyenne();
}

double EtudiantGenieElectrique::getMatricule() {
    return etudiant.getMatricule();
}

string EtudiantGenieElectrique::getNom() {
    return etudiant.getNom();
}

int main() {
    cout << "Hello world !" << endl << endl;
    
    // Création d'un étudiant en génie électrique
    EtudiantGenieElectrique etudiantLuc("Luc Vladimir Sintat Mimb", 2052214);
    etudiantLuc.setMoyenne(80); // définir la moyenne de l'étudiant
    cout << "Etudiant en Génie Electrique, nom : " << etudiantLuc.getNom() << ", matricule # " << etudiantLuc.getMatricule() << ", moyenne " << etudiantLuc.getMoyenne() << "%" << endl;
    
    return 0;
} 


je veux que tu cree une classe parent et enfant
