#include "bits/stdc++.h"
using namespace std;




int main() {
	int m,n;
	cin >> n>>m;
	int kq[m+5];
    for (int i = 1; i <=n; i++)
    {
        int tmp;
        cin >> tmp;
        kq[tmp]++;
    }
    int max1=-1,max2=-1;
    for (int i = 1; i <=m; i++)
    {
        cout << kq[i]<< " ";
        if(kq[i] >max1){
            max2= max1;
            max1= i;
        }
        else{
            if(kq[i] >max2){
            max2= i;
        }
        }
    }
    cout << max1<< " " << max2;
}