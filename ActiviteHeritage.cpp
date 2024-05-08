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
};

class Hassan : public etudiant {
    public:
    // Constructor that passes the matricule number to the etudiant constructor
    Hassan(double matricule) : etudiant(matricule) {}
};


etudiant::etudiant(double nouveauMatricule){
    //Le numÃ©rod de matricule doit nÃ©cessairement avoir 6 chiffres
    if ((nouveauMatricule >= 100000) && (nouveauMatricule <= 999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0;
    }
    
}

double etudiant::getMatricule(void){
     return numeroMatricule;
}


void etudiant::setMoyenne(int nouvelleMoyenne){
    if (nouvelleMoyenne <= 100){
        this->moyenne = nouvelleMoyenne;
    }
    else{
        this->moyenne = 100;
    }
}


int etudiant::getMoyenne(void){
    return moyenne;
}
    

int main() {
    printf("Hello world !\n\r\n\r");
    etudiant Hassan420(420);
    Hassan420.setMoyenne(69);
    printf("Hassan420, matricule # %d, moyenne %d", Hassan420.getMatricule(), Hassan420.getMoyenne());
    
    return 0;
} 
