// Last updated: 7/6/2025, 11:47:43 PM
class Solution {
public:
    long long int solve(int m , int n, vector<vector<int>>& w,vector<vector<long long int>>&dp,long long int ans){
        
        if(dp[m][n]!=-1){
            return dp[m][n];
        }
        if(m==w.size()-1 && n==w[0].size()-1){
            ans+= (m+1)*(n+1);
            dp[m][n]=ans;
             return ans;
        }
        else if(m==w.size()-1 && n!=w[0].size()-1){
             
            long long int cost;
            if(m==0 && n==0){
                cost = (m+1)*(n+1);
            }
            else{
                cost = (m+1)*(n+1)+w[m][n];
            }
            ans+=cost+solve(m, n+1, w, dp,ans);
            dp[m][n]=ans;
            return ans;
        }
        else if(m!=w.size()-1 && n==w[0].size()-1){
            long long int cost;
            if(m==0 && n==0){
                cost = (m+1)*(n+1);
            }
            else{
                cost = (m+1)*(n+1)+w[m][n];
            }
            ans+=cost+solve(m+1, n, w, dp,ans);
            dp[m][n]=ans;
            return ans;
        }
        else if(m<w.size()-1 && n<w[0].size()-1){
            long long int cost;
            if(m==0 && n==0){
                cost = (m+1)*(n+1);
            }
            else{
                cost = (m+1)*(n+1)+w[m][n];
            }
            long long int right = solve(m,n+1,w,dp,ans);
            long long int left = solve(m+1,n,w,dp,ans);
            ans += cost + min(right,left);
            dp[m][n]=ans;
            
        }
        return ans;
    }
    long long minCost(int m, int n, vector<vector<int>>& w) {
        
        long long int ans=0;
        vector<vector<long long int>>dp(m+1,vector<long long int>(n+1,-1));
        return solve(0,0,w, dp,ans);
        // return ans;
    }
};