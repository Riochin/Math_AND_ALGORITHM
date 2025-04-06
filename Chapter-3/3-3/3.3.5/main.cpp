#include <iostream>
using namespace std;

int main(){
    long long N,A[500000],r=0,y=0,b=0;
    cin >> N;

    for(int i=0;i<N;i++) {
        cin >> A[i];
        if(A[i] == 1)r++;
        if(A[i] == 2)y++;
        if(A[i] == 3)b++;
    }

    long long R = (r*(r-1)/2)+(y*(y-1)/2)+(b*(b-1)/2);
    cout << R << endl;
    return 0;
}