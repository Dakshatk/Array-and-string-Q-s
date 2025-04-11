#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int i,d=0,temp=0;
    cout<<"Enter the d = ";
    cin>>d;
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   for(int j=1;j<=d;j++){ 
    for(int i=0;i<=6;i++){
        temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        
    }
    temp = 0;
   
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
 
return 0;
}

