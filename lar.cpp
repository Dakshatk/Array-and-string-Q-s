#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,maxi = 0;
    int a[5] = {10,20,65,50,70};
    for(i = 0;i<5;i++){
       if(maxi<a[i]){
        maxi = a[i];
       }
    }
    cout<<maxi;
    return 0;
}