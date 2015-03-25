#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List l;

    l.insertLast(1);
    l.insertLast(2);
    l.insertLast(3);
    l.insertLast(4);
    l.insertLast(5);
    l.print();

    cout << "front: " << l.front() << endl;

    l.remove(3);

    cout << "sem o 3: \n";
    l.print();
    cout << endl;

    l.insertBefore(4, 3);
    l.print();
    cout << endl;

    return 0;
}

