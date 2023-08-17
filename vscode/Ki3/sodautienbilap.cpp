#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t-->0){
       int n;
        cin >> n ;
        long long m[n+5];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        long long kt =-1;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(m[j]== m[i]){
                    kt=m[i];
                    break;
                } 
            }
            if(kt!=-1) break;
        }
        if(kt == -1) cout<< "NO" << endl;
        else cout<< kt<< endl;
               
    }
    return 0;
}
