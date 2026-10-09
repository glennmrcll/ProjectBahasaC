#include <stdio.h>

int main() {
    char nama[50];
    int nilai;
    int kehadiran;

    printf("Seleksi Eskul IT\n");

    printf("Masukkan nama siswa: ");
    scanf(" %49[^\n]", nama);

    printf("Masukkan nilai tes: ");
    scanf("%d", &nilai);

    printf("Masukkan kehadiran: ");
    scanf("%d", &kehadiran);

    if (nilai < 0 || nilai > 100 ||
        kehadiran < 0 || kehadiran > 100) {
        printf("\nData tidak valid\n");
        if (nilai < 0 || nilai > 100) {
            printf("- Nilai tes (%d) harus 0 sampai 100\n", nilai);
        }
        if (kehadiran < 0 || kehadiran > 100) {
            printf("- Kehadiran (%d) harus 0 sampai 100\n", kehadiran);
        }
    }
    else if (nilai >= 75 && kehadiran >= 80) {
        printf("\nHasil Seleksi\n");
        printf("Nama Siswa : %s\n", nama);
        printf("Nilai Tes  : %d\n", nilai);
        printf("Kehadiran  : %d%%\n", kehadiran);
        printf("Status     : Selamat Anda memenuhi syarat IT Club\n");
    }
    else {
        printf("\nHasil Seleksi\n");
        printf("Nama Siswa : %s\n", nama);
        printf("Nilai Tes  : %d\n", nilai);
        printf("Kehadiran  : %d%%\n", kehadiran);
        printf("Status     : Belum Lulus Seleksi\n");
        printf("Alasan:\n");
        if (nilai < 75) {
            printf("- Nilai tes (%d) kurang dari 75\n", nilai);
        }
        if (kehadiran < 80) {
            printf("- Kehadiran (%d%%) kurang dari 80%%\n", kehadiran);
        }
    }

    return 0;
}