#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>unique;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        unique.push_back(temp);
    }
      cout << "the elements in the vector: "; 
    set<int>u;
    for(auto j:unique){
        u.insert(j);
    }
    for (auto it = u.begin(); it != u.end(); it++)
       { 
        cout << * it << " ";
       }
    return 0;
}