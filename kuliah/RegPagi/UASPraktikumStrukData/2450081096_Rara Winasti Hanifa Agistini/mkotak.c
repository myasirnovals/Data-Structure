/*
	Program		: mkotak.c
	Author		: 2450081096_Rara Winasti Hanifa Agistini
	Kelas		: D
	Deskripsi	: Main Drive file dari kotak.c
	Date		: 18 Juni 2025
*/
#include "kotak.c"

int main(){
	ListOrtu L;
	CreateList(&L);
	InputData(&L);
	printf("\n");
	Tampil(L);
	return 0;
}
