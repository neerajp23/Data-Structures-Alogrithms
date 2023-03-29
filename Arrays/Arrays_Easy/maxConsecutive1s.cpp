#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int count=0;
        for(auto it:nums){
            if(it==1){
                count++;

            }
            else{
                ans=max(ans,count);
                count=0;
            }


        }
        return ans=max(ans,count);
        
    }
    
};
int main(){
    return 0;
}