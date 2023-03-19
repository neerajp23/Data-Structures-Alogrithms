#include<bits/stdc++.h>
using namespace std;
int static dp[1001][1001]={-1};

int help(vector<int> val,vector<int> wt,int index,int sum,int runningWeight){
    if(index==-1){
        return 0;
    }
    if(dp[index][runningWeight]!=-1){
        return dp[index][runningWeight];
    }
    int left=help(val,wt,index-1,sum,runningWeight);
    int right;
    if(runningWeight>=wt[index]){
        right=help(val,wt,index-1,sum+val[index],runningWeight-wt[index]);

    }else{
        right=0;
    }
    return dp[index][runningWeight]=max(left,right);

    
}

int main(){
    //store current value
    cout<<help({1,2,3},{4,5,1},2,0,4);

    return 0;
}