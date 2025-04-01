#include <iostream>
using namespace std;

int main() {
    int N;
    int total = 0;
    cin >> N;

    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        total += a;
    }

    cout << total%100 << endl;
}