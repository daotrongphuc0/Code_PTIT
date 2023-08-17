#include "bits/stdc++.h"
using namespace std;




int main() {
	int n;
	cin >> n;
	int m[n+5];
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    
    int kt =0;
    for (int i = 1; i < m[0]; i++)
    {
        cout<< i<<endl;
        kt++;
    }
    
    for (int i = 1; i <n; i++)
    {
        if(m[i]-m[i-1]>1){
            for (int j = m[i-1]+1; j < m[i]; j++)
            {
                cout<< j<<endl;
                kt++;
            }
            
        }
    }
    if(kt==0){
        cout<<"Excellent!"<<endl;
    }
}