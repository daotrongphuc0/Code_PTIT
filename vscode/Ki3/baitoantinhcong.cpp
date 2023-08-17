#include "bits/stdc++.h"
using namespace std;

class NhanVien{
    private:
    string manv;
    string ten;
    int luongcb;
    int songaycong;
    string chucvu;
    public:
    NhanVien(){

    }
    int phucap(){
        if(chucvu =="GD"){
            return 250000;
        }
        else{
            if(chucvu =="PGD"){
                return 200000;
            }
            else{
                if(chucvu =="TP"){
                    return 180000;
                }
            }
        }
        return 150000;
    }

    int luong(){
        return luongcb*songaycong;
    }

    int thuong(){
        if(songaycong >= 25){
            return luong()*0.2;
        }
        else{
            if(songaycong>=22){
                return luong()*0.1;
            }
            else{
                return 0;
            }
        }
    }

    int thunhap(){
        return luong()+thuong()+phucap();
    }

    void nhap(){
        manv= "NV01" ;
        getline(cin , ten);
        //cin.ignore();
        cin >> luongcb>> songaycong>> chucvu;
    }

    void in(){
        cout<<manv<<" "<< ten<< " "<< luong()<< " "<<thuong()<<" "<<phucap()<<" "<<thunhap()<<endl;
    }

    int sosanh(NhanVien b){
        if(b.luong > this->luong) return 1;
        else{
            if(b.luong == this->luong) return 0;
            else return -1;
        }
    }
};
int main() {
	NhanVien ds[3];
    for (int i = 0; i < 3; i++)
    {
        ds[i].nhap();
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(ds[i].sosanh(ds[j])==-1){
                NhanVien tmp = ds[i];
                ds[i] = ds[j];
                ds[j] = tmp;
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        ds[i].in();
    }
    
    
    
}