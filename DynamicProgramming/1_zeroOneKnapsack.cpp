#include<bits/stdc++.h>
using namespace std;

int help(int val[],int wt[],int index,int w,int sum){        //recursive approach
        
        if(index==-1 ){
            return sum;
        }
        int left=help(val,wt,index-1,w,sum);
        int right;
        if(w>=wt[index])
        {
            right=help(val,wt,index-1,w-wt[index],sum+val[index]);
            
        }else{
                    right=0;
        }
        
        return max(left,right);
             
 }

 int helpSimpler(int val[],int wt[],int index,int w,int sum){                  //same as above,with simpliar syntax
        
        if(index==-1){
            return 0;
        }
        if(w>=wt[index]){
            return max(helpSimpler(val,wt,index-1,w,sum),helpSimpler(val,wt,index-1,w-wt[index],sum)+val[index]);

        }else{
            return helpSimpler(val,wt,index-1,w,sum);
        }
        
        //imp
        //even if w is small that wt[index], their is a case that further index something smaller than w might be available
        //need to keep in mind everytime you make a permutation
        
    }



int main(){
    return 0;
}