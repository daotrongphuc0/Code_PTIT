#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >>t;
    cin.ignore();
    while (t--)
    {
        string s; getline(cin, s);          
        istringstream tk(s); vector<string> v;
        while(tk >> s) v.push_back(s);
        string kq ="";
        for (int i = 0; i < v.size(); i++)
        {
            if(kq.length()+v.at(i).length()>=100) break;
            kq +=v.at(i);
            kq+=" ";
            
        }
        cout<<kq<<endl;
        //cout<<kq.length()<<endl;
    }
    
    
    return 0;
}