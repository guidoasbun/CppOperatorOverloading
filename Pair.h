//
// Created by Rodrigo Asbun on 9/25/21.
//

#ifndef PAIR_H
#define PAIR_H

#include <iostream>

class Pair
{
    // Declaration of overloaded insertion operator as a friend function.
    friend std::ostream& operator<<(std::ostream& out, const Pair& p);

    // Declaration of overloaded addition operator as a friend function.
    friend Pair operator+(const Pair& leftPair, const Pair& rightPair);

public:
    Pair() : first(0), second(0) {}
    Pair(int firstValue, int secondValue);

    void setFirst(int firstValue);
    void setSecond(int secondValue);

    int getFirst() const;
    int getSecond() const;

    // Declaration of overloaded multiplication operator as a member function.
    Pair operator*(const Pair& p) const;

    ~Pair() {}

private:
    int first;
    int second;
};

#endif //CPPOPERATOROVERLOADING_PAIR_H
