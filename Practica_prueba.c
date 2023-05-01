#include <stdio.h>
#include <conio.h>

int main ()
{
    int num;
    short int i;

    scanf("%d", &num);

    int respald = num;

    for (i = num; i >= 0; i--)
    {
        respald--;        
        printf("%d", respald);
    }
    
    while (i == 0) /*Condición while que espera que el numero ingresado sea 1*/
    {
        system("cls");
        printf("\nIngrese el numero 1 para romper el bucle: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1: i = 1; break;
        
        default: i = 0; break;
        }
    }

    printf("\nMuchas gracias por usar nuestro programa!!");
    
    return 0;
}