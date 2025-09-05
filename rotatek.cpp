#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int i , k = 0 , temp=0;
    cout<<"Enter the k = ";
    cin>>k;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   for(int j = 1; j<=k ; j++){ 
    for(int i = 0; i<=n ; i++){
        temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        
    }
    
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
 
return 0;
}

