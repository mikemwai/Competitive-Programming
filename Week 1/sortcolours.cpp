/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
*/

/*Solution:
This problem is known as the Dutch National Flag problem, which can be solved using the "Three-Way Partitioning" approach. 
The idea is to group the elements with different values (colors) together while maintaining their relative order.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int current = 0;

        while (current <= high) {
            if (nums[current] == 0) {
                swap(nums[current], nums[low]);
                low++;
                current++;
            } else if (nums[current] == 2) {
                swap(nums[current], nums[high]);
                high--;
            } else {
                current++;
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> colors = {2, 0, 2, 1, 1, 0};

    solution.sortColors(colors);

    cout << "Sorted Colors: ";
    for (int color : colors) {
        cout << color << " ";
    }

    return 0;
}
