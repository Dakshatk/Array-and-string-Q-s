#include<iostream>
#include<algorithm>
using namespace std;
void findTopscores(int scores[], int size, int top[], int &topCount) {
    topCount = 0;
    top[topCount++] = scores[0];
    for (int i = 1; i < size && topCount < 5; i++) {
        if (scores[i] != scores[i - 1]) {
            top[topCount++] = scores[i];
        }
    }
}
int main() {
    int scores[12];
    int size = 12;
    int top[5], topCount;
    cout << "Enter the scores from 20 to 120" << endl;
    for (int i = 0; i < size; i++) {
        cin >> scores[i];
    }
    sort(scores, scores + size, greater<int>());
    cout << "\nSorted scores:\n";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    findTopscores(scores, size, top, topCount);
    bool tie = false;
    cout << "\nThese players have rank 1 (tie):\n";
    for (int i = 0; i < topCount; i++) {
        if (top[i] == top[0]) {
            cout << top[i] << " ";
            tie = true;
        } 
        else {
            break;
        }
    }
    if (!tie) {
        cout << "No tie for rank 1.\n";
    } else {
        cout << endl;
    }
    cout << "\nTop " << topCount << " unique scores with ranks:\n";
    for (int i = 0; i < topCount; i++) {
        cout << "Rank " << (i + 1) << ": " << top[i] << endl;
    }
    return 0;
}