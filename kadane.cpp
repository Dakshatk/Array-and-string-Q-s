#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int arr[n];
    
    cout<<"Enter 10 scores"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int maxi = 0;
    int sum = 0;
    for (int i=0;i<n;i++) {
        sum = sum + arr[i];
        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
        maxi = max(sum,maxi);
    }
    // -1 -2 -3 4 -1 -2 1 5 0 -3
    cout<<maxi<<endl;
    if(maxi<0){
        maxi=2*maxi;
    }
    cout<<maxi<<endl;
    return 0;
}