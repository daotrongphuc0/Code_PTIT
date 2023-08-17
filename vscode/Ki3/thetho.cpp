#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >>t;
    cin.ignore();
    //int sobaitho =0;
    vector<int> kq;
    int thethocu=-1;
    for (int i = 0; i < t; i++)
    {
        string s; getline(cin, s);          
        istringstream tk(s); vector<string> v;
        while(tk >> s) v.push_back(s);
        if(v.size()==7){
            //sobaitho++;
            kq.push_back(2);
            getline(cin, s);
            getline(cin, s);
            getline(cin, s);
            t-=3;
            thethocu=-1;
        }
        else{
            if(thethocu==-1){
                thethocu=1;
                //sobaitho++;
                kq.push_back(1);
                getline(cin, s);
                t-=1;
            }
            else{
                getline(cin, s);
                t-=1;
            }
        }
    }
    cout<<kq.size()<<endl;
    for (int i = 0; i < kq.size(); i++)
    {
        cout<< kq.at(i) <<endl;
    }
    
    
    
    return 0;
}