#include<bits/stdc++.h>
using namespace std;
vector<int>dp(31,-1);             //dint work when i used array
class Solution {
public:


    int fib(int n) {
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=fib(n-1)+fib(n-2);

       //stack overflow return fib(n-1)+fib(n-2);

       //golden ration
       
       
       

        
        
    }
};
int main(){
    return 0;
}