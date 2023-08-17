#include <iostream>
#include <math.h>
using namespace std;

int  main(){
    int m,n,L;
    cin >> m>> n>>L;

    int matran[m][n] = {0};
    int ni[L+1]={0};
    float Pi[L+1];
    float Pik[L+1];
    float mk[L+1];
    float mg;
    float Ps[L+1];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> matran[i][j];
            ni[matran[i][j]]++;
        }
        
    }
    //show ni
    cout<< "\nni="<<endl;
    for (int i = 0; i < L; i++)
    {
        cout<< ni[i]<<" ";
    }


    for (int i = 0; i < L; i++)
    {
        Pi[i] = (float) ni[i]/(m*n);
    }
    //show pi
    cout<< "\nPi="<<endl;
    for (int i = 0; i < L; i++)
    {
        cout<< Pi[i]<<" ";
    }


    Pik[0]=Pi[0];
    for (int i = 1; i < L; i++)
    {
        Pik[i]=Pik[i-1]+Pi[i];
    }
    //show Pik
    cout<< "\nPik="<<endl;
    for (int i = 0; i < L; i++)
    {
        cout<< Pik[i]<<" ";
    }


    mk[0]=0*Pi[0];
    for (int i = 1; i < L; i++)
    {
        mk[i]= mk[i-1] + i*Pi[i];
    }
    cout<< "\nmk="<<endl;
    for (int i = 0; i < L; i++)
    {
        cout<< mk[i]<<" ";
    }


    mg=mk[L-1];
    //show mG
    cout<< "\nmG= "<<mg<<endl;


    for (int i = 0; i < L-1; i++)
    {
        Ps[i]= (mg*Pik[i]-mk[i])*(mg*Pik[i]-mk[i])/(Pik[i]*(1-Pik[i]));
    }
    //show Ps:
    cout<< "\nPhuong sai="<<endl;
    for (int i = 0; i < L-1; i++)
    {
        cout<<Ps[i]<<" ";
    }


    Ps[L-1]=0;
    float max = Ps[0];
    int vt = 0;
    int dem =0;
    for (int i = 1; i < L; i++)
    {
        if(max<Ps[i]) {
            max =Ps[i];
        }
    }
    //show max
    cout<< "\nMax= "<<max<<endl;
    // kiem tra nhieu max, neu co thi tinh trung binh
    for (int i = 0; i < L; i++)
    {
        if(Ps[i]== max){
            dem++;
            vt +=i;
        }
    }
    cout<< "\nNguong tu dong = "<< round(vt/dem);
    //cout<<round(vt/dem)<< " " << max;
    
    // for (int i = 0; i < L; i++)
    // {
    //     cout<<ni[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < L; i++)
    // {
    //     cout<<Pi[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < L; i++)
    // {
    //     cout<<Pik[i]<<" ";
    // }
    // cout<<endl; 
    
    // for (int i = 0; i < L; i++)
    // {
    //     cout<<mk[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < L; i++)
    // {
    //     cout<<Ps[i]<<" ";
    // }
    // cout<<endl;

}