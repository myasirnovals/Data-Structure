//
// Created by myasi on 20/05/2025.
//

#include "queue.h"

void CreateQueue(Queue* Q)
{
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

int NBElmt(Queue Q)
{
    if (IsQueuekEmpty(Q))
    {
        return IdxUndef;
    }
    else
    {
        return Tail(Q);
    }
}

boolean IsQueuekEmpty(Queue Q)
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

boolean IsQueuekFull(Queue Q)
{
    if (Tail(Q) == MaxEl)
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
    if (IsQueuekEmpty(*Q))
    {
        Head(*Q)++;
        InfoHead(*Q) = X;

        Tail(*Q) = Head(*Q);
    }
    else
    {
        if (!IsQueuekFull(*Q))
        {
            Tail(*Q)++;
            InfoTail(*Q) = X;
        }
        else
        {
            printf("Queue Penuh");
        }
    }
}

void DelQueue(Queue* Q, infotype* X)
{
    int i;

    if (!IsQueuekEmpty(*Q))
    {
        *X = InfoHead(*Q);

        for (i = Head(*Q); i <= Tail(*Q); i++)
        {
            InfoElm(*Q) = InfoNextElm(*Q);
        }

        Tail(*Q)--;
    }
    else
    {
        printf("Queue Kosong");
    }
}

void PrintQueueInfo(Queue S)
{
    int i;

    if (!IsQueuekEmpty(S))
    {
        for (i = Head(S); i <= Tail(S); i++)
        {
            printf("[%d] <- ", InfoElm(S));
        }

        printf("Null");
    }
}

boolean isInfoKetemu(Queue S, infotype X)
{
    int i;

    if (!IsQueuekEmpty(S))
    {
        for (i = Head(S); i <= Tail(S); i++)
        {
            if (InfoElm(S) == X)
            {
                return true;
            }
        }
    }
    else
    {
        return IdxUndef;
    }
}

address CariElemenQueue(Queue Q, int X)
{
    int i;

    if (!IsQueuekEmpty(Q))
    {
        for (i = Head(Q); i <= Tail(Q); i++)
        {
            if (InfoElm(Q) == X)
            {
                return i;
            }
        }
    }
    else
    {
        return IdxUndef;
    }
}
