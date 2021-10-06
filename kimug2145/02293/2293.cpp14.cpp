#include <iostream>
using namespace std;

int N,K;
int m[101];
int dp[10002];

int main(){
    cin>>N>>K;
    for(int i=0;i<N;i++) cin>>m[i];
    dp[0] = 1;
    for(int i=0;i<N;i++)
        for(int j=m[i];j<=K;j++)
            dp[j] += dp[j-m[i]]; 
    cout<<dp[K];
}