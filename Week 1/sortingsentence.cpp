/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.
A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.
For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.
*/

// Online C++ compiler to run C++ program online
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

int main() {
    Solution solution;
    std::string originalSentence = "This4 is3 a2 sentence1";
    std::string shuffledSentence = solution.sortSentence(originalSentence);
    std::cout << "Original Sentence: " << originalSentence << std::endl;
    std::cout << "Shuffled Sentence: " << shuffledSentence << std::endl;
    return 0;
}