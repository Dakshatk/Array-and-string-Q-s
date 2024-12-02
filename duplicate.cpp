#include<iostream>
using namespace std;
int main() {
	int a[]= {2,3,2,4,3};
	int i,count;
	for(int i=0; i<5; i++) {
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<5; i++) {
	    count=0;
		for(int j=i; j<5; j++) {
			if(a[i]==a[j]){
			count++;
			}
		}
		if(count==2){
             cout<<a[i]<<" ";
	   }
	}
	return 0;
}