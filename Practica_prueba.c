#include <stdio.h>

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
    
    return 0;
}