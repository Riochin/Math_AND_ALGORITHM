#include <iostream>
using namespace std;

int main() {
    int n;
    int r;

    cin >> n;
    cin >> r;

    long long Fact_n = 1;
    long long Fact_r = 1;
    long long Fact_nr = 1;

    for(int i=1;i<=n;i++)Fact_n *= i;
    for(int i=1;i<=r;i++)Fact_r *= i;
    for(int i=1;i<=n-r;i++)Fact_nr *= i;

    cout << Fact_n/(Fact_nr * Fact_r) << endl;
    return 0;
}

