#include<stdio.h>
//caso 1: Suma de impares y primos. Cantidad de impares y primos en un rango [a, b] donde a < b
//caso 2: Producto y suma de dígitos de un número. Cuantos dígitos son pares e impares
//caso 3: Calcular el factorial de un número
int main(void){

    //variables del menú
    int selector;
    //variables para caso 1
    int num1, num2, flag, aux;
    int sumaPrimos, sumaImpares;
    int cont, contPrimos, contAuxPrimos, contImpares;
    //variables para caso 2
    

    do{
        printf("\t---MENÚ---\t\n");
        printf("1. Opción A\n");
        printf("2. Opción B\n");
        printf("3. Opción C\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &selector);

        switch(selector)
        {
        case 1:                 //Suma de impares y primos. Cantidad de impares y primos en un rango [a, b] donde a < b
            printf("\t--CONTADOR DE PRIMOS E IMPARES, SUMA DE ESTOS\t\n");

            printf("Ingrese un número \'A\': ");
            scanf("%d", &num1);
            printf("Ingrese un número \'B\' (\'B\' > \'A\'): ");
            scanf("%d", &num2);

            //Comprobar que num1 < num2. Como se especifica en las instrucciones.
            while(num1 > num2){

                printf("\t---Error. \'B\' debe ser mayor a \'A\'---\t\n");
                printf("Ingrese un número \'B\' (\'B\' > \'A\'): ");
                scanf("%d", &num2);
            }

            //comprobar primos e impares.
            aux = num1;
            sumaImpares = 0;
            sumaPrimos = 0;
            contImpares = 0;
            contPrimos = 0;

            while(aux <= num2){

                cont = 1;
                contAuxPrimos = 0;
                while (aux >= cont){

                    if(aux % cont == 0)
                        contAuxPrimos++;
                    cont++;
                }
                if(contAuxPrimos == 2){
                    contPrimos++;
                    sumaPrimos += aux;
                }

                if(aux % 2 != 0){

                    contImpares++;
                    sumaImpares += aux;
                } 
                
                aux++;
            }

            printf("En [%d, %d] hay %d números primos\n", num1, num2, contPrimos);
            printf("En [%d, %d] hay %d números impares\n", num1, num2, contImpares);
            printf("La suma de todos los números primos en [%d, %d] es %d\n", num1, num2, sumaPrimos);
            printf("La suma de todos los números impares en [%d, %d] es %d\n", num1, num2, sumaImpares);
            printf("La suma de los impares con los primos en [%d, %d] es %d\n", num1, num2, sumaImpares + sumaPrimos);

            break;
        case 2:                 //Producto y suma de dígitos de un número. Cuantos dígitos son pares e impares


            break;
        case 3:                 //Calcular el factorial de un número
            

            break;
        case 4:

            printf("\t---SALIENDO---\t\n");
            break;
        default:
            printf("ERROR. Opción no válida, ingrese otra opción\n");
            break;
        }


    }while(selector != 4);

    return 0;
}