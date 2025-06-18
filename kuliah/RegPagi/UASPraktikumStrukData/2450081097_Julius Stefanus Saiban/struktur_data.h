//Author		: 2450081097 - Julius Stefanus Saiban

#ifndef STRUKTUR_DATA_H
#define STRUKTUR_DATA_H

#include <stdio.h>   // Untuk fungsi input/output seperti printf
#include <stdlib.h>  // Untuk alokasi memori dinamis (malloc)

// Definisi Struktur Node Anak
typedef struct NodeAnak {
    int nilai;             // Nilai data pada node anak
    struct NodeAnak *berikutnya; // Pointer ke node anak berikutnya
} NodeAnak;

// Definisi Struktur Node Ortu
typedef struct NodeOrtu {
    int x1, y1, x2, y2;    // Koordinat pembentuk kotak
    int panjang;           // Panjang kotak
    int lebar;             // Lebar kotak
    int luas;              // Luas kotak
    NodeAnak *kepalaListAnak; // Pointer ke kepala (head) dari linked list anak
    struct NodeOrtu *berikutnya; // Pointer ke node ortu berikutnya dalam linked list ortu
} NodeOrtu;

// Deklarasi Fungsi-fungsi (Prototipe)

// Fungsi untuk membuat node anak baru
NodeAnak* buatNodeAnak(int nilai);

// Fungsi untuk menambahkan anak ke daftar (metode AddFirst)
void tambahAnak(NodeAnak **referensiKepala, int nilai);

// Fungsi untuk membuat node ortu baru
NodeOrtu* buatNodeOrtu(int x1, int y1, int x2, int y2);

// Fungsi untuk menambahkan ortu ke daftar (metode AddFirst)
void tambahOrtu(NodeOrtu **referensiKepala, int x1, int y1, int x2, int y2);

// Fungsi untuk mengisi daftar anak berdasarkan aturan yang ditentukan
void isiDaftarAnak(NodeOrtu *nodeOrtu);

// Fungsi untuk mencetak daftar anak
void cetakListAnak(NodeAnak *kepala);

// Fungsi untuk mencetak daftar Ortu dan daftar Anaknya
void cetakData(NodeOrtu *kepala);

// Fungsi untuk membebaskan memori yang dialokasikan untuk linked list
void bebaskanListAnak(NodeAnak *kepala);
void bebaskanListOrtu(NodeOrtu *kepala);

#endif // STRUKTUR_DATA_H
