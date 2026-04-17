//leetcode 14题
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)return "";
        sort(strs.begin(), strs.end());//按字典序将各个字符串同一下标字母比较并排序
        string& a = strs.front();      //故第一个与最后一个字符串是差异最大的
        string& b = strs.back();       //它们的公共前缀即所求
        int i = 0;
        while (i < a.size() && i < b.size() && a[i] == b[i])
        {
            i++;
        }
        return a.substr(0, i);
    }
};
class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n ==0)return "";
        if (n == 1)return strs[0];
        string res;
        int m = strs[0].size();
        for (int i = 0; i < n; i++)
        {
            m = min(m, (int)strs[i].size());
            //min需要类型匹配,故要将size_t强转int.
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                if (strs[j][i] != strs[j + 1][i])return res;
            }
            res.push_back(strs[0][i]);
        }//第一层遍历每个字符串的同一列坐标,然后第二层遍历前后字符串在同一列坐标对应字符
        //的匹配情况,一有不对说明最大公共前缀无法更新,反之将该字符加入结果字符串.
        //将该二维字符串数组排布出来更加直观.
        return res;
    }
};