#include "jam.c"

int main(void)
{
    // Kamus data
    JAM J1, J2, J3, J4;
    long int jamKeDetik;

    // Algoritma
    ReadJam(&J1);
    printf("Nilai J1 = ");
    PrintJam(J1);
    printf("\n");

    printf("\n");
    jamKeDetik = JamToDetik(J1);
    printf("%ld", jamKeDetik);
    return 0;
}