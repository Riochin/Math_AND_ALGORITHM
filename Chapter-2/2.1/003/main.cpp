#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int total=0;

    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        total += a;
    }

    cout << total << endl;
}