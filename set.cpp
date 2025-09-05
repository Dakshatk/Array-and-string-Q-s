#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    set<int>chintu;
    for(int i = 0;i<5;i++){
        chintu.insert(arr[i]);
    }
    for (auto it = chintu.begin(); it != chintu.end(); it++) {
        cout << *it << " ";
      }

    return 0;
}