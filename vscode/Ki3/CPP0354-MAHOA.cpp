#include "iostream"
using namespace std;

int  main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin,s);
        int dem =1;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1]) dem++;
            else{
                cout<<s[i-1]<<dem;
                dem=1;
            }
        }
        cout<< s[s.size()-1]<<dem<<endl;
    }
    
}