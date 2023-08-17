#include <bits/stdc++.h>
using namespace std;
struct thuphixeoto
{
    string bienso;
    string loaixe;
    string chongoi;
    string type;
    string date;
    int gia;
};

int main(){
    int t; cin >>t;
    cin.ignore();
    thuphixeoto kq[t+5];
    for (int i = 0; i < t; i++)
    {
        string s; getline(cin, s);   
        
        istringstream tk(s); vector<string> v;
        while(tk >> s) v.push_back(s);
        thuphixeoto tmp;
        tmp.bienso=v.at(0);
        tmp.loaixe=v.at(1);
        tmp.chongoi=v.at(2);
        tmp.type=v.at(3);
        tmp.date=v.at(4);
        if(tmp.loaixe=="Xe_con"){
            if(tmp.chongoi=="5") tmp.gia=10000;
            else tmp.gia=15000;
        }
        else{
            if(tmp.loaixe=="Xe_khach"){
                if(tmp.chongoi=="29") tmp.gia=50000;
                else tmp.gia=70000;
            }   
            else tmp.gia=20000;    
        }
        kq[i]=tmp;
    }
    string date ="";
    int gia =0;
    for (int i = 0; i < t; i++)
    {

        if(kq[i].type=="IN"){
            if(kq[i].date == date) gia+= kq[i].gia;
            else{
                if(gia>0)cout<< date<< ": " << gia<<endl;
                date = kq[i].date;
                gia = kq[i].gia;
            }
        }
    }
    if(gia>0)cout<< date<< ": " << gia<<endl;
    return 0;
}