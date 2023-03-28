#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void makeRow(vector<vector<int>>& matrix,int i,int rows,int cols){
 for(int j=0;j<cols;j++){
     matrix[i][j]=0;
 }
}

void makeCols(vector<vector<int>>& matrix,int j,int rows,int cols){
 for(int i=0;i<rows;i++){
     matrix[i][j]=0;
 }
}
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> store;
       int rows=matrix.size();
        int cols=matrix[0].size();
        
       
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    store.insert({i,j});

                }
            }

        }
         for(auto it:store){
             makeRow(matrix,it.first,rows,cols);
             

         }
         for(auto it:store){
             makeCols(matrix,it.second,rows,cols);
         }


               //make note of brute force approach

               //-1 wala logic
               
         //you can optimise space using given martix instead of set
        


        
    }
};
int main(){
    return 0;
}