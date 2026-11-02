#include <stdio.h>
#include <string.h>

int main(void)
{
    char nama[50];
    int umur, tinggi;
    int sisa;
    size_t panjangNama;

    printf("Masukkan nama Anda: ");
    /* fgets bisa membaca nama yang mengandung spasi. */
    if (fgets(nama, sizeof(nama), stdin) == NULL)
    {
        printf("Nama tidak berhasil dibaca.\n");
        return 1;
    }

    panjangNama = strcspn(nama, "\r\n");

    if (nama[panjangNama] == '\0')
    {
        sisa = getchar();
        if (sisa == '\r')
        {
            sisa = getchar();
        }

        if (sisa != '\n' && sisa != EOF)
        {
            printf("Nama maksimal 49 karakter.\n");
            return 1;
        }
    }

    nama[panjangNama] = '\0';

    if (nama[0] == '\0' || strspn(nama, " \t") == strlen(nama))
    {
        printf("Nama tidak boleh kosong.\n");
        return 1;
    }

    printf("Masukkan umur Anda: ");
    if (scanf("%d", &umur) != 1 || umur < 0)
    {
        printf("Umur harus berupa bilangan bulat 0 atau lebih.\n");
        return 1;
    }

    printf("Masukkan tinggi badan (cm): ");
    if (scanf("%d", &tinggi) != 1 || tinggi <= 0)
    {
        printf("Tinggi badan harus berupa bilangan bulat lebih dari 0.\n");
        return 1;
    }

    printf("\n--- Data Anda --- \n");
    printf("Nama saya %s, umur %d tahun, dengan tinggi badan %d cm.\n", nama, umur, tinggi);

    return 0;
}
