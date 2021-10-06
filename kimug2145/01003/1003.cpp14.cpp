#include <iostream>

using namespace std;

int dp[50][2];

int main(){
    int tc;
    cin >> tc;
    
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;
    
    for(int i = 2; i < 50; i++){
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }
    for(int i = 0; i < tc; i++){
        int x;
        cin >> x;
        cout << dp[x][0] << " " << dp[x][1] << "\n";
    }
    
    return 0;
}