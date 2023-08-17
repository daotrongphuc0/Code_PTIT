#include <iostream>
#include <iomanip>
using namespace std;
struct ThiSinh{
    string ten;
    string ns;
    float diem1;
    float diem2;
    float diem3;
};
void nhap(ThiSinh &a){
    getline(cin,a.ten);
    cin >> a.ns>> a.diem1>>a.diem2>>a.diem3;
}
void in(ThiSinh a){
    cout<< a.ten<< " " << a.ns<<" "<<fixed<< setprecision(1)<< a.diem1+a.diem2+a.diem3<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}