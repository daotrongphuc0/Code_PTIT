#include <iostream>
#include<fstream>
using namespace std;

int main(){
    string a;
    ifstream input;
    ofstream out;
    input.open("PTIT.in");
    out.open("PTIT.out");
    while(input.eof()){
        getline(input,a);
        out<< a<<endl;
    }
    input.close();
    out.close();

    return 0;
}