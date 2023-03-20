#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        /*
         queue<int>odd;
        queue<int>even;
        for(auto it:nums){
            if(it<0){ 
                odd.push(it);


            }else{
                even.push(it);
            }
        }
        //nums.erase(nums.begin(),nums.end());
        nums.clear();
        //using clear increase run time, using new array saves run time but increase space 

        int n=odd.size();
        while(n--){
            nums.push_back(even.front());
            even.pop();
            nums.push_back(odd.front());
            odd.pop();
        }

        
        return nums;

        */


        //logic
        int pIndex=0;
        int nIndex=1;
        int n=nums.size();
        vector<int> ans(n,0);            //imp to mention size as we arent pushing

        for(auto it:nums){
            if(it>0){
                ans[pIndex]=it;
                pIndex += 2;



            }else{
                ans[nIndex]=it;
                nIndex += 2;

            }

        }
        return ans;

        




        
        
    }
};