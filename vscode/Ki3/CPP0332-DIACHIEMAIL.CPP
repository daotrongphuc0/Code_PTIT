#include "iostream"
#include "sstream"
#include "vector"
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    
    istringstream tk(s);
    vector<string> v;
    while (tk>>s) v.push_back(s);
    string kq = v.back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        kq += v.at(i).at(0);

    }
    kq +="@ptit.edu.vn";
    cout<<kq;
   
}