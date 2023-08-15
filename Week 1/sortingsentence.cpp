#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>

class Solution {
public:
    std::string sortSentence(std::string s) {
        std::unordered_map<int, std::string> wordMap;
        std::istringstream iss(s);
        
        std::string word;
        while (iss >> word) {
            int position = word.back() - '0';
            word.pop_back();
            wordMap[position] = word;
        }
        
        std::string sortedSentence;
        for (int i = 1; i <= wordMap.size(); ++i) {
            sortedSentence += wordMap[i] + " ";
        }
        
        sortedSentence.pop_back(); // Remove the trailing space
        
        return sortedSentence;
    }
};
