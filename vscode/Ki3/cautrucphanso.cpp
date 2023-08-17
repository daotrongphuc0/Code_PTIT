#include "bits/stdc++.h"
using namespace std;

struct PhanSo{

    long long tu,mau;

};

void nhap(PhanSo &a){
    cin >> a.tu>>a.mau;
}
int ucln(long long a, long long b){
    
    while (b!=0)
    {
        long long x=a%b;
        a=b;
        b=x;
    }
    return a;
}
void rutgon(PhanSo &p){
    if(p.mau==0) return;
    long long x =ucln(p.tu, p.mau);
    long long x =__gcd(p.tu,p.mau);
    p.tu/=x;
    p.mau/=x;
}
void in(PhanSo p){

    cout<< p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}