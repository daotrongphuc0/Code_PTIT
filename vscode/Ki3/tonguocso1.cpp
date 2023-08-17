#include <bits/stdc++.h>
using namespace std;

long long tonguocso(long long n){
    long long tong =0;
    if(n<=1) return 1;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            tong+=i;
        }
    }
    //tong+=n;
    return tong;
    
}
int main(){
    int t; cin >> t;
    while(t-->0){
        long long a;
        cin >> a ;
        cout<< tonguocso(a)<<endl;       
    }
    return 0;
}
