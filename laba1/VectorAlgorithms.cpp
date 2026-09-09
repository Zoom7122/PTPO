#include "Vector.h"

#include <iostream>
#include <algorithm>

using namespace std;

bool IsSimple(int number)
{
    if (number < 2)
        return false;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

int ModifyNumber(int number)
{
    if (IsSimple(number))
        return number * number;

    return number;
}

void Square(vector<int>& numbers)
{
    transform(
        numbers.begin(),
        numbers.end(),
        numbers.begin(),
        ModifyNumber
    );
}

void PrintVector(const vector<int>& numbers)
{
    for (int number : numbers)
    {
        cout << number << " ";
    }

    cout << endl;
}

