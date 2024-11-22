#include<iostream>
using namespace std;
int main(){
    int a[5]={10,20,65,50,70};
    int i,maxi=a[0];
   
    for(i=1;i<5;i++){
        if(a[i]<a[i+1]){
            maxi=a[i+1];
        }
        else{
        
            maxi=max(maxi,a[i]);
        }
    }
        cout<<endl;
        cout<<maxi<<" is largest number";

        return 0;
    }