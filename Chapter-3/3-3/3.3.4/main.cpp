 #include <iostream>
 using namespace std;

 int main(){
    long long a=0,b=0,c=0,d=0;
    long long N;
    cin >> N;
    long long A[N];
    

    for(int i=0;i<N;i++){
        cin >> A[i];
        if(A[i] == 100)a++;
        if(A[i] == 200)b++;
        if(A[i] == 300)c++;
        if(A[i] == 400)d++;
    }

    cout << a*d + b*c << endl;
    return 0;
 }