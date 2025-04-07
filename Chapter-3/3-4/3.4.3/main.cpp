#include <iostream>
using namespace std;

int main(){
    long long N;
    double A[200000],B[200000],total=0;

    cin >> N;

    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];

    for(int i=0;i<N;i++){
       total += A[i]/3 + B[i]*2/3;
    }

    cout << total << endl;
    return 0;
}