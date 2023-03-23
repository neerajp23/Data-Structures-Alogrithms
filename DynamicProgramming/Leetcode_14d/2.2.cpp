#include<bits/stdc++.h>
using namespace std;
vector<int> dp(1500,-1);
class Solution {
public:
//still gives TLE,neetcode has different approach
int help(vector<int>&nums,int index){
    if(index>=nums.size()){
        return 0;
    }
    if(index==nums.size()-1){
        return nums[index];
    }


    if(dp[index]!=-1){
        return dp[index];
    }
    return nums[index]+min((help(nums,index+1)),help(nums,index+2));




}
    int minCostClimbingStairs(vector<int>& cost) {
        int a=help(cost,0);

         int b=help(cost,1);
         return min(a,b);

        
    
    }
};

int main(){
    return 0;
}