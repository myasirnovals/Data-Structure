//
// Created by myasi on 08/04/2025.
//

#include "tabint.h"

/* Konstruktor membentuk TabInt */
void CreateTabInt(TabInt* T)
{
    (*T).nEff = 0;
}

/* Selektor TabInt **/
int GetJumElmt(TabInt T)
{
    if (IsEmpty(T))
    {
        return 0;
    }
    else
    {
        return T.nEff;
    }
}

int GetFirstIdx(TabInt T)
{
    return T.T1[0];
}

int GetLastIdx(TabInt T)
{
    return T.nEff;
}

int GetElmt(TabInt T, int idx)
{
    // kamus
    int i;

    // algoritma
    // T = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    if (idx <= nMax && idx >= 0)
    {
        for (i = 1; i <= nMax; i++)
        {
            if (T.T1[i] == idx)
            {
                return T.T1[i];
            }
        }
    }
    else
    {
        printf("Index berada diluar jangkauan\n");
        return IdxUndef;
    }
}

void SetEl(TabInt* T, int i, int v)
{
    if (i <= (*T).nEff && i >= 0)
    {
        (*T).T1[i] = v;
    }
    else
    {
        printf("index ke-%d tidak diketahui", IdxUndef);
    }
}

boolean IsEmpty(TabInt T)
{
    if (T.nEff == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean IsFull(TabInt T)
{
    if (T.nEff == nMax)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void BacaElmt(TabInt* T)
{
    // kamus
    int Elmt;

    // algoritma
    printf("Masukan Elemen: ");
    scanf("%d", &Elmt);

    while (Elmt != 999)
    {
        AddElmt(&(*T), Elmt);
        printf("Masukan Elemen: ");
        scanf("%d", &Elmt);
    }
}

void CetakTabInt(TabInt T)
{
    // kamus
    int i;

    // algoritma
    printf("[");
    for (i = 1; i <= T.nEff; i++)
    {
        printf("%d, ", T.T1[i]);
    }
    printf("]");
}

void AddElmt(TabInt* T, int X)
{
    if (!IsFull((*T)))
    {
        (*T).nEff++;
        (*T).T1[(*T).nEff] = X;
    }
    else
    {
        printf("Tabel sudah penuh");
    }
}

TabInt KaliTab(TabInt Tab1, TabInt Tab2)
{
    // Kamus
    TabInt TabBaru;
    int i;

    CreateTabInt(&TabBaru);

    // algoritma
    if (!IsEmpty(Tab1) && !IsEmpty(Tab2) && IsEQTab(Tab1, Tab2))
    {
        for (i = 1; i <= Tab1.nEff; i++)
        {
            AddElmt(&TabBaru, Tab1.T1[i] * Tab2.T1[i]);
        }
    }
    else
    {
        return TabBaru;
    }

    return TabBaru;
}

TabInt KaliKons(TabInt T, int c)
{
    // kamus
    TabInt TabBaru;
    int i;

    CreateTabInt(&TabBaru);

    // algoritma
    for (i = 1; i <= T.nEff; i++)
    {
        AddElmt(&TabBaru, T.T1[i] * c);
    }

    return TabBaru;
}

boolean IsEQTab(TabInt T1, TabInt T2)
{
    if (T1.nEff == T2.nEff)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void CopyTab(TabInt Tin, TabInt* Tout)
{
    // kamus
    TabInt TabHasil;

    // algoritma
    TabHasil = Tin;
    (*Tout) = TabHasil;
}

TabInt InverseTab(TabInt T)
{
    // kamus
    TabInt TabBaru;
    int i;

    // algoritma
    CreateTabInt(&TabBaru);

    for (i = T.nEff; i >= 1; i--)
    {
        AddElmt(&TabBaru, T.T1[i]);
    }

    return TabBaru;
}

boolean isElemenAda(TabInt T, ElType X)
{
    // kamus
    int i;
    boolean hasil;

    // algoritma
    i = 1;
    hasil = false;

    while (i <= T.nEff && !hasil)
    {
        if (T.T1[i] == X)
        {
            hasil = true;
        }
        else
        {
            i++;
        }
    }

    return hasil;
}

int cariElemen(TabInt T, ElType X)
{
    // kamus
    int i;

    // algoritma
    if (IsEmpty(T))
    {
        return IdxUndef;
    }
    else
    {
        for (i = 1; i <= T.nEff; i++)
        {
            if (T.T1[i] == X)
            {
                return i;
            }
        }

        return IdxUndef;
    }
}
