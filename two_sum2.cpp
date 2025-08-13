
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e) {
        int sum = nums[s] + nums[e];
        if (sum == target) {
            return {s + 1, e + 1};
        } else if (sum < target) {
            s++;
        } else {
            e--;
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
