#define f first
#define s second
class Solution {
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    
public:
    int maxDistance(vector<vector<int>>& grid) {
        priority_queue< pair<int,pair<int,int>>, vector<pair<int,pair<int,int>> >, greater<pair<int,pair<int,int> > > > pq;
        int n = grid.size(), m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    pq.push({0,{i,j}});
                }
            }
        }
        int ans = INT_MIN, x, y, dist, xx, yy;
        while(!pq.empty())
        {
            auto tmp = pq.top(); pq.pop();
            x = tmp.s.f; y = tmp.s.s; dist = tmp.f;
            for(int k=0;k<4;k++)
            {
                xx = x+dx[k];
                yy = y+dy[k];
                if(xx>=0 && xx<n && yy>=0 && yy<m && grid[xx][yy]==0)
                {
                    pq.push({dist+1,{xx,yy}});
                    grid[xx][yy] = 1+dist;
                    ans = max(dist+1,ans);
                }
            }
        }
        if(ans == INT_MIN)return -1;
            return ans;
    }
    
};