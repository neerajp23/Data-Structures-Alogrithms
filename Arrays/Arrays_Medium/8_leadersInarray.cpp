#include<bits/stdc++.h>
using namespace std;
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int max=a[n-1];
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=max){
                ans.push_back(a[i]);
                max=a[i];
            }
            
            
            
            
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
int main(){
    return 0;
}