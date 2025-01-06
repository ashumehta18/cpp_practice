//move all zeroes to end of array
#include <iostream>
#include <vector>

using namespace std;

void moveZeroesToEnd(vector<int>& nums) {
    int nonZeroIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }
    for (int i = nonZeroIndex; i < nums.size(); i++) {
        nums[i] = 0;
    }
}

int main() {
    vector<int> nums = {1, 0, 5, 3, 9, 0, 0, 5, 0, 6, 7};
    moveZeroesToEnd(nums);
    for (int i : nums) {
        cout << i << " ";
    }
    return 0;
}
