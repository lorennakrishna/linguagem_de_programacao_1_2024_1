/*1) Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições :
n / 3 = x inteiro e resto 2
n / 5 = y inteiro e resto 3
n / 7 = z inteiro e resto 4*/



#include <stdio.h>

int main(){
    
int numero = 0;

int aux = 0;
int numero_inteiro_desejado;
int resto_desejado;
//n / 3 = x inteiro e resto 2

int dividido_um = numero/3;


printf("Digite o numero intero desejado: ");
scanf("%i", &numero_inteiro_desejado);

printf("Digite resto desejado: ");
scanf("%i", &resto_desejado);

while (aux <= 100){
    
    //printf("Auxiliar: %i\n", aux);

    if (numero%numero_inteiro_desejado == resto_desejado){
        
        printf("O menor inteiro positivo n e: %i\n", numero);
        break;
    }
    
    else if ( numero%numero_inteiro_desejado != resto_desejado){
        
        //printf("Agora nao\n");
        ++aux;
        ++numero;
    }
    
        //++aux;
    
}

    return 0;
}
