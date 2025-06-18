/*
Program : mUAS.c
Nama : 2450081105_Fajar Daya Lutfiana
Kelas : D
Deskripsi : Main driver dari UAS Praktikum
*/


//preprocessor
#include "UAS.h"

//main driver
int main(){
	
	//Kamus
	TabList MyTab;
	int x1,x2,y1,y2;
	int i;
	Point P1,P2;
	ListAnak La;
	ListOrtu Lo;
	addressOrtu AO;
	//Algoritma
	printf("X1:");scanf("%d",&x1);
	printf("Y1:");scanf("%d",&y1);
	printf("X2:");scanf("%d",&x2);
	printf("Y2:");scanf("%d",&y2);
	
	CreateTabel(&MyTab);
	
	while(x1 != 999 && y1 != 999 && x2 != 999 && y2 != 999){
		
//		MyTab.nEff++;
		
//		CreateListOrtu(&Lo);
//		Lo = AlokasiOrtu(AO);
//		Lo.FirstOrtu.Info.P1.abs = x1;
//		Lo.FirstOrtu.Info.P1.ord = y1;
//		Lo.FirstOrtu.Info.P2.abs = x2;
//		Lo.FirstOrtu.Info.P2.ord = y2;

		
		
		P1.abs = x1;
		P1.ord = y1;
		P2.abs = x2;
		P2.ord = y2;
//		MyTab.T = AlokasiOrtu();
		
//		MyTab.T[MyTab.nEff].FirstOrtu.Info.P1 = P1 ;
//		MyTab.T[MyTab.nEff].FirstOrtu.Info.P2 = P2 ;
		
		printf("X1:");scanf("%d",&x1);
		printf("Y1:");scanf("%d",&y1);
		printf("X2:");scanf("%d",&x2);
		printf("Y2:");scanf("%d",&y2);
	}
	
	for(i= 1; i<+MyTab.nEff;i++){
		CetakKotak(MyTab);
	}
	
	return 0;
}
