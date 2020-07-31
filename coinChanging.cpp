#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coin[4] = {1, 5, 6, 8};
    int val = 11;
    int dp[4][12] = {0};
    for(int i=1;i<12;i++){
        dp[0][i] = i/coin[0];
    }
    
    for(int i = 1; i<4; i++){
        for(int j=1; j<=val; j++){
            if(j >= coin[i]){
                    dp[i][j] = min(dp[i-1][j], 1+dp[i][j-coin[i]]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
        }
    }
    
    
    
    for(int i =0; i<4; i++){
        for(int j=0; j<=val; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[3][11];
    
    
}
