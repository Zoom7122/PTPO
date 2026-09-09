#pragma once

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void ReadWords(
    const string& fileName,
    unordered_map<string, vector<int>>& words,
    unordered_map<string, int>& wordsCount
);

void PrintWordsCount(
    const unordered_map<string, int>& words
);

void PrintWordsPosition(
    const unordered_map<string, vector<int>>& words
);