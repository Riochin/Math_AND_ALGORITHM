#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool flag = false;
    for(int i = 2;i+i <= N;i++){
        while(N % i == 0){
            if(flag == true) cout << " ";
            flag = true;
            N /= i;
            cout << i;
        }
    }

    if(N >= 2){
        if(flag == true) cout << " ";
        flag = true;
        cout << N ;
    }

    cout << endl;
    return 0;
}