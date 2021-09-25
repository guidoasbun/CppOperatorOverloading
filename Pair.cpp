//
// Created by Rodrigo Asbun on 9/25/21.
//

#include "Pair.h"

using namespace std;

/*
Note on friend functions:
1) They cannot be constants because they are non-member functions.
2) No need to use get functions to retrieve the value of the member
variables of the class, because they have direct access to them.
*/
ostream& operator<<(ostream& out, const Pair& pair)
{
    // NOTE: A friend function can access private member variables
    // of the class. No need to call an accessor function.
    out << "(" << pair.first << ", " << pair.second << ")";
    return out;
}

Pair operator+(const Pair& leftPair, const Pair& rightPair)
{
    // Need to construct a temporary object.
    Pair tempPair ((leftPair.first + rightPair.first),
                   (leftPair.second + rightPair.second));
    return tempPair;
}

Pair::Pair(int firstValue, int secondValue)
{
    first = firstValue;
    second = secondValue;
}

void Pair::setFirst(int newValue)
{
    first = newValue;
}

void Pair::setSecond(int newValue)
{
    second = newValue;
}

int Pair::getFirst() const
{
    return first;
}

int Pair::getSecond( ) const
{
    return second;
}

Pair Pair::operator*(const Pair& p) const
{
    // Need to construct a temporary object.
    Pair temp(first * p.first, second * p.second);
    return temp;
}



/*
 * Write the definition of the insertion operator as a
 * friend function so that it prints "$ #", where # will be
 * replaced with the amount. Do not worry about decimal format;
 * it is already considered in the testing cases.
 *
 * ostream& operator<<(ostream& out, const Money& theAmount)
    {
        out << "$ " << theAmount.amount;
        return out;
    }
 * */

/*
 * Write the definition of the less-than operator as a friend function.
 * The function returns true if amount1 is less than amount2, and false otherwise.

Function call: (amount1 < amount2)
Both amount1 and amount2 are objects of the class Money.

Parameters: You need to determine what to pass according to the implementation of this function.

 bool operator<(const Money& amount1, const Money& amount2)
    {
        return (amount1.amount < amount2.amount);
    }
 * */


/*
 * Write the definition of the plus operator as a member function of the class Money.
 * The function returns an object of the class Money by value that stores the sum of both amounts.

Function call: totalAmount = (amount1 + amount2)
totalAmount, amount1, and amount2 are objects of the class Money.

Parameters: You need to determine what to pass according to the implementation of this function.

 Money Money::operator+(const Money& otherAmount) const
    {
        return Money (amount + otherAmount.amount);
    }
 * */

/*
 *
 * */