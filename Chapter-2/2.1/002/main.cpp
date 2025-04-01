#include <iostream>
using namespace std;


int main() {
    int total = 0;
    for(int i=0; i<3; i++){
        int input;
        cin >> input;
        total += input;
    }

    cout << total << endl;
    return 0;
}
