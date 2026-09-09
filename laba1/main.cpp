#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

#include "TextAnalyzer.h"
#include "Vector.h"

using namespace std;

int main()
{

    unordered_map<string, vector<int>> words;
    unordered_map<string, int> wordsCount;

    ReadWords("TEXT.txt", words, wordsCount);

    PrintWordsCount(wordsCount);
    PrintWordsPosition(words);
    
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    PrintVector(numbers);
    Square(numbers);
    PrintVector(numbers);
    
    vector<int> numbers2 = {8, 3, 100,10,5,7,3, 2,7};
    PrintVector(numbers2);
    sort(numbers2.begin(), numbers2.end(), CompareNumbers);
    PrintVector(numbers2);

    vector<int> numbers3= {10, 20, 13 ,20 , 20 , 40 , 100 , 12, 30, 40};
    PrintVector(numbers3);
    vector<int> numbers4 = FindUniqueNum(numbers3 , 10, 40);
    PrintVector(numbers4);

    return 0;
}