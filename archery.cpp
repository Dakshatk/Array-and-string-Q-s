#include<iostream>
#include<algorithm>
using namespace std;

void findTopscores(int scores[],int size,int top[]){
    int count = 0;
    top[0]=scores[0];
    count = 1;
    for(int i = 0;i<size-1;i++){
        if(scores[i]!=scores[i+1]){
            top[count] = scores[i];
            count++;
        }   
    }
}
//22 33 44 55 66 99 99 78 56 110 113 119
int main(){
    int scores[12];
    int size = 12;
    int top[5];
    cout<<"Enter the scores from 20 to 120"<<endl;
    for(int i = 0;i<size-1;i++){
        cin>>scores[i];
        if(scores[i]==scores[i+1]){
            scores[i]=0;
        }
    }
    sort(scores,scores+size,greater<int>());
    for(int i=0;i<size-1;i++){
        cout<<scores[i]<<" ";
    }
    cout<<endl;
    findTopscores(scores,size,top);
    if (top[0] == top[1] || top[1] == top[2] || top[2] == top[3] || top[3] == top[4]) {
        cout << "These players have rank 1 (tie):" << endl;
        for (int i = 0; i < 4; i++) {
            if (top[i] == top[i + 1]) {
                cout << top[i] << " ";
            }
        }
        cout << endl;
    }
    for(int i=0;i<5;i++){
        cout<<top[i]<<" ";
    }
    return 0;
}