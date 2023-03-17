#include<bits/stdc++.h>
using namespace std;
//using hash maps is best approach to keep count and store key value pairs for bi-directional accessing
void PrintCount(vector<int>&arr){
    unordered_map <int,int> mp;
    //map<int,int>x  for ordered map
    //ordered map has O(ln) complexity for elementary operations,unordered map has O(1) complexity
    //but O(N) in worst case depending on input case
    int ans=0;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        ans=max(ans,mp[arr[i]]);
    }
    //map[key] whose value is not defined is by default taken as 0, and this point is helpful while solving questions
    cout<<ans;


}
int main(){
    
    vector<int> arr={1,2,3,4,5,6,6,6,6,2,1};
    PrintCount(arr);
    return 0;
    

}