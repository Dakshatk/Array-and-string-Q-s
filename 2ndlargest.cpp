#include<iostream>
using namespace std;

int main() {
    int a[5] = {1,48,24,53,48};
    int largest = a[0];
    int i;
    int sl = -1;

    for (i = 1; i < 5; i++) {
        if (a[i] > largest) {
            sl = largest;
            largest = a[i];
        } else if (a[i] > sl && a[i]!=largest) {
            sl = a[i];
        }
        cout << i << "-iteration" << endl;
        cout << largest << " is Largest num" << endl;
        cout << sl << " is Second largest" << endl;
    }

    cout << endl;
    cout << largest << " is the largest number" << endl;
    cout << sl << " is the second largest" << endl;

    return 0;
}
