#include "btree.c"
#include <stdio.h>
#include <conio.h>

int main(void)
{
    Tree MyPohon = nil;
    int N;

    printf("Masukkan bilangan  : "); scanf("%d", &N);

    while (N != 9999)
    {
        MyPohon = InsSearch(MyPohon, N);
        printf("Masukkan bilangan  : "); scanf("%d", &N);
    }

    PreOrder(MyPohon);
    printf("\nTinggi Pohon : %d", TinggiPohon(MyPohon));

    return 0;
}