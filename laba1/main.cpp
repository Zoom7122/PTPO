#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

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

    return 0;
}