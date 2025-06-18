/* 
	Program : UAS.c
	Author : 2450081093 - Rizky Khairunisa
	Kelas  : D
	Deskripsi : Main driver dari file UAS
	Date	: 18 Juni 2025
*/


#include "UAS.c"

int main() {
    ListOrtu daftarOrtu;

    CreateList(&daftarOrtu);
    
    printf("=== INPUT DATA ===\n");
    InputData(&daftarOrtu);

    printf("\n=== CETAK DATA ===\n");
    CetakData(daftarOrtu);

    return 0;
}


