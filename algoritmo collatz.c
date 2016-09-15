#include <stdio.h>  

int main ()  
{  
    int num;
    char s;
	printf("\t\t\tALGORITMO SECUENCIA COLLATZ");            //nombre algoritmo
    
	do {
		printf("\n\nIngrese un Numero: ");  
    	scanf("%d",&num);  
   
    	if (num==1){                                           //para mostrar cuando el numero es igual a 1
    
    	printf("\nEl Numero Ingresado es 1");
    	return 0;                                         // para cancelar la funcion
		}
		if (num>1){
		printf("\nEl Numero es Positivo y Mayor a 1");    //muesta si num es positivo y mayor a 1
		}
    
    	if (num <=0) {                                        //si el numero es negativo esto indicara que es invalido
    	printf("El Numero No es Valido");               
    	return 0;
		}

	 	printf("\n\nLa Secuencia es: ");  
    
		while(num!=1){                                        //si nel numero dividido por dos es 0 es par y se divide por dos
		if(num%2 == 0)  
            num = num/2;  
        else  
            num = num*3 + 1;                              //sino es impar y se hace la operacion contraria que dice collatz
        
		printf("%d ", num);                              // muestra la secuencia
        } 
       
        printf("\n\nDesea Ingresar Otro Numero s/n\n");
        scanf ("%s",&s);
       
	} while (s=='s');                                   //mientras la respuesta sea si volvera a ejecutar el programa
 
    return 0; 
	}
