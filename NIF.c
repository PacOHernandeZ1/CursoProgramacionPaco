/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int Calcular_Nif (int *y)//recibimos el valor que nos manda la funcion comprobacion
{
    
    
    
    //Calculo DNI
      
   int Calculo_DNI;
    char Letra_DNI[] = {'T','R','W','A', 'G','M','Y','F','P', 'D','X','B','N',
    'J','Z','S','Q','V','H','L','C','K','E','O'} ;
    
    
   
   /* printf("\nIntroduzca su DNI sin la letra \n\n");
    system:("read pause");
    scanf("%i", &dni);*/
    
    
    
    Calculo_DNI=(*y-((*y/23)*23));
            //printf("%i \n", Calculo_DNI);
    
            
    
            printf("\nSu letra es la %c\n\n", Letra_DNI[Calculo_DNI]);
            
            return (0);
}
            
    
    