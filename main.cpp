#include "Pair.h"

#include <iostream>

// Declaration of overloaded subtraction operator
// as a non-member function.
Pair operator-(const Pair& p1, const Pair& p2);

int main()
{
    Pair p1(4, 3);
    Pair p2(10, 20);

    std::cout << "TEST: Insertion operator <<\n";
    std::cout << "\n\tP1: " << p1;
    std::cout << "\n\tP2: " << p2;

    std::cout << "\n\nTEST: Addition operator\n";
    Pair p3 = p1 + p2;
    std::cout << "\n\tP3 = P1 + P2";
    std::cout << "\n\tP3: " << p3;

    std::cout << "\n\nTEST: Multiplication operator\n";
    Pair p4 = p1 * p2;
    std::cout << "\n\tP4 = P1 * P2";
    std::cout << "\n\tP4: " << p4;

    std::cout << "\n\nTEST: Subtraction operator\n";
    Pair p5 = p1 - p2;
    std::cout << "\n\tP5 = P1 - P2";
    std::cout << "\n\tP5: " << p5;

    std::cout << std::endl;
    return 0;
}

// Definition of overloaded comparison operator.
Pair operator-(const Pair& p1, const Pair& p2)
{
    // Need to construct a temporary object.
    Pair tempPair ( (p1.getFirst() - p2.getFirst()),
                    (p1.getSecond() - p2.getSecond()));

    return tempPair;
}