/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Comprobacion_Numero.c
 * Author: paco
 *
 * Created on 20 de noviembre de 2017, 10:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int Calcular_Nif (int *y);
int Romanos (int *z);

int Comprobacion(int *x ) 

{
    int numero;
    
    scanf("%i", &numero);
    
    
    
    if (*x==1) //eleccion dni
    {
          if (numero>=1 && numero<=99999999) //condicion para eleccion de dni
          {
              Calcular_Nif (&numero);
          }
          else
          {
              printf(" numero erroneo introduzca otra vez");
              
                           
              
    }
    }
    
    
    if (*x==2) //eleccion romano
    { 
        
          if (numero>=1 && numero<=3999) //condicion para eleccion de romano
          {
              Romanos (&numero);
          }
          else
          {
              printf("Numero para convertir a romano erroneo.\n Introduzca un numero entre el 0 y el 3999");
    }
    }
    

    
    
             

    return (0);
}

