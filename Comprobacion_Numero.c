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
#include <string.h>


/*  
 * 
 */
int Calcular_Nif (int *y);  // funcion para calcular el Nif
int Romanos (int *z);   //funcion para calcular en romanos

int Comprobacion(int *x ) 

{
    /*int numero;
    char pasoachar[20];
    scanf("%i", &numero);*/
    /* atoi(numero) pasoachar;
        printf("%c", pasoachar);
        */
    
    
    
    
    if (*x==1) //cuando elegimos 1 en el menu comprueba que este entre los parametros 1 y 99999999
                // si es asi, llamamos la funcion Dni
    {
        
        if (numero>=1 && numero<=99999999) 
          {
              Calcular_Nif (&numero);
          }
          else
          {
              printf(" numero erroneo introduzca otra vez");
              
                           
              
    }
    }
    
    
    if (*x==2) //cuando elegimos 2 en el menu comprueba que este entre los parametros 1 y 3.999
                // si es asi, llamamos la funcion romanos
    { 
        
          if (numero>=1 && numero<=3999) 
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

