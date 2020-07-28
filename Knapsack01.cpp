#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val[4] = {1, 4, 5, 7};
    int wt[4] = {1, 3, 4, 5};
    int allowed_wt = 7;
    int dp[4][8] = {0};
    
    for(int i = 1; i<4; i++){
        for(int j=1; j<allowed_wt+1; j++){
            if(j - wt[i-1] >= 0){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i-1]] + val[i-1]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
        }
    }
    
    
    for(int i =0; i<4; i++){
        for(int j=0; j<=7; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
