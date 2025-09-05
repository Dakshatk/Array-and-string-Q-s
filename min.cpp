#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,mini=INT_MAX;
    int a[5]={10,20,65,50,70};
    
    for(i=0;i<5;i++){
        if(mini>a[i]){
            mini=a[i];
        }
    }
    cout<<mini;
    return 0;
}