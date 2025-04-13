#include <iostream>
using namespace std;

int N, A[200009], C[200009];

void MergeSort(int l,int r){
    if(r-l == 1)return;
    
    int m = (l+r)/2;
    MergeSort(l,m);
    MergeSort(m,r);

    // 以下マージ
    int c1=l, c2=m, cnt=0;
    while(c1!=m || c2!=r){
        if(c1==m){
            C[cnt] = A[c2]; c2++;
        }else if(c2==r){
            C[cnt] = A[c1]; c1++;
        } else {
            //
            if(A[c1]<=A[c2]){
                C[cnt] = A[c1]; c1++;
            } else{
                C[cnt] = A[c2]; c2++;
            } 
        }

        cnt++;
    }

    //合併したCをAに移す
    for(int i=0;i<cnt;i++)A[l+i] = C[i];
}

int main(){
    cin >> N;
    for(int i=1;i<=N;i++)cin >> A[i];

    MergeSort(1,N+1);
    for(int i=1;i<=N;i++)cout << A[i] << endl;
    return 0;
}