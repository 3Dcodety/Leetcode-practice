class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>graph(n);
        const int inf=0x3f3f3f3f;
        for(auto fl:flights)
        {
            graph[fl[0]].push_back({fl[1],fl[2]});
        }
        vector<vector<int>>dist(n,vector<int>(k+2,inf));
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>que;
        dist[src][0]=0;
        que.push({0,src,0});
        while(!que.empty())
        {
            auto x=que.top();
            que.pop();
            int cost=x[0];
            int dot=x[1];
            int used=x[2];
            if(dot==dst)return cost;
            if(cost>dist[dot][used])continue;
            if(used>k)continue;
            for(auto f:graph[dot])
            {
                int y=f.first;
                int cost1=f.second;
                if(cost+cost1<dist[y][used+1])
                {
                    dist[y][used+1]=cost+cost1;
                    que.push({cost+cost1,y,used+1});
                }
                
            }
        }
        return -1;
    }
};
