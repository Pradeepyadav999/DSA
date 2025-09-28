#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        for (int i = 0; i < nums.size(); i++) {
            if (window.count(nums[i])) return true;
            window.insert(nums[i]);
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,3,1};
    int k = 3;
    cout << (obj.containsNearbyDuplicate(nums, k) ? "true" : "false") << endl;
    return 0;
}
