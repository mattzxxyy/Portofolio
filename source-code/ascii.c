#include <stdio.h>

int main(void)
{
    int huruf;

    printf("Berikan sebuah karakter: ");
    /* getchar mengembalikan int agar EOF bisa diperiksa. */
    huruf = getchar();

    if (huruf == EOF || huruf == '\n' || huruf == '\r')
    {
        printf("Input karakter tidak boleh kosong.\n");
        return 1;
    }

    if (huruf > 127)
    {
        printf("Masukkan karakter ASCII, misalnya A, a, 7, atau !.\n");
        return 1;
    }

    if (huruf >= 'a' && huruf <= 'z') 
        printf("Huruf kecil, kode ASCII %c = %d\n", huruf, huruf);
    else if (huruf >= 'A' && huruf <= 'Z') 
        printf("Huruf besar, kode ASCII %c = %d\n", huruf, huruf);
    else 
        printf("kode ASCII %c = %d\n", huruf, huruf);

    return 0;
}
