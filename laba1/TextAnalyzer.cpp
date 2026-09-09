#include "TextAnalyzer.h"

#include <iostream>
#include <fstream>

using namespace std;

void ReadWords(
    const string& fileName,
    unordered_map<string, vector<int>>& words,
    unordered_map<string, int>& wordsCount
)
{
    ifstream file(fileName);

    string word;
    int position = 0;

    while (file >> word)
    {
        words[word].push_back(position);
        wordsCount[word]++;

        position++;
    }

    file.close();
}

void PrintWordsCount(
    const unordered_map<string, int>& words
)
{
    for (const auto& element : words)
    {
        cout << element.first << " - "
             << element.second << endl;
    }
}

void PrintWordsPosition(
    const unordered_map<string, vector<int>>& words
)
{
    for (const auto& element : words)
    {
        cout << element.first << " - ";

        for (const auto& position : element.second)
        {
            cout << position << ", ";
        }

        cout << endl;
    }
}