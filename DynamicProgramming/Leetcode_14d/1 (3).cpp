#include<bits/stdc++.h>
using namespace std;
vector<int>dp(46,-1);
class Solution {
public:
    int climbStairs(int n) {
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==1||n==0){
            return 1;
        }
        int left=climbStairs(n-2);
        int right=climbStairs(n-1);
        return dp[n]=right+left;
        
    }
};
int main(){
    return 0;
}