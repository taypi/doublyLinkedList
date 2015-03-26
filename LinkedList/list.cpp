#include "list.h"
#include <cstddef>
#include <iostream>

using namespace std;

List::List()
{
    head = NULL;
    curr = NULL;
}

int List::front()
{
    return head->e;
}

void List::insert(int e)
{
    nodeP n = new node;
    n->prev = NULL;
    n->next = NULL;
    n->e = e;

    if (head == NULL){
        head = n;
    }
    else{
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void List::remove(int e)
{
    curr = head;
    while(curr != NULL && curr->e != e){
        curr = curr->next;
    }
    if(curr == NULL){
        cout << e << " was not in the list\n";
    }
    else if(curr == head){
        head->next->prev = NULL;
        head = head->next;
        delete curr;
    }
    else if(curr->next == NULL){
        curr->prev->next = NULL;
        delete curr;
    }
    else{
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete curr;
        cout << "the value " << e << " was deleted\n";
    }
}

void List::insertBefore(int p, int e)
{
    nodeP n = new node;
    n->prev = NULL;
    n->next = NULL;
    n->e = e;

    curr = head;
    while(curr != NULL && curr->e != p){
        curr = curr->next;
    }
    if (curr == head){
        n->next = head;
        head->prev = n;
        head = n;
    }
    else if(curr != NULL){
        n->prev = curr->prev;
        n->next = curr;
        curr->prev->next = n;
        curr->prev = n;
    }
    else{
        cout << e << "was not in the list\n";
    }

}

void List::insertLast(int e)
{
    nodeP n = new node;
    n->prev = NULL;
    n->next = NULL;
    n->e = e;

    if(head != NULL){
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        if(curr == head){
            head->next = n;
            n->prev = head;
        }
        else{
            n->prev = curr;
            curr->next = n;
        }
    }
    else{
        head = n;
    }
}

void List::print()
{
    curr = head;
    while(curr != NULL){
        cout << curr->e << endl;
        curr = curr->next;
    }
}
