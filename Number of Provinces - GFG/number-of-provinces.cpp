//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    void dfs(vector<vector<int>> adj, int node, vector<int> &vis, int V){
        vis[node]=1;
        for(int i=0; i<V; i++){
            // cout<<i+1<<" "<<node<<endl;
            if(adj[node-1][i] && i+1!=node && !vis[i+1]){
                dfs(adj, i+1, vis, V);
            }
        }
        // for(int i=0; i<V+1; i++){
        //     cout<<vis[i]<<" ";
        // }
        // cout<<endl;
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int ans=0;
        vector<int> vis(V+1);
        int start=1;
        
        for(int i=1; i<=V; i++){
            if(!vis[i]){
                ans+=1;
                dfs(adj, i, vis, V);
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends