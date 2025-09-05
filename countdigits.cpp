#include<iostream>
using namespace std;
int main(){
    int N = 123451;
    int count=0;
    
    while(N!=0){
        N = N/10;
        count++;
    }
    
    cout<<count<<endl;
    return 0;
}