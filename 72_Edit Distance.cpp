/*
 Problem number =72
 problem name = Edit Break
 Difficulty =  Medium
 
 Hope, given following solution would be helpful for you .
 			HAPPY CODING !
*/

class Solution {
public:
   
    
    int minDistance(string a, string b) {
       int m = a.length() , n=b.length();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++)
            dp[0][i] =i;
        for(int i=1;i<=m;i++)
            dp[i][0] = i;
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1] == b[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j] = 1+min(dp[i][j-1] , min(dp[i-1][j] , dp[i-1][j-1]));
            }
        }
        return dp[m][n];
    }
};
