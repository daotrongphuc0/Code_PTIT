#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    double tong =0;
    for (int i = 1; i <= t; i++)
    {
        tong  += (double)1/i;
    }
    printf("%0.4f",tong);
    
    
    return 0;
}
