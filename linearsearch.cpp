#include<iostream>
using namespace std;
int main(){
    int x,j,count = 0;
    cout<<"Enter the element to be searched = ";
    cin>>x;
    int a[]={2,3,24,5,6,17,8,9};
    int n = sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++){
        if(a[i]==x){
            j = i;
            count++;
        }
    }
    if(count==1){
        cout<<"Element found at "<<j<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}