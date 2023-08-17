#include "bits/stdc++.h"
using namespace std;

int main(){
    int m1[10][10] ={0}, m2[10][10] ={0},m3[10][10] ={0};
    int x[4][4],y[4];

    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            cin >> m1[i][j];
        }
        
    }
    // cout<< "nhap matran x:";
    // for (int i = 1; i < 4; i++)
    // {
    //     for (int j = 1; j < 4; j++)
    //     {
    //        cin >> x[i][j];
    //     }
        
    // }
    // cout<< "nhap matran y:";
    // for (int i = 1; i < 4; i++)
    // {
    //     for (int j = 1; j < 4; j++)
    //     {
    //        cin >> y[i][j];
    //     }
        
    // }
    
    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            m2[i][j] = m1[i+1][j]  + m1[i+1][j-1]+ m1[i+1][j+1] - m1[i-1][j]  - m1[i-1][j-1]- m1[i-1][j+1];
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


    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            m3[i][j] = m1[i+1][j+1]  + m1[i-1][j+1]+ m1[i][j+1] - m1[i-1][j-1]  - m1[i+1][j-1]- m1[i+1][j-1] ;
        }
        
    }

    cout << " ma tran hy: "<<endl;
    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            cout<< m3[i][j]<< " ";
        }
        cout<< endl;
    }


    cout<< " cong tong "<<endl;


    
    for (int  i = 1; i < 8; i++)
    {
        for (int j = 1; j< 8; j++)
        {
            cout<< m2[i][j] +m3[i][j]<< " ";
        }
        cout<< endl;
    }
}