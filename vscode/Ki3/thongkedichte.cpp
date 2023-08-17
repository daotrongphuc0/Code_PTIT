#include <bits/stdc++.h>
using namespace std;



int main(){
    int m,n;
    cin >> m>>n;
    int arr[m+2][n+2];
    int kq[m+2][n+2] ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==-1)       kq[i][j]=-1;
            else    kq[i][j]=1;
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]==-1){
                kq[i][max(j-1,0)]=min(kq[i][max(j-1,0)],0);
                kq[i][max(j+1,0)]=min(kq[i][max(j+1,0)],0);
                kq[max(i-1,0)][j]=min(kq[max(i-1,0)][j],0);
                kq[max(i+1,0)][j]=min(kq[max(i+1,0)][j],0);
                kq[max(i-1,0)][max(j-1,0)]=min(kq[max(i-1,0)][max(j-1,0)],0);
                kq[max(i-1,0)][max(j+1,0)]=min(kq[max(i-1,0)][max(j+1,0)],0);
                kq[max(i+1,0)][max(j-1,0)]=min(kq[max(i+1,0)][max(j-1,0)],0);
                kq[max(i+1,0)][max(j+1,0)]=min(kq[max(i+1,0)][max(j+1,0)],0);
            }
        }
        
    }
    int dem =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(kq[i][j]==0){
                dem+=arr[i][j];
            }
            //cout<< kq[i][j] <<" ";
        }
        //cout<<endl;
    }
    cout<< dem<<endl;
    return 0;
}
