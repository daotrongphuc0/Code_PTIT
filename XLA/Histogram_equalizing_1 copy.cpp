#include <iostream>
#include <math.h>
using namespace std;


int main(){

    // nhap m hang n cot va L muc xam
    int m, n, L, r[20][20], pk[20]={0};
    //cin>>m>>n;
    cin>>L;
    int sodiemanh ;
    cin >> sodiemanh;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++){
            cin>>r[i][j];
            pk[r[i][j]]++;
        }
            
    cout<<"m = "<<m<<", n = "<<n<<", L = "<<L<<endl;


    cout<< "Ni="<<endl;
    for (int i = 0; i < L; i++)
    {
        cout<< pk[i]<<" ";
    }
    cout<<endl;
    cout<< "Pik*m*n"<<endl;
    float tmp =0;
    
    for(int k=0; k<L; k++){
        tmp+= (float)pk[k]/sodiemanh*(L-1);
        pk[k] = (int) round(tmp);
        cout<< tmp<<" ";
    }
    cout<<endl;
    for(int k=0; k<L; k++){
        cout<< pk[k] <<" ";
    }
    //sk
}