#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //i can use array but i want to initialize 2d matrix
        //learn it
        int m=matrix.size(),n=matrix[0].size();
        int ans[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[j][n-i-1]=matrix[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[i][j];
            }
        }


        //learn optimised 
        
        

        
        

        
    }
};
int main(){
    return 0;
}