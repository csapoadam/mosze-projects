// OOP-gyak-path-solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "path.h"


int main()
{
    using namespace std;
    Path p(3);
    p.setPoint(0, Point(0, 0));
    p.setPoint(1, Point(2, 0.5));
    p.setPoint(2, Point(4, 1.5));
    cout << "Path with " << p.getPointCount() << " points:\n";
    p.print(cout);
    cout << "Path length: " << p.getLength() << endl;

    Path copy = p;
    p.setPoint(0, Point(3.14, -1));
    cout << "Copy:\n";
    copy.print(cout);
    copy = p;
    cout << "Copy after assignment:\n";
    copy.print(cout);
    Path longer(5);
    for (int i = 0; i < longer.getPointCount(); ++i)
        longer.setPoint(i, Point(i + 3, 2 * i - 3));
    cout << "Longer path:\n";
    longer.print(cout);
    copy = longer;
    cout << "Copy of longer:\n";
    copy.print(cout);
    longer = p;
    cout << "Longer after overwrite:\n";
    for (int i = 0; i < longer.getPointCount(); ++i)
        cout << i + 1 << ". (" << longer.getPoint(i).x << ", "
        << longer.getPoint(i).y << ")\n";
}
