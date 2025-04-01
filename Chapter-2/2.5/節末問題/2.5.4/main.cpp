#include <iostream>
using namespace std;

bool isprime(int x){
    for(int i=2;i<x-1;i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    int N, Answer = 0;
    cin >> N;
    for(int i=2;i<N;i++){
        if(isprime(i) == true)cout << i << endl;
    }
    return 0;
}