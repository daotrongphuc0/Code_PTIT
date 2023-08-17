#include <bits/stdc++.h>
using namespace std;



int main(){
    int t; cin >> t;
    cin.ignore();
    string m[t+4];
    for (int i = 0; i < t; i++)
    {
        getline(cin, m[i]);
    }
    int dem =0;
    int tmp =-1;
    int kt =0;
    for (int i = 0; i < t; i++)
    {
        if(m[i].length()>1){
            if(kt==0){
                dem=0;
                tmp = i;
                kt=1;
            }else{
                dem++;
            }
        }
        else{
            kt =0;
            cout<< m[tmp]<< ": "<<dem<<endl;
        }
        //cout<< m[i].length()<<endl;
    }
    if(tmp!=-1) cout<< m[tmp]<< ": "<<dem<<endl;
    return 0;
}
