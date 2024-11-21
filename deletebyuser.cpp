#include<iostream>
using namespace std;
int main(){
    int a[5];
    int i;
    for(int i=0;i<5;i++){
        a[i]=i+10;
    cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the index of the element you want to delete = ";
    cin>>i;
    a[i]={0};

    for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
    }
    return 0;
}