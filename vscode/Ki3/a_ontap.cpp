#include "iostream"
#include "algorithm" // __gcd(a,b) sort(a,a+5)
#include "cmath"
#include "string"
#include "sstream"
#include "vector"
#include "fstream"
using namespace std;


long long ucln(long long a, long long b) {
    while(b!=0){
        long long x=a%b;
        a=b;
        b=x;
    }
    return a;
}

int sont(int a){
    if(a<=1) return 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

int main(){
    int a;
    cin >>a;
    int b[5];
    sort(b,b+5);
    cin.ignore();
    string s;
    // s.erase(1,1);
    // s.insert(s.begin(),"sss")
    // s.resize(5);
    // int x = (int)character - 48;             to int
    // int ia = a - '0';                        to int
    // tolower(char)
    // string b = to_string(1);
    
    getline(cin,s);
    istringstream tk(s);
    vector<string> v;
    while (tk>>s) v.push_back(s);
    // v.back() 
    // v.pop_back();
    // v.at();
    // v.size();

    ifstream in;
    ofstream out;
    in.open("abc.in");
    out.open("abc.out");
    while(in.eof()) in>>s;
    //getline(in,s);
    out<<s;
    in.close();
    out.close();

}