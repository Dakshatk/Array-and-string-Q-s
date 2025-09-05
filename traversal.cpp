#include<iostream>
using namespace std;
int main(){
    int b;
    int a[10] = {10,20,33,44,50,62,70,82,94,100};
    cin>>b;
    for(int i=0;i<10;i++){
        if(b==a[i]){
            cout<<"Element found at = "<<i<<endl;
        }
    }
    return 0;
}