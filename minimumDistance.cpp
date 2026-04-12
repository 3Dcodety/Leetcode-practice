#include <vector>
#include <unordered_map>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return -1;

        unordered_map<int, vector<int>> pos_map;
        for (int i = 0; i < n; i++) {
            pos_map[nums[i]].push_back(i);
        }

        int res = INT_MAX;
        for (auto& a : pos_map) {
            auto& b = a.second;
            if (b.size() < 3) continue;
            for (int i = 0; i + 2 < b.size(); i++) {
                res = min(res, b[i + 2] - b[i]);
            }
        }
        return res == INT_MAX ? -1 : res * 2;
    }
};//遍历容器时加 & 是引用，直接用原数据不拷贝、效率更高，不加也能正常运行但会浪费性能。

//二维数组版
/*class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if (n < 3)return -1;
        int m = *max_element(nums.begin(), nums.end());
        vector<vector<int>>pos(m + 1);
        //vector<vector<int>>p(m,vector<int>(m,0));创建二维m行m列数组
        for (int i = 0; i < n; i++)
        {
            pos[nums[i]].push_back(i);
        }
        int res = INT_MAX;
        for (auto& x : pos)
        {
            if (x.size() < 3)continue;
            for (int i = 0; i + 2 < x.size(); i++)
            {
                res = min(res, x[i + 2] - x[i]);
            }
        }
        return res == INT_MAX ? -1 : 2 * res;
    }
};*/
