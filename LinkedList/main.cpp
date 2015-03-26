#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List l;

   /* l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.print();
    cout << endl;*/
    l.insertLast(1);
    l.insertLast(2);
    l.insertLast(3);
    l.insertLast(4);
    l.insertLast(5);
    l.print();
    cout << endl;

    //l.insertBefore(1, 4);
    //l.print();
    //cout << endl;

    cout << "front: " << l.front() << endl;

    l.remove(1);
    cout << "sem o 1: \n";
    l.print();
    cout << endl;

    l.insertBefore(5, 3);
    l.print();
    cout << endl;

    l.remove(2);
    cout << "sem o 2: \n";
    l.print();
    cout << endl;

    l.remove(5);
    cout << "sem o 5: \n";
    l.print();
    cout << endl;
    return 0;
}

