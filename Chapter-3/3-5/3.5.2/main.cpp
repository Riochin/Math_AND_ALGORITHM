#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N = 1000000;
    int M = 0;

    for(int i=0;i<=N;i++){
        double px = 6.0 * rand() / (double)RAND_MAX;
        double py = 9.0 * rand() / (double)RAND_MAX;

        //半径3の円に含まれるか
        double dist_33 = sqrt((px-3.0)*(px-3.0)+(py-3.0)*(py-3.0));

        //半径4の円に含まれるか
        double dist_37 = sqrt((px-3.0)*(px-3.0)+(py-7.0)*(py-7.0));

        //条件分岐
        if(dist_33 <= 3.0 || dist_37 <= 2.0) M += 1;

    }

    //N海中何回表に入ったかを出力
    cout << M << endl;
    return 0;
}