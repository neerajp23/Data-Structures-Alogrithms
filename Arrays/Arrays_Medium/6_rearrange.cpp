#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        // int count=0;
        // unordered_map<int,int> mp;
        // int maxi=0;
        // int ans=0;
        // for(auto it:nums){
        //     mp[it]++;
        //     maxi=max(mp[it],maxi);
        //     if(mp[it]>=maxi){
        //         ans=it;
        //     }
            

        // }
        // auto it=mp.find(maxi);
        
        // return ans;                                        this gave best space

        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        int size=nums.size()-1;
        for(auto it:mp){
            if(it.second>size/2){
                return it.first;                                //this gave best time but at cost of space
            }
        }
        return -1;      


        

        
    }
int main(){
    return 0;
    //we also have a standard algo for doing this questins
}