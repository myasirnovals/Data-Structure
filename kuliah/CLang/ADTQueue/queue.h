//
// Created by myasi on 20/05/2025.
//

#ifndef QUEUE_H
#define QUEUE_H

#include "boolean.h"

#include <stdio.h>
#include <conio.h>

#define Nil 0
#define MaxEl 10
#define IdxUndef -999

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define InfoElm(Q) (Q).T[i]
#define InfoNextElm(Q) (Q).T[i + 1]

// definisi queue
typedef int infotype;
typedef int address; // indeks

typedef struct
{
    infotype T[MaxEl + 1];
    address HEAD;
    address TAIL;
} Queue;

/* Prototype Queue */
/* Konstruktor membentuk Queue */
void CreateQueue(Queue* Q);
/* I.S : Q terdefinisi tidak diketahui isinya
   F.S : Q diinisialisasi dengan HEAD(Q)=nil, TAIL(Q)=nil
*/

/** { Operasi terhadap komponen : selektor Get dan Set } : tidak perlu
sudah di define diatas**/

int NBElmt(Queue Q);
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong */

/* Destruktor/Dealokator: tidak perlu */

/** { KELOMPOK OPERASI pada Queue} **/
/*********** Predikat Untuk test keadaan KOLEKSI **/
boolean IsQueuekEmpty(Queue Q);
// Mengecek apakah Queue tidak memiliki elemen
// Mengirim true jika Queue kosong: lihat definisi di atas

boolean IsQueuekFull(Queue Q);
// Mengecek apakah Queue tidak memiliki elemen
// Mengirim true jika tabel penampung nilai elemen queue penuh

/*********** Menambahkan sebuah elemen ke Queue **********/
void AddQueue(Queue* Q, infotype X);
/* Proses: Menambahkan X pada Q dengan aturan FIFO */
/* I.S : Q terdifinisi, mungkin kosong, dan
         Q penampung elemen queue tidak penuh.
   F.S : X menjadi elemen TAIL yang baru, TAIL "maju"
*/

/*********** Menqhapus sebuah elemen Queue **********/
void DelQueue(Queue* Q, infotype* X);
/* Proses: Menghapus X pada Q dengan aturan FIFO */
/* I.S : Q terdefinisi, dan Q tidak kosong
   F.S : Q berkurang satu elemen didepan dan disimpan pada X
*/

/** { KELOMPOK Interaksi dengan I/O device, BACA/TULIS } **/
void PrintQueueInfo(Queue S);
/* I.S : S terdefinisi, mungkin kosong
   F.S : Jika Queue tidak kosong, menampilkan semua info yang disimpan pada
elemen queue ke layar.
*/

/** KELOMPOK OPERASI LAIN TERHADAP TYPE **/
boolean isInfoKetemu(Queue S, infotype X);
// mengirim true jika x berada pada Q

address CariElemenQueue(Queue Q, int X);
// Search apakah ada elemen tabel TabElm yang bernilai X)
// Jika x ada pada Q, menghasilkan address pertama kali ditemukan
// Jika tidak ada atau kondisi Queue kosong, maka mengirimkan IdXUndef (bernilai -999)

#endif //QUEUE_H
