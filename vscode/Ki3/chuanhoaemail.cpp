#include <bits/stdc++.h>
using namespace std;

bool chuanhoa(string s){
    int daua=0;
    int daucham=0;
    for (int i = 0; i < s.length(); i++)
    {
        if((s[i]<'A' || s[i]>'Z')&&(s[i]<'a' || s[i]>'z')&&(s[i]<'1' ||s[i]>'9')&&s[i]!='.'&&s[i]!='_'&&s[i]!='@') return false;
        if(s[i]=='@'&& i>=64)  return false;
        if(s[i]=='@'&& s.length()-i-1>=254)  return false;
        if(s[i]=='@'){daua++;daucham=0;}
        if(s[i]=='.') daucham++;
    }
    if(daua!=1||daucham==0)  return false;
    return true;
}
int main(){
    int t; cin >>t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >>s;
        if(chuanhoa(s)) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    
    
    
    return 0;
}