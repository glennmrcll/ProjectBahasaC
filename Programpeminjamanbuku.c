#include <stdio.h>

int main() {
    char nama[500];
    char buku[1000];
    int jumlahbuku;
    int lamapinjam;

    printf("###########################\n");
    printf("Peminjaman Buku Perpustakaan\n");
    printf("###########################\n");

    printf("Masukkan nama peminjam: ");
    scanf(" %499[^\n]", nama);

    printf("Masukkan judul buku: ");
    scanf(" %999[^\n]", buku);

    printf("Masukkan jumlah buku: ");
    scanf("%d", &jumlahbuku);

    printf("Lama peminjaman (hari): ");
    scanf("%d", &lamapinjam);

    printf("\n");
    printf("Data peminjaman\n");
    printf("Nama peminjam: %s\n", nama);
    printf("Judul buku: %s\n", buku);
    printf("Jumlah buku: %d\n", jumlahbuku);
    printf("Lama peminjaman: %d hari\n", lamapinjam);
    printf("Data Berhasil Disimpan\n");

    return 0;
}