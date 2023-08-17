#include "bits/stdc++.h"
using namespace std;


class SinhVien {
    private:
    string masv;
    string ten;
    string lop;
    string ns[5];
    float gpa;
    public:
    SinhVien(){

    }
    void nhap(){
        string ns1;
        masv ="B20DCCN001";
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ns1);
        int dem=0;
        for (int i = 0; i < ns1.length(); i++)
        {
            if(ns1[i] =='/'){
                dem++;
                continue;
            }
            ns[dem] += ns1[i];
            
        }
        for (int i = 0; i < 3; i++)
        {
            if(ns[i].length()==1){
                ns[i]= "0"+ns[i];
            }    
        }
        cin >>gpa; 
    }
    void xuat(){
        cout << masv<<" " <<ten<<" "<<lop<< " "<<ns[0]<<'/'<<ns[1]<<'/'<<ns[2]<<" "<< fixed << setprecision(2)<<gpa<<endl;
        //cout << masv<<" " <<ten<<" "<<lop<< " "<< ns[0]<<'/'<<ns[1]<<'/'<<ns[2]<<" "<<gpa<<endl;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    
    return 0;
}