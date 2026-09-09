#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

#include "TextAnalyzer.h"

using namespace std;

int main()
{

    unordered_map<string, vector<int>> words;
    unordered_map<string, int> wordsCount;

    ReadWords("TEXT.txt", words, wordsCount);

    PrintWordsCount(wordsCount);
    PrintWordsPosition(words);

    return 0;
}