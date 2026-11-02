#include <stdio.h>

int main(void)
{
    int panjang;
    int lebar;
    long long luas;
    long long keliling;
  
    printf("Masukkan panjang: ");
    if (scanf("%d", &panjang) != 1 || panjang <= 0)
    {
        printf("Panjang harus berupa bilangan bulat lebih dari 0.\n");
        return 1;
    }

    printf("Masukkan lebar: ");
    if (scanf("%d", &lebar) != 1 || lebar <= 0)
    {
        printf("Lebar harus berupa bilangan bulat lebih dari 0.\n");
        return 1;
    }

    /* Ubah ke long long sebelum menghitung agar int tidak meluap. */
    luas = (long long)panjang * lebar;
    keliling = 2 * ((long long)panjang + lebar);
    
    printf("\n");
    printf("Luas persegi panjang     : %lld\n", luas);
    printf("Keliling persegi panjang : %lld\n", keliling);

    return 0;
}
