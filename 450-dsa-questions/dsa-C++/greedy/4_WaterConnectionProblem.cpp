    #include<bits/stdc++.h>
    using namespace std;
    
    void dfs( int node , vector<pair<int,int>> g[], int &mw, int &end, int vis[]){
        vis[node] = 1;
        for( auto e : g[node]){
            if( vis[e.first] == 0 ){
                mw = min(mw, e.second);
                end = e.first;
                dfs( e.first , g , mw , end, vis );
            }
        }
    }
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        int vis[n+1];
        vector<vector<int>> ans ;
        
        memset( vis , 0 , sizeof(vis));
        vector<int> in( n+1, 0);
        vector<int> out( n+1 , 0 );
        
        vector<pair<int,int>> g[n+1];
        for(int i = 0 ; i<p ; i++ ){
            out[a[i]] = 1;
            in[b[i]] = 1;
            g[a[i]].push_back({b[i],d[i]});
        }
        
        for( int i = 1 ; i<=n ; i++ ){
            if( in[i] == 0 && out[i] == 1 && vis[i] == 0 ){
                int s = i;
                int e ;
                int mw = INT_MAX;
                dfs( i, g, mw, e , vis );
                ans.push_back({s,e,mw});
            }
        }
        return ans;
        
    }