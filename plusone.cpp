#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>digits;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        digits.push_back(temp);
    }
      cout << "the elements in the vector: "; 
    digits.back()++;
    for (auto it = digits.begin(); it != digits.end(); it++)
       { 
        cout << * it << " ";
       }
    return 0;
}