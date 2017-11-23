

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int Comprobacion(int *x ) ;          //prototipo funcion Romanos

int main(void)
{
    
    int menu;
    //char continuar;
    
   
    do //probar con do while
    {
    
    //char resul_letra_dni;
    
    printf("Elige una opcion: \n\n");
    printf("\t2.- Calcular numeros Romanos.\n");
    printf("\t1.- Calcular letra de NIF.\n");
    printf("\t0.- Finalizar.\n");
    
    scanf("%i", &menu);  
        
                 
      if (menu>=0 && menu<=3)
      {
         
        switch (menu)
        {
            
            
            case 1:
            {
                printf("Has elegido Calcular letra NIF. \n\nIntroduzca un numero de DNI sin letra \n\n");
                Comprobacion(&menu); //Llamamos a la Funcion del DNI
                //scanf("%c", &continuar);
                //printf("%c", continuar);
                system("read pause");
                break;
            }           
            case 2: 
            {
                printf ("\nHas elegido convertir numero a romano.\n\nIntroduzca un numero entre el 1 y el 3.000 \n\n");
                Comprobacion(&menu); //Llamamos a la funcion Romanos
                //scanf("%c", &continuar);
                //printf("Pulse intro para continuar");
                system("read pause");
                break;
            }           
        
        
            
            
            case 0:
            {
                printf("Has elegido Finalizar.\n\nPulse Intro para finalizar\n");
                system("read pause");
                system("clear");
                menu=0;
                break;
        
            }
        }
      }
        else
        {
            printf("\nPor favor, introduzca un numero entre el 0 y el 3\n\n");
        }
         
    } while (menu!=0);           
    return(0);
}



