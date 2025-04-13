#include <stdio.h>

#include "line.h"
#include "mpoint.c"

void CreateLine(LINE *L) 
{
     CreatePoint(&(*L).PAwal);
     CreatePoint(&(*L).PAkhir);
}

void CreateLine2(LINE *L, POINT First, POINT End)
{
     (*L).PAwal = First;
     (*L).PAkhir = End;
}

POINT GetPAwal(LINE L)
{
      return FirsPoint(L);
}

POINT GetPAkhir(LINE L)
{
      return EndPoint(L);
}

void SetPAwal(LINE *L, POINT NewFirstP)
{
     (*L).PAwal = NewFirstP;
}

void setPAkhir(LINE *L, POINT NewEndP)
{
     (*L).PAkhir = NewEndP;
}

void BacaLine(LINE *L)
{
     printf("Point Awal: ");
     BacaPoint(&(*L).PAwal);
     
     printf("\n");
     
     printf("Point Akhir: ");
     BacaPoint(&(*L).PAkhir);
}

void CetakLine(LINE L)
{
     printf("Garis dari (%d, %d) ke (%d, %d)\n", L.PAwal.X, L.PAwal.Y, L.PAkhir.X, L.PAkhir.Y);
}

boolean IsEQLine(LINE L1, LINE L2)
{
        return EQ(GetPAwal(L1), GetPAwal(L2)) && EQ(GetPAkhir(L1), GetPAkhir(L2));
}

boolean IsNEQLine(LINE L1, LINE L2)
{
        return NEQ(GetPAwal(L1), GetPAwal(L2)) && NEQ(GetPAkhir(L1), GetPAkhir(L2));
}

boolean IsLOnSbX(LINE L)
{
        return IsOnSbX(GetPAwal(L)) && IsOnSbX(GetPAkhir(L));
}

boolean IsLOnSbY(LINE L)
{
        return IsOnSbY(GetPAwal(L)) && IsOnSbY(GetPAkhir(L));
}

boolean IsTegakLurus(LINE L1, LINE L2)
{
        // Kamus
        double M1, M2, result;
        
        // Algoritma
        M1 = Gradien(L1);
        M2 = Gradien(L2);
        
        result = M1 * M2;
        
        if (result == -1) {
           return true;
        } else {
           return false;
        }
}

boolean IsSejajar(LINE L1, LINE L2) 
{
        return Gradien(L1) == Gradien(L2);
}

LINE GeserLine(LINE L, int deltaX, int deltaY)
{
     // Kamus
     Line newLine;
     
     // algoritma
     newLine.PAwal.X = L.PAwal.X + deltaX;
     newLine.PAwal.Y = L.PAwal.Y + deltaY;
     newLine.PAkhir.X = L.Akhir.X + deltaX;
     newLine.PAkhir.Y = L.PAkhir.Y + deltaY;
     
     return newLine;
}

double Gradien(LINE L)
{
       // Kamus
       int x1, x2, y1, y2;
       
       // Algoritma
       // L.PAkhir.X = X2
       x2 = L.PAkhir.X;
       // L.PAwal.X = X1
       x1 = L.PAwal.X;
       
       // error handling can't divide by zero
       if ((x2 - x1)!= 0) {
              // L.PAkhir.Y = Y2
              y2 = L.PAkhir.Y;
              // L.PAwal.Y = Y1
              y1 = L.PAwal.Y;
              
              return (double) (y2 - y1) / (double) (x2 - x1);      
       } else {
              return false;       
       }
}
