#include <iostream>
using namespace std;

long long GCD(long long A, long long B){
    while(A >= 1 && B >= 1){
        if(A<B) B = B%A;
        else A = A%B;
    }

    if(A>=1) return A;
    return B;
}

long long LCM(long long A,long long B){
    return (A/GCD(A,B)) * B;
}

int main(){
    long long N;
    long long A[100009];

    cin >> N;
    for(int i=1;i<=N;i++)cin >> A[i];

    long long R =LCM(A[1],A[2]);
    // cout << R << endl;
    for(int i=3;i<=N;i++){ //Nは<=で！
        R = LCM(R,A[i]);
        // cout << A[i] << endl;
    }

    cout << R << endl;
    return 0;
    
}