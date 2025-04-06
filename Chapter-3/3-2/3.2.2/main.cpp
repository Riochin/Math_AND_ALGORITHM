#include <iostream>
using namespace std;

long long GCD(long long A, long long B){
    while(A>= 1 && B >= 1){
        if(A<B) B = B%A;
        else A = A%B;
    }
    if(A >= 1) return A;
    return B;
}

int main() {
    long long N;
    long long A[100009];
    cin >> N;

    for(int i=0;i<N;i++)cin >> A[i];

    long long R = GCD(A[1],A[2]);
    for(int i=3;i<=N;i++){
        R = GCD(R,A[i]);
    }

    cout << R << endl;
    return 0;
}