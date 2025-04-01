#include <iostream>
using namespace std;

int main() {
    long long N;
    long long Answer = 1;
    cin >> N;
    for(int i=1;i<=N;i++)Answer *= i;
    cout << Answer << endl;
    return 0;
}