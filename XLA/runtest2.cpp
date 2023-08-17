#include "bits/stdc++.h"
using namespace std;

int main(){
    int m1[10][10] ={0}, m2[10][10] ={0};
    int x[4][4];

    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            cin >> m1[i][j];
        }
        
    }

    for (int  i = 1; i < 4; i++)
    {
        for (int j = 1; j< 4; j++)
        {
            cin >> x[i][j];
        }
        
    }
    
    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            m2[i][j] = m1[i][j]*x[2][2] + m1[i][j+1]*x[2][3]+m1[i][j-1]*x[2][1]+
            m1[i+1][j]*x[3][2] + m1[i+1][j+1]*x[3][3]+m1[i+1][j-1]*x[3][1]+
            m1[i-1][j]*x[1][2] + m1[i-1][j+1]*x[1][3]+m1[i-1][j-1]*x[1][1];
        }
        
    }

    cout << " ma tran hx: "<<endl;
    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            cout<< m2[i][j]<< " ";
        }
        cout<< endl;
    }


    
}