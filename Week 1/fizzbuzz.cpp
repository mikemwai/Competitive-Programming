/* Given an integer n, return a string array answer (1-indexed) where:
 answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
 answer[i] == "Fizz" if i is divisible by 3.
 answer[i] == "Buzz" if i is divisible by 5.
 answer[i] == i (as a string) if none of the above conditions are true.
 */

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        std::vector<std::string> answer;

        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                answer.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                answer.push_back("Fizz");
            } else if (i % 5 == 0) {
                answer.push_back("Buzz");
            } else {
                answer.push_back(std::to_string(i));
            }
        }

        return answer;
    }
};

int main() {
    Solution solution;
    int n;
    
    std::cout << "Enter a value for n: ";
    std::cin >> n;

    std::vector<std::string> result = solution.fizzBuzz(n);
    for (const std::string& s : result) {
        std::cout << s << " ";
    }

    return 0;
}