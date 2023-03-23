#include<bits/stdc++.h>
using namespace std;
vector<int>dp(31,-1);             //dint work when i used array
vector<int>dp(38,-1);
class Solution {
public:

//T0 =0 implies T(0)=0
    int tribonacci(int n) {
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==0 ||n==1){
            return n;
        }else if(n==2){
            return 1;
        }
        return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);


        
    }
};
int main(){
    return 0;
}