#include <stdio.h>

int main(void)
{
    int k, nchar, nkata, nkoma, nspasi, ntitik, in_word;

    nchar = nkata = nkoma = nspasi = ntitik = in_word = 0;
    printf("Tuliskan sebuah kalimat:\n");

    /* Berhenti saat Enter atau saat tidak ada lagi input. */
    while ((k = getchar()) != EOF && k != '\n' && k != '\r')
    {
        nchar++;

        switch(k)
        {
            case '\t':
            case ' ' :
                nspasi++;
                in_word = 0;
                break;

            case ',' :
                nkoma++;
                in_word = 0;
                break;

            case '.' :
                ntitik++;
                in_word = 0;
                break;

            case ';' :
            case ':' :
            case '?' :
            case '!' : 
                in_word = 0;
                break;
            
            default:
            if (!in_word)
                {
                    in_word = 1;
                    nkata++;
                }
                break;
        }
    }

    printf("Jumlah karakter = %d\n", nchar);
    printf("Jumlah kata = %d\n", nkata);
    printf("Jumlah koma = %d\n", nkoma);
    printf("Jumlah spasi/tab = %d\n", nspasi);
    printf("Jumlah titik = %d\n", ntitik);

    return 0;
}
