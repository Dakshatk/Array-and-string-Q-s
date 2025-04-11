#include<iostream>
using namespace std;
int main(){
    int a[]={2,0,3,0,5,6};
    int i,temp=0;
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   for(int j=1;j<=6;j++){ 
    for(int i=0;i<=6;i++){
        if(a[i]==0){
        temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        
    }
}
   
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
 
return 0;
}

