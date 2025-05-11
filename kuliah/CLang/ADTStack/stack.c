//
// Created by myasi on 06/05/2025.
//

#include "stack.h"

void CreateStack(Stack* S)
{
    Top(*S) = Nil;
}

boolean IsStackEmpty(Stack S)
{
    if (Top(S) == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean IsStackFull(Stack S)
{
    if (Top(S) == MaxEl)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Push(Stack* S, infotype X)
{
    if (!IsStackFull(*S))
    {
        Top(*S)++;
        InfoTop(*S) = X;
    }
    else
    {
        printf("Stack Penuh");
    }
}

void Pop(Stack* S, infotype* X)
{
    if (!IsStackEmpty(*S))
    {
        *X = InfoTop(*S);
        Top(*S) = PopTop(*S);
    }
    else
    {
        printf("Stack Kosong");
    }
}

void PrintStackInfo(Stack S)
{
    int i;

    for (i = 1; i <= Top(S); i++)
    {
        printf("[%d]", ElemenTop(S));
    }
}

boolean isInfoKetemu(Stack S, infotype x)
{
    int i;
    boolean ketemu;

    i = 1;
    ketemu = false;

    while (i <= Top(S) && !ketemu)
    {
        if (ElemenTop(S) == x)
        {
            ketemu = true;
        }
        else
        {
            i++;
        }
    }

    return ketemu;
}

address CariElemenStack(Stack S, infotype x)
{
    int i;

    if (!IsStackEmpty(S))
    {
        for (i = 1; i <= Top(S); i++)
        {
            if (ElemenTop(S) == x)
            {
                return i;
            }
        }

        return idxUndef;
    }
    else
    {
        return idxUndef;
    }
}
