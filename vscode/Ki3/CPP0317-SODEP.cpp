#include "iostream"
#include "string"
using namespace std;

int kt(string s){
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!= s[s.length()-1-i] || (s[i]%2!=0)) return 0;
    }
    return 1;
    
}

int main(){
    int n; cin >>n;
    //cin.ignore();
    while (n--)
    {
        string s;
        cin>>s;
        if(kt(s)) cout<< "YES"<<endl;
        else cout<< "NO"<<endl;
        
    }
    
}