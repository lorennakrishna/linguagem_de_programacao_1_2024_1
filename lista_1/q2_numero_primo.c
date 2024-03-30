/******************************************************************************
2) Escreva um programa em C que verifique se um determinado inteiro positivo que é lido via teclado, é ou
não primo.
*******************************************************************************/


#include <stdio.h> 

int main (){
    
    
int numero_a, numero_b, numero_c;
printf("Digite um numero para saber se e primo: ");
scanf("%i", &numero_a);

int aux = 1;


while (aux < 1000){

//  excessoes numero / numero e numero / 1 

    numero_b = numero_a%aux;
    numero_c = numero_a/aux;
    
    // 3/1 = 3 resto 0  
    
    // numero_c = 3/1 = 3 resto 0 (satisfez o primeiro)
    //  3 / 3 = 1 
    
    
    if (numero_c != numero_a && numero_a != aux)
    {
         if (numero_b == 0)
            {
            printf("Nao e primo");
            break;
                
            } 
        
        else if (numero_b != 0 )
        {
            printf("E primo");
            //printf("Como o resto e: %i, esse numero e primo", numero_b);
            break; 
            
        }
    }
    
    
    else if (numero_b == 0) 
    
    {
       // printf("Numero nao e primo\n");
        
        ++aux;
        
        
    }

        
    
}


  return 0;
}
    
    //printf("%i", numero_a%2);
    
  
    
    
    
    
    
    

