#include <iostream>
#include <iomanip>
using namespace std;
int r =0;
struct NhanVien{
    int manv ;
    string ten;
    string gt   ;
    string ns;
    string diachi;
    string masothue;
    string ngaykihd;

};
void nhap(NhanVien &a){
    if(r==0) cin.ignore();
    a.manv =r+1;
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.diachi);
    getline(cin,a.masothue);
    getline(cin,a.ngaykihd);
    r++;
}
void inds(NhanVien a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<< std::setfill('0') << std::setw(5) << a[i].manv;
        cout<< " " << a[i].ten<<" "<< a[i].gt<< " "<< a[i].ns<<" "<<a[i].diachi<<" "<<a[i].masothue<<" "<<a[i].ngaykihd<<endl;
    }
    
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);

    return 0;
}