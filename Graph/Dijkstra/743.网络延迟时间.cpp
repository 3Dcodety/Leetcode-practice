class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        const int inf=0x3f3f3f3f;
        int arc[n][n];
        int dist[n];
        int vis[n];
        memset(vis,0,sizeof(vis));
        memset(dist,0x3f,sizeof(dist));
        memset(arc,0x3f,sizeof(arc));
        for(int i=0;i<times.size();i++)
        {
            int u=times[i][0]-1;
            int v=times[i][1]-1;
            int w=times[i][2];
            arc[u][v]=w;
        }
        dist[k-1]=0;
        for(int i=0;i<n;i++)
        {
            int mindist=inf;
            int s=-1;
            for(int j=0;j<n;j++)
            {
                if(!vis[j]&&dist[j]<mindist)
                {
                    mindist=dist[j];
                    s=j;
                }
            }
            if(s==-1)return -1;
            vis[s]=1;
            for(int z=0;z<n;z++)
            {
                if(!vis[z]&&arc[s][z]!=inf)
                {
                    dist[z]=min(dist[z],dist[s]+arc[s][z]);
                }
            }
        }
        return *max_element(dist,dist+n);
    }
};
