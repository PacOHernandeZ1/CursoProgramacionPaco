/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int Romanos (int *z)//recibimos el valor de la funcion comprobacion
{


    int Unidades, Decenas, Centenas, Millares;
    float Resto_Millares, Resto_Centenas, Resto_Decenas;
    char *Conversion_Romanos[4][10];

    
    //introducimos el numero y lo acumulamos en la variable numero
    //printf("Introduzca el numero a convertir en numero Romano\n");
    //scanf("%i", &Numero);
    //printf("%i", Numero);



    //pedimos que el numero sea entre el 1 y el 3.000
   /* do 
    {
        printf("\nIntroduzca un numero entre en 1 y 3000\n\n");
        scanf("%i", &Numero);
                    
    }while ((Numero>3000) || (Numero<0));
    */
    
    
    //hacemos el calculo para separar las cifras
    
            Millares=(*z/1000);
            //printf("millares %i\n", Millares); 
            Resto_Millares=(*z%1000);
            //printf("resto millares%f\n", Resto_Millares);
                    
            Centenas=(Resto_Millares/100);
            //printf("centenas %i\n", Centenas);
            Resto_Centenas=(*z%100);
            //printf("resto centenas %f\n", Resto_Centenas);
               
            Decenas=(Resto_Centenas/10);
            //printf("decenas %i\n", Decenas);
            Resto_Decenas=(*z%10);
            //printf("%f\n", Resto_Decenas);
                        
            Unidades=Resto_Decenas;
            
           // printf("%i\n", Unidades);

            
            //Hacemos el primer bloque de Array para los Millares 
            
            Conversion_Romanos[0][0]="";
            Conversion_Romanos[0][1]="M";
            Conversion_Romanos[0][2]="MM";
            Conversion_Romanos[0][3]="MMM";
            Conversion_Romanos[0][4]="";
            Conversion_Romanos[0][5]="";
            Conversion_Romanos[0][6]="";
            Conversion_Romanos[0][7]="";
            Conversion_Romanos[0][8]="";
            Conversion_Romanos[0][9]="";
            
            //Hacemos el segundo bloque del Array para las Centenas
           
            Conversion_Romanos[1][0]="";
            Conversion_Romanos[1][1]="C";
            Conversion_Romanos[1][2]="CC";
            Conversion_Romanos[1][3]="CCC";
            Conversion_Romanos[1][4]="CD";
            Conversion_Romanos[1][5]="D";
            Conversion_Romanos[1][6]="DC";
            Conversion_Romanos[1][7]="DCC";
            Conversion_Romanos[1][8]="DCCC";
            Conversion_Romanos[1][9]="CM";
            Conversion_Romanos[1][10]="M";
         
                    
            //Hacemos el tercer bloque del Array para las Decenas
            Conversion_Romanos[2][0]="";
            Conversion_Romanos[2][1]="X";
            Conversion_Romanos[2][2]="XX";
            Conversion_Romanos[2][3]="XXX";
            Conversion_Romanos[2][4]="XL";
            Conversion_Romanos[2][5]="L";
            Conversion_Romanos[2][6]="LX";
            Conversion_Romanos[2][7]="LXX";
            Conversion_Romanos[2][8]="LXXX";
            Conversion_Romanos[2][9]="XC";
            Conversion_Romanos[2][10]="C";
            
                        
            //Hacemos el cuarto boque de Array para las Unidades
            
            Conversion_Romanos[3][0]="";
            Conversion_Romanos[3][1]="I";
            Conversion_Romanos[3][2]="II";
            Conversion_Romanos[3][3]="III";
            Conversion_Romanos[3][4]="IV";
            Conversion_Romanos[3][5]="V";
            Conversion_Romanos[3][6]="VI";
            Conversion_Romanos[3][7]="VII";
            Conversion_Romanos[3][8]="VIII";
            Conversion_Romanos[3][9]="IX";
            Conversion_Romanos[3][10]="X";
                       
         
            
            //Pedimos que muestre el array, primero las variables como stream, luego el nombre del array []
         printf("\nEste numero se escribe en romano de la siguiente forma: \n\n%s%s%s%s \n\n",
                 Conversion_Romanos[0][Millares],Conversion_Romanos[1][Centenas],
         Conversion_Romanos[2][Decenas], Conversion_Romanos[3][Unidades]);
        
           
         return(0);
                 
                 }