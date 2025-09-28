#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;
        
        while(lp<rp)
        {
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater);

            height[lp]<height[rp]?lp++:rp--;
        }
        return maxwater;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout << s.maxArea(height);
    return 0;
}
