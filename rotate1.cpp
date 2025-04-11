#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int i,temp;
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<6;i++){
        temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
 
return 0;
}
