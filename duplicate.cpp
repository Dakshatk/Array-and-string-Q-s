#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[]= {2,3,2,4,3,5,4,5};
	int i,count,num;
	num=8;
	for(int i=0; i<num; i++) {
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<num; i++) {
	    count=0;
		for(int j=i; j<num; j++) {
			if(a[i]==a[j]){
			count++;
			}
		}
		if(count==2){
			a[i]=0;
		}
	}
	for(int i=0; i<num; i++) {
	    	cout<<a[i]<<" ";
	    }
	cout << endl;
	sort(a,a+num);
	cout << "Sorted array: ";
    for (int i = 0; i < num; i++) {
        cout << a[i] << " ";
    }
    
	return 0;
}