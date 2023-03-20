#include<bits/stdc++.h>
using namespace std;
//Sub array is contigious part of an array which maintain relative ordering
//Subsequence may or may not be contigious but maintain relative ordering
//arr[]={1,2,3,4,5,6}      2,3,6 is a subsequence but not subarray.  5,4 is not a subarray nor subsequence

int kadane(vector<int>& nums){
    int maxSum=INT_MIN;
    //maxSum=nums[0] will also work fine
    int runningSum=0;
    for(auto it:nums){
        runningSum += it;
        maxSum=max(maxSum,runningSum);

        if(runningSum<0){
            runningSum=0;
        }
    }
    return maxSum;

}
int main(){
    vector<int> arr={-2,-3,0,-1,10,9,-18,4,5,26};
    cout<<kadane(arr);


    return 0;
}