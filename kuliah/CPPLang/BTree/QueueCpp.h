//
// Created by myasi on 07/07/2025.
//

#include <stdio.h>
#ifndef QUEUECPP_H
#define QUEUECPP_H

class Node
{
public:
    Node* lchild;
    int data;
    Node* rchild;
};

class Queue
{
private:
    int front;
    int rear;
    int size;
    Node** Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new Node*[size];
    }

    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new Node*[this->size];
    }

    void enqueue(Node* x);
    Node* dequeue();
    void display();
};

void Queue::enqueue(Node* x)
{
    if (rear == size - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}

Node* Queue::dequeue()
{
    Node* x = NULL;
    if (front == rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        x = Q[front + 1];
        front++;
    }

    return x;
}

void Queue::display()
{
    for (int i = front + 1; i <= rear; i++)
    {
        printf("%d ", Q[i]);
    }
    printf("\n");
}

#endif //QUEUECPP_H
