#include <stdio.h>

#include "app/list.c"

int main() {
    List L;
    CreateList(&L);

    printf("== TEST: List kosong ==\n");
    PrintInfo(L);

    // Tambah beberapa POINT ke list
    POINT p1, p2, p3, p4, p5;
    CreatePOINT2(&p1, 1, 2);
    CreatePOINT2(&p2, 3, 4);
    CreatePOINT2(&p3, -5, 6);
    CreatePOINT2(&p4, 7, -8);
    CreatePOINT2(&p5, 9, 0);

    printf("\n== TEST: InsFirst ==\n");
    InsFirst(&L, p1);
    PrintInfo(L);

    printf("\n== TEST: InsLast ==\n");
    InsLast(&L, p2);
    InsLast(&L, p3);
    PrintInfo(L);

    printf("\n== TEST: InsAfter (setelah (1,2)) ==\n");
    InsAfter(&L, p4, p1); // setelah p1
    PrintInfo(L);

    printf("\n== TEST: InsAfter (setelah (3,4)) ==\n");
    InsAfter(&L, p5, p2); // setelah p2
    PrintInfo(L);

    printf("\n== TEST: NbElmt ==\n");
    printf("Jumlah elemen: %d\n", NbElmt(L));

    printf("\n== TEST: Search (3,4) ==\n");
    address found = Search(L, p2);
    if (found != Nil) {
        printf("Ditemukan: ");
        CetakPOINT(Info(found));
    } else {
        printf("Tidak ditemukan\n");
    }

    printf("\n== TEST: DelFirst ==\n");
    POINT temp;
    DelFirst(&L, &temp);
    printf("Dihapus: "); CetakPOINT(temp);
    PrintInfo(L);

    printf("\n== TEST: DelLast ==\n");
    DelLast(&L, &temp);
    printf("Dihapus: "); CetakPOINT(temp);
    PrintInfo(L);

    printf("\n== TEST: DelAfter (setelah (3,4)) ==\n");
    DelAfter(&L, &temp, p2);
    printf("Dihapus: "); CetakPOINT(temp);
    PrintInfo(L);

    printf("\n== TEST: InversList (in-place) ==\n");
    InversList(&L);
    PrintInfo(L);

    printf("\n== TEST: getNewInversList (copy) ==\n");
    List L2 = getNewInversList(L);
    printf("List hasil invers copy:\n");
    PrintInfo(L2);

    printf("\n== TEST: ListEmpty\n");
    printf("L kosong? %s\n", ListEmpty(L) ? "Ya" : "Tidak");

    printf("\n== TEST: Del semua hingga kosong ==\n");
    while (!ListEmpty(L)) {
        DelFirst(&L, &temp);
        printf("Dihapus: "); CetakPOINT(temp);
    }
    PrintInfo(L);

    printf("\n== TEST: ListEmpty setelah del semua\n");
    printf("L kosong? %s\n", ListEmpty(L) ? "Ya" : "Tidak");

    return 0;
}
