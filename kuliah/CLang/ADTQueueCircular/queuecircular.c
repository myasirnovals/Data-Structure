//
// Created by myasi on 27/05/2025.
//

#include "queuecircular.h"

void CreateQueue(Queue* Q)
{
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

int NBElmt(Queue Q)
{
    if (Head(Q) == 0 && Tail(Q) == 0)
    {
        return 0;
    }
    else
    {
        return Tail(Q);
    }
}

boolean IsQueueEmpty(Queue Q)
{
    if (Head(Q) == Nil && Tail(Q) == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

boolean IsQueueFull(Queue Q)
{
    if (Tail(Q) == MaxEl || Head(Q) == MaxEl)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void AddQueue(Queue* Q, infotype X)
{
    if (IsQueueEmpty(*Q))
    {
        Head(*Q)++;
        InfoHead(*Q) = X;

        Tail(*Q) = Head(*Q);
    }
    else
    {
        if (!IsQueueFull(*Q))
        {
            if (Head(*Q) <= Tail(*Q))
            {
                Tail(*Q)++;
                InfoTail(*Q) = X;
            }
            else
            {
                if (Tail(*Q) + 1 != Head(*Q))
                {
                    Tail(*Q)++;
                    InfoTail(*Q) = X;
                }
                else
                {
                    printf("\nQueue Penuh\n");
                }
            }
        }
        else
        {
            Tail(*Q) = 1;
            InfoTail(*Q) = X;
        }
    }
}

void DelQueue(Queue* Q, infotype* X)
{
    if (!IsQueueEmpty(*Q))
    {
        if (Head(*Q) == Tail(*Q))
        {
            *X = InfoHead(*Q);
            Head(*Q) = Nil;
            Tail(*Q) = Nil;
        }
        else
        {
            *X = InfoHead(*Q);
            InfoHead(*Q) = 0;

            if (!IsQueueFull(*Q))
            {
                Head(*Q)++;
            }
            else
            {
                Head(*Q) = 1;
            }

            if (Tail(*Q) == (Head(*Q) - 1 + MaxEl) % MaxEl)
            {
                Tail(*Q) = (Tail(*Q) + 1) % MaxEl;
            }
        }
    }
    else
    {
        printf("\nQueue Kosong\n");
    }
}

void PrintQueueInfo(Queue S)
{
    int i;

    if (IsQueueEmpty(S))
    {
        printf("\nQueue Kosong\n");
    }
    else
    {
        for (i = 1; i <= MaxEl; i++)
        {
            printf("[%d] ", InfoElm(S));
        }
    }
}

boolean isInfoKetemu(Queue S, infotype x)
{
    int i;

    if (IsQueueEmpty(S))
    {
        return false;
    }
    else
    {
        for (i = 1; i <= MaxEl; i++)
        {
            if (InfoElm(S) == x)
            {
                return true;
            }
        }

        return false;
    }
}

address CariElemenQueue(Queue Q, int X)
{
    int i;

    if (IsQueueEmpty(Q))
    {
        return false;
    }
    else
    {
        for (i = 1; i <= MaxEl; i++)
        {
            if (InfoElm(Q) == X)
            {
                return i;
            }
        }

        return false;
    }
}

void SetQueue(Queue *Q)
{
    int i;

    for (i = 1; i <= MaxEl; i++)
        InfoElm(*Q) = 0;
}