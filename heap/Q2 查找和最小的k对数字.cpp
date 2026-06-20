//优解
class Solution1 {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<vector<int>>res;
        using headnode=tuple<int,int,int>;
        priority_queue<headnode,vector<headnode>,greater<headnode>>q;
        for(int i=0;i<min(n1,k);i++)
        {
            q.emplace(nums1[i]+nums2[0],i,0);
        }
        while(k-->0&&!q.empty())
        {
            auto [sum,i,j]=q.top();
            q.pop();
            res.push_back({nums1[i],nums2[j]});
            if(j+1<n2)
            {
                q.emplace(nums1[i]+nums2[j+1],i,j+1);
            }
        }
        return res;
    }
};
//`push` 与 `emplace` 的核心区别在于：**`push` 负责“拷贝或移动”现成的对象，而 `emplace` 负责在容器内部“直接构造”对象。
** 当使用 `push` 时，需要先在外部创建一个完整的对象（或临时对象），容器再将其复制或移动到内部，这会带来额外的开销；
而 `emplace` 则是利用 C++11 的完美转发机制，直接接受**构造函数所需的参数**，在容器管理的内存空间中“就地”拼装对象，
从而省去了中间的拷贝和移动步骤。因此，在需要通过传递多参数来组合成复合类型（如 `pair`、`tuple` 或自定义结构体）的
场景下，使用 `emplace` 往往比 `push` 更加高效且代码更加简洁。

//自定义结构体
    class Solution2 {
private:
 struct node
 {
    int sum,i,j;
    node(int s,int i,int j):sum(s),i(i),j(j){}
    bool operator >(const node& other)
    const {
                return sum>other.sum;
          }
 };
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<vector<int>>res;
        priority_queue<node,vector<node>,greater<node>>q;
        for(int i=0;i<min(n1,k);i++)
        {
            q.emplace(nums1[i]+nums2[0],i,0);
        }
        while(k-->0&&!q.empty())
        {
            node x=q.top();
            int i=x.i;
            int j=x.j;
            //auto [sum,i,j]=q.top();用auto一行搞定
            res.push_back({nums1[i],nums2[j]});
            q.pop();
            if(j+1<n2)
            {
                q.emplace(nums1[i]+nums2[j+1],i,j+1);
            }
        }
        return res;
    }
};


//内存超限
class Solution3 {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1=nums1.size();
        int n2=nums2.size();
        using headnode=tuple<int,int,int>;
        vector<vector<int>>res;
        priority_queue<headnode,vector<headnode>,greater<headnode>>q;
        vector<vector<bool>>vis(n1,vector<bool>(n2,false));
        q.emplace(nums1[0]+nums2[0],0,0);
        vis[0][0]=true;
        while(k-->0&&!q.empty())
        {
                auto[sum,i,j]=q.top();
                q.pop();
                res.push_back({nums1[i],nums2[j]});
                if(i+1<n1&&!vis[i+1][j])
                {
                    vis[i+1][j]=true;
                    q.emplace(nums1[i+1]+nums2[j],i+1,j);
                }
                if(j+1<n2&&!vis[i][j+1])
                {
                    vis[i][j+1]=true;
                    q.emplace(nums1[i]+nums2[j+1],i,j+1);
                }
        }
        return res;
    }
};
