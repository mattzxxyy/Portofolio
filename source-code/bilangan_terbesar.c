/*  Nama Kelompok: Kelompok01
    Anggota: 1. 261402062 - Matius Christian Samas Simorangkir
             2. 261402118 - Nabila Safitri
             3. 261402090 - Hanifah Maharani Bintang
             4. 261402121 - Mastio Indah Lestari
             5. 261402022 - Faathir Islamy
    Nama File: Kelompok01_261402062_01.c    
    Tugas:  Membuat sebuah program C untuk menentukan bilangan terbesar dari N buah bilangan integer.
            Gunakan hanya struktur perulangan for atau while. Tentukanlah N yang <= 10.  
*/

#include <stdio.h>

int main(void)
{
    int n;
    int bilangan;
    int terbesar;

    // Meminta input N dan memastikan nilainya valid (1 <= N <= 10)
    printf("Masukkan jumlah bilangan N (maksimal 10): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) 
    {
        printf("Nilai N tidak valid. Masukkan bilangan bulat antara 1 hingga 10.\n");
        return 1;
    }

    // Membaca bilangan pertama untuk menginisialisasi nilai terbesar
    printf("Masukkan bilangan ke-1: ");
    if (scanf("%d", &bilangan) != 1)
    {
        printf("Input bilangan harus berupa bilangan bulat.\n");
        return 1;
    }
    terbesar = bilangan;

    // Perulangan untuk membaca bilangan ke-2 hingga ke-N
    for (int i = 2; i <= n; i++) 
    {
        printf("Masukkan bilangan ke-%d: ", i);
        if (scanf("%d", &bilangan) != 1)
        {
            printf("Input bilangan harus berupa bilangan bulat.\n");
            return 1;
        }

        // Jika bilangan saat ini lebih besar dari 'terbesar', perbarui nilainya
        if (bilangan > terbesar)
        {
            terbesar = bilangan;
        }
    }

    // Menampilkan hasil akhir
    printf("\nBilangan terbesar dari %d bilangan tersebut adalah: %d\n", n, terbesar);

    return 0;
}
