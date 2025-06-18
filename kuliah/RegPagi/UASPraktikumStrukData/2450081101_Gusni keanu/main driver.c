/*
	Program: Body Prototype
	Nama: Gusni keanu
	NIM: 2450081101
	Kelas: D
	Deskripsi: Body Prototype dari File Header
	tanggal: 18-06-4-2025
*/

#include "uas.h"

int main () {
	ListOrtu L;
	CreateListOrty(&L);
	
	int x1[3] = {1,5,9};
	int x2[3] = {1,2,2};
	int i;
	
	for (i= 0; i <3; i++){
		generateAnak(0);
		insertlastortu(&L, 0);
		
	}
	printAll(L);
	return 0;
}

