#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // nhap m hang n cot va nguong l , do xam
    int m, n, l, r[20][20], kq[20][20],doxam;
    cin >> m >> n >> l >> doxam;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> r[i][j];
        }

    for (int i = 0; i < m; i++)
    {
        int b, e = 0,u=r[i][0];
        if (u >= l)
            b = doxam;
        else
            b = 0;
        e = b - r[i][0];
        kq[i][0] =b;
        cout << "U" << i+1 << "1=" << u << " " << "   B" << i+1<< "1=" << b << "   E" << i+1 << "1=" << e << endl;
        for (int j = 1; j < n; j++)
        {
            u = r[i][j]-e;
            if( u >= l)
                b = doxam;
            else
                b = 0;
            e = b - r[i][j]+e;
            cout << "U" << i+1 <<j+1<< "=" << u << " "<< "   B" << i+1 << j+1<<"=" << b << "   E" << i+1 << j+1<<"=" << e << endl;
            kq[i][j] =b;
        }
    }

    //show
    cout<< "\n\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< kq[i][j]<<" ";
        }
        cout<<endl;
    }
}