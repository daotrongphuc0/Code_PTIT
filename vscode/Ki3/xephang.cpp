#include <bits/stdc++.h>
using namespace std;

struct khach
{
    int den;
    int check;
};

int main(){
    int t; cin >> t;
    khach m[t+5];
    for (int i = 0; i < t; i++)
    {
        cin >> m[i].den>> m[i].check;
    }
    for (int  i = 0; i < t-1; i++)
    {
        for (int  j = i+1; j < t; j++)
        {
            if(m[i].den> m[j].den){
                khach tmp = m[i];
                m[i]=m[j];
                m[j]= tmp;
            }
        }
        
    }
    int thoidiem =0;
    for (int i = 0; i < t; i++)
    {
        if(thoidiem<=m[i].den) thoidiem = m[i].den+m[i].check;
        else thoidiem += m[i].check;
    }
    cout<< thoidiem<<endl;
    return 0;
}
