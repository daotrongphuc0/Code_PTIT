#include <bits/stdc++.h>
using namespace std;
int kt(int n){
    int dem =0;
    if (n <= 1) return 0;
    for (int  i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0) dem ++;
  //      break ;
    }
    if(dem == 0)return 1;
    return 0;
}
int main(){
    int n; cin >> n;
    while(n-->0){
        int a , b  ;
        cin >> a >> b ;
        for (int  i = a; i <= b; i++)
        {
            if(kt(i)== 1) cout << i<< " ";
        }
        cout<< endl;
    }
    
    return 0;
}
