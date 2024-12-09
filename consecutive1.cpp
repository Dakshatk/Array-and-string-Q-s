#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,1,1,1,1,0,1,0,1,1,1,1};
    int i,j,n = sizeof(a)/sizeof(int);
    int count = 0;
    int largest=0;
        
        for(int i=0;i<n;i++){
            
            if(a[i]==0){
                count=0;
            }
 
            else{
                count++;
            }
            largest=max(largest,count);
        }
        cout<<largest;
    return 0;
}