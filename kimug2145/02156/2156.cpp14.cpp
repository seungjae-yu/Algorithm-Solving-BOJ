#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int N,inp[10002],dp[10002][3];
#define INF 987654321

int func(int n, int state){
    if(n == N) return 0;
    int& ret = dp[n][state];
    if(ret != -1) return ret;
    ret = -INF;
    
    if(state ==2)
        ret = max(ret , func(n+1,0));
    else{
        ret = max(ret , func(n+1,state+1)+inp[n+1]);
        ret = max(ret , func(n+1,0));
    }    
    return ret;
}

int main(){
    scanf("%d",&N);
    for(int i=1;i<=N;i++) scanf("%d",&inp[i]);
    memset(dp,-1,sizeof(dp));
    printf("%d",func(0,0));    
}