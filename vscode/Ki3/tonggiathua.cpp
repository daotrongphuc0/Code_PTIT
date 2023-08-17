#include <bits/stdc++.h>
using namespace std;
int kt(long long n){
    if (n <= 1) return 0;
    for (long long  i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) return 0;
    }

    return 1;
}
long long tongchuso(int n){
    long long tong =0;
    while (n>0)
    {
        tong += n%10;
        n/=10;
    }
    return tong; 
}
int main(){
    long long a;
    cin >> a ;
    long long tong1 = tongchuso(a), tong2 =0;
    if(kt(a)==1) cout<<"NO"<<endl;
    else{
        for (long long  i = 2; i <= sqrt(a); i++)
        {
            if(kt(i)== 1){
                while (a%i==0)
                {
                    tong2 += tongchuso(i);
                    a/=i;
                }
                
            }
        }
        if(a!=1) tong2 += tongchuso(a);
        if(tong1 ==tong2) cout<< "YES" << endl;
        else cout<< "NO" <<endl;
    }
    
    return 0;
}
