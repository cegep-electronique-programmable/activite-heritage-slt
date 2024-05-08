#include <iostream>
using namespace std;

class etudiant {
    double numeroMatricule;
    int moyenne;
	
public:
    etudiant(double);
    double getMatricule();
    void setMoyenne(int);
    int getMoyenne();
  
    // Ajout d'un constructeur par défaut
    etudiant() : numeroMatricule(0), moyenne(0) {}
};


class recreation : public etudiant {
    private: 
        int nombreRoche;
        
    public:
        // Ajout d'un constructeur avec initialisation explicite
        recreation(int nombreRoche) : etudiant(), nombreRoche(nombreRoche) {}
};

etudiant::etudiant(double nouveauMatricule) {
    // Le numéro de matricule doit nécessairement avoir 6 chiffres
    if ((nouveauMatricule >= 100000) && (nouveauMatricule <= 999999)) {
        this->numeroMatricule = nouveauMatricule;    
    }
    else {
        this->numeroMatricule = 0;
    }
}

double etudiant::getMatricule() {
    return this->numeroMatricule;
}

void etudiant::setMoyenne(int nouvelleMoyenne) {
    if (nouvelleMoyenne <= 100) {
        this->moyenne = nouvelleMoyenne;
    }
    else {
        this->moyenne = 100;
    }
}

int etudiant::getMoyenne() {
    return this->moyenne;
}
    

int main() {
    recreation etudiant1(5);
    etudiant1.setMoyenne(20);
    printf("Etudiant1, moyenne : %d\n", etudiant1.getMoyenne());
    
    cout << "Hello world !" << endl << endl;
    etudiant etudiant147(147);
    etudiant147.setMoyenne(100);
    cout << "Etudiant147, matricule # " << etudiant147.getMatricule() << ", moyenne " << etudiant147.getMoyenne();
    
    return 0;
}
