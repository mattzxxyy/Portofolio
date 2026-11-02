#include <stdio.h>

int main(void)
{
    int bilangan;
    long long i;
    long long total = 0;

    printf("Berikan sebuah bilangan: ");
    
    if (scanf("%d", &bilangan) == 1)
    {
        if (bilangan > 0)
        {
            for (i = 1; i <= bilangan; i++)
            {
                total = total + i;

                printf("%lld", i);
            
                if (i < bilangan) 
                    printf(" + ");
                else 
                    printf(" = ");
            }
            printf("%lld\n", total);
        }

        else 
        {
            printf("Input yang diberikan harus > 0\n");
            return 1;
        }
    }
    
    else 
    {
        printf("Input yang diberikan bukan bilangan!\n");
        return 1;
    }

    return 0;
}
