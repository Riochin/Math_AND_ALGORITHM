#include <iostream>
using namespace std;

int main(){
    // 宣言と値の取得
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++) cin >> A[i];

    // バブルソート
    for(int i=0;i<N-1;i++){ // N-1まで
        for(int j=0;j<N-1-i;j++){
            if(A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    // 出力
    for(int i=0;i<N;i++) cout << A[i] << endl;
}