#include <iostream>

using namespace std;


class uniao{ // nome da classe;
int vet1[6]; // variavel para ação no metodo;
int vet2[6];
int vet3 [12];

int i;

public: // metodo para acesso fora da classe
    vets1(int vet[6]);// declaração do metodo

};


// Entradas
int uniao::vets1(int vet[6]){//ação do metodo //parametro
for (i=0;i<6;i++){
    cout << "Digite o numero " << i+1 << "  do primeiro array"<< endl;
    cin >> vet1[i];
}
for (i=0;i<6;i++){
    cout << "Digite o numero " << i+1 << "  do segundo array"<< endl;
    cin >> vet2[i];
}
 
for (i=0;i<6;i++){
    vet3[i] = vet1[i];
}
    for ( i = 6; i < 12; i++ ){
        vet3[i] = vet2[i-6];  
    }

         for ( i = 0; i < 12; i++ )
        cout<< vet3[i] << " ";
    }


	
	
	
    
int main(){
	int i, vet[i];
uniao vettt;
vettt.vets1(vet);
return 0;
}

    

