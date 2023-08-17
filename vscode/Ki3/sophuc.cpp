#include "bits/stdc++.h"
using namespace std;

struct SoPhuc
{
    int thuc;
    int ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
    SoPhuc c;
    c.thuc = a.thuc+b.thuc;
    c.ao = a.ao + b.ao;
    SoPhuc kq ;
    kq.thuc = c.thuc*c.thuc - c.ao*c.ao;
    kq.ao = 2*c.ao*c.thuc;
    return kq;
}

void hien_thi(SoPhuc c){
    cout << c.thuc<< " + "<< c.ao<< "i"<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}