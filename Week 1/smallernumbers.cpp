#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j) {
                if (i != j && nums[j] < nums[i]) {
                    count++;
                }
            }
            result[i] = count;
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {8, 1, 2, 2, 3};
    
    vector<int> result = solution.smallerNumbersThanCurrent(nums);
    
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
