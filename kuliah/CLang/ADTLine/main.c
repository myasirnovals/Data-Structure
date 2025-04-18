/*
    Program: main.c
    Author: 2350081004/Muhamad Yasir Noval
    Kelas: A
    Deskripsi: Program utama yang menjalankan ketiga program sebelumnya
    Tanggal: 15/03/2024
*/

#include "mline.c"

int main() {
    LINE L1, L2, L3, L4;
    int deltaX, deltaY;

    BacaLine(&L1);
    printf("L1 = ");
    CetakLine(L1);

    CreateLine(&L2);
    SetOrdinat(&(L2.PAkhir), 12);
    printf("L2 = ");
    CetakLine(L2);

    printf("\nGaris L1 akan digeser sejauh: \n");
    printf("delta X: ");
    scanf("%d", &deltaX);

    printf("delta Y: ");
    scanf("%d", &deltaY);

    L3 = GeserLine(L1, deltaX, deltaY);
    printf("L3 = ");
    CetakLine(L3);

    L4 = L1;
    printf("L4 = ");
    CetakLine(L4);

    printf("\nPengecekan operator relasional\n");
    if (IsEQLine(L1, L2)) {
        printf("Nilai L1 sama dengan L2\n");
    }

    if (IsNEQLine(L1, L2)) {
        printf("Nilai L1 tidak sama dengan L2\n");
    }

    if (IsEQLine(L3, L4)) {
        printf("Nilai L3 sama dengan L4\n");
    }

    if (IsNEQLine(L3, L4)) {
        printf("Nilai L3 tidak sama dengan L4\n");
    }

    printf("\nPengecekan garis apakah tegak lurus\n");
    if (IsTegakLurus(L1, L2)) {
        printf("Garis L1 Tegak lurus dengan L2\n");
    } else {
        printf("Garis L1 Tidak Tegak lurus dengan L2\n");
    }

    if (IsTegakLurus(L2, L3)) {
        printf("Garis L2 Tegak lurus dengan L3\n");
    } else {
        printf("Garis L2 Tidak Tegak lurus dengan L3\n");
    }

    if (IsTegakLurus(L3, L4)) {
        printf("Garis L3 Tegak lurus dengan L4\n");
    } else {
        printf("Garis L3 Tidak Tegak lurus dengan L4\n");
    }

    if (IsTegakLurus(L4, L1)) {
        printf("Garis L4 Tegak lurus dengan L1\n");
    } else {
        printf("Garis L4 Tidak Tegak lurus dengan L1\n");
    }

    printf("\nPengecekan garis apakah sejajar\n");
    if (IsSejajar(L1, L2)) {
        printf("Garis L1 sejajar dengan L2\n");
    }

    if (IsSejajar(L1, L3)) {
        printf("Garis L1 sejajar dengan L3\n");
    }

    if (IsSejajar(L1, L4)) {
        printf("Garis L1 sejajar dengan L4\n");
    }

    if (IsSejajar(L2, L3)) {
        printf("Garis L2 sejajar dengan L3\n");
    }

    if (IsSejajar(L2, L4)) {
        printf("Garis L2 sejajar dengan L4\n");
    }

    if (IsSejajar(L3, L4)) {
        printf("Garis L3 sejajar dengan L4\n");
    }

    printf("\nPengecekan operator posisi\n");
    if (IsLOnSbX(L1)) {
        printf("Garis L1 berada pada sumbu X\n");
    }

    if (IsLOnSbX(L2)) {
        printf("Garis L2 berada pada sumbu X\n");
    }

    if (IsLOnSbX(L3)) {
        printf("Garis L3 berada pada sumbu X\n");
    }

    if (IsLOnSbX(L4)) {
        printf("Garis L4 berada pada sumbu X\n");
    }

    if (IsLOnSbY(L1)) {
        printf("Garis L1 berada pada sumbu Y\n");
    }

    if (IsLOnSbY(L2)) {
        printf("Garis L2 berada pada sumbu Y\n");
    }

    if (IsLOnSbY(L3)) {
        printf("Garis L3 berada pada sumbu Y\n");
    }

    if (IsLOnSbY(L4)) {
        printf("Garis L4 berada pada sumbu Y\n");
    }

    return 0;
}
