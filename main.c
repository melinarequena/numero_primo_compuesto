/*prueba de clion y git*/
#include<stdio.h>
int main()
{
    int num, i, cont=0;
    do{
        printf("Ingrese un numero entero mayor a 0, pero menor a 100");
        scanf("%d", &num);
    } while(num<=0 || num>100);/* verif para acortar */
    for(i=1; i<=100; i++)
    {
        if(num%i!=0){/*divido el numero por todo numero entre 1 el mismo*/
            cont++;/*si su resto es distinto de cero, cont++*/
        }
    }
    if(cont>=3)/*num primos: divisibles sin resto por 1 y por ellos mismos, entonces si es mas de 2, el numero es compuesto*/
    {
        printf("El numero es compuesto");
    }
    else printf("El numero es primo");
    return 0;
}