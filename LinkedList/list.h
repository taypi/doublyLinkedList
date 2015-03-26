#ifndef LIST_H
#define LIST_H

class List
{
private:
    typedef struct node{
        int e;
        node* next;
        node* prev;
    }* nodeP;

    nodeP head;
    nodeP curr;

public:
    List();
    int front();
    void insert(int e);
    void remove(int e);
    void insertBefore(int p, int e);
    void insertLast(int e);
    void print();
};

#endif // LIST_H
