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

class Charlo : public etudiant
{
   public:
   int variable1 = 1;
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
    return (this->numeroMatricule);
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
    return (this->moyenne);
}
    

int main() {
    
    printf("Hello world !\n\r\n\r");
    etudiant etudiant147(147147);

    //etudiant Charlo(100,100,100);
    etudiant147.setMoyenne(44);
    
    
    printf("Etudiant147, matricule # %d, moyenne %d", etudiant147.getMatricule(), etudiant147.getMoyenne());
     //printf("Etudiant Charlo, matricule # %d, moyenne %d", Charlo.getMatricule(), Charlo.getMoyenne());
    
    return 0;
} 
