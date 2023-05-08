#include<stdio.h>
//caso 1: Suma de impares y primos. Cantidad de impares y primos en un rango [a, b] donde a < b
//caso 2: Producto y suma de dígitos de un número. Cuantos dígitos son pares e impares
//caso 3: Calcular el factorial de un número
int main(void){

    //variables del genereales
    int selector;
    //variables para caso 1
    int aux1, num1, num2, sumaPrimos, sumaImpares;
    int cont, contPrimos, contAuxPrimos, contImpares;
    //variables para caso 2
    int num, productDigitos, sumDigitos, digitosPares, digitosImpares;
    int aux2, digit;

    do{
        printf("\t---MENÚ---\t\n");
        printf("1. Impares y primos en un rango\n");
        printf("2. Trabajo con dígitos de un número\n");
        printf("3. Opción C\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &selector);

        switch(selector)
        {
        case 1:                 //Suma de impares y primos. Cantidad de impares y primos en un rango [a, b] donde a < b

            aux1 = num1;
            sumaImpares = 0;
            sumaPrimos = 0;
            contImpares = 0;
            contPrimos = 0;

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
            while(aux1 <= num2){

                cont = 1;
                contAuxPrimos = 0;
                while (aux1 >= cont){

                    if(aux1 % cont == 0)
                        contAuxPrimos++;
                    cont++;
                }
                if(contAuxPrimos == 2){
                    contPrimos++;
                    sumaPrimos += aux1;
                }

                if(aux1 % 2 != 0){

                    contImpares++;
                    sumaImpares += aux1;
                } 
                
                aux1++;
            }

            printf("En [%d, %d] hay %d números primos\n", num1, num2, contPrimos);
            printf("En [%d, %d] hay %d números impares\n", num1, num2, contImpares);
            printf("La suma de todos los números primos en [%d, %d] es %d\n", num1, num2, sumaPrimos);
            printf("La suma de todos los números impares en [%d, %d] es %d\n", num1, num2, sumaImpares);
            printf("La suma de los impares con los primos en [%d, %d] es %d\n", num1, num2, sumaImpares + sumaPrimos);

            break;
        case 2:                 //Producto y suma de dígitos de un número. Cuantos dígitos son pares e impares

            digit = 0;
            digitosImpares = 0;
            digitosPares = 0;
            sumDigitos = 0;
            productDigitos = 1;

            printf("\t--SUMA Y PRODUCTO DE DÍGITOS DE UN NÚMERO. CUANTOS SON PARES E IMPARES---\t\n");

            do{
                printf("Ingrese un número entero positivo: ");
                scanf("%d", &num);
            }while(num < 0);

            aux2 = num;
            while(aux2 > 0){
                digit = aux2 % 10;
                aux2 /= 10;
                productDigitos *= digit; //Sumar lo digitos
                sumDigitos += digit;     //Multiplicar los dígitos

                //Comprobar si el dígito es par o impar                              
                if(digit % 2 == 0 && digit != 0)
                    digitosPares++;
                else if(digit % 2 != 0 && digit != 0)
                    digitosImpares++;
            }
            printf("La suma de los dígitos de %d es: %d\n", num, sumDigitos);            
            printf("El producto de los dígitos de %d es: %d\n", num, productDigitos);            
            printf("%d tiene %d dígitos pares\n", num, digitosPares);            
            printf("%d tiene %d dígitos impares\n", num, digitosImpares);            
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