#include<iostream>
using namespace std;
int main(){
    int a[5];
   
    for(int i=0;i<5;i++){
    a[0]={10};
    a[1]={20};
    a[2]={30};
    a[3]={40};
    a[4]={50};
    cout<<a[i]<<" ";
    }
    cout<<endl;
    a[3]={0};

    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    return 0;
}