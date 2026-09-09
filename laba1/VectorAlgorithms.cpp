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

bool CompareNumbers(int a, int b)
{
    if (a % 2 != 0 && b % 2 == 0)
        return true;

    if (a % 2 == 0 && b % 2 != 0)
        return false;

    if (a % 2 != 0 && b % 2 != 0)
        return a < b;

    return a > b;
}

vector<int> FindUniqueNum (const vector<int>& numbers, int start, int end)
{
    vector<int> result;
     copy_if(
        numbers.begin(),
        numbers.end(),
        back_inserter(result),
        [start, end](int number)
        {
            return number >= start && number <= end;
        }
    );
    sort(result.begin(), result.end());

    auto newEnd = unique(result.begin(), result.end());

    result.erase(newEnd, result.end());

    return result;
}

