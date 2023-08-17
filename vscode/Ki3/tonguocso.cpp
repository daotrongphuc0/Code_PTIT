#include <bits/stdc++.h>
using namespace std;

long long tonguocso(long long n){
    long long tong =1+n;
    if(n<=0) return 0;
    if(n==1) return 1;
    
    long long i;
    for ( i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            if(i==sqrt(n)){
                tong+=i;
            }
            else{
                tong+=i;
                tong+=n/i;
            }
        }
    }
    // long long x =sqrt(n);
    // if(n%x==0) tong = tong -x;
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
