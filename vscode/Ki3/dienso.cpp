#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while(t-->0){
        long long n,x;
        cin >> n>>x ;
        int m[n+5];
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(m[i]<m[j]){
                    int tmp =m[i];
                    m[i]=m[j];
                    m[j]=tmp;
                }
            }
            
        }
        //int dem =0;
        for (int i = 0; i < x; i++)
        {
            cout<< m[i] << " ";
        }
        cout<<endl;
               
    }
    return 0;
}
