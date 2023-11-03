#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
 
using namespace std;
 
const int MAX = 1000000007;
int n, m;
int dp[1234][1234];
int cost[2][1234];
 
int solve(int a, int b) // a <= b
{
    if(a < 0) return 0;
    if(b < 0) return MAX;
 
    int &ret = dp[a][b];
    if(ret != -1) return ret;
    ret = MAX;
 
    ret = min(ret, abs(cost[0][a] - cost[1][b]) + solve(a-1,b-1));
    ret = min(ret, solve(a, b-1));
 
    return ret;
}
 
int main()
{
    memset(dp, -1, sizeof dp);
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) scanf("%d", &cost[0][i]);
    for(int i=0;i<m;i++) scanf("%d", &cost[1][i]);
 
    sort(cost[0], cost[0]+n);
    sort(cost[1], cost[1]+m);
 
    if(m < n) {
        swap(n, m);
        swap(cost[0], cost[1]);
    }
    printf("%d\n", solve(n-1,m-1));
 
    return 0;
}