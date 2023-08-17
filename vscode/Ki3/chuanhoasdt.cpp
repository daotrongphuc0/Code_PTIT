#include <bits/stdc++.h>
using namespace std;



int main(){
    int t; cin >> t;
    cin.ignore();
    while (t-->0)
    {
        string s;
        getline(cin,s);
        string kq ="";
        string kq1 ="";
        
        
        for (int i= 0; i < s.length(); i++)
        {
            if(s[i]<='9'&& s[i]>='0'){
                kq+=s[i];
            }
        }
        int i=0;
        if(kq[0]!='0'){
            i=2;
            kq1+='0';
        }
        for (; i < kq.length(); i++)
        {
            kq1 += kq[i];
        }
        cout<<kq1<<endl;
        
    }
    
    
    return 0;
}
