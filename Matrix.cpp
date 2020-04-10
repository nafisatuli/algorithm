#include<bits/stdc++.h>
using namespace std;
int main()
{
    int aa[100][100],bb[100][100],cc[100][100];
    int r1,r2,c1,c2,m;
    cout << "1st matrix\n";
    cin >> r1 >> c1;
    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c1; j++)
        {
            cin >> aa[i][j];
        }
    }
    cout << "2nd matrix\n";
    cin >> r2 >> c2;
    for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            cin >> bb[i][j];
        }
    }
    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            for(int k=1; k<=r2; k++)
            {
                m+=aa[j][k]*bb[k][j];
            }
            cc[i][j]=m;
            m=0;
        }
    }
    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            cout << cc[i][j] << " ";
        }
        cout << endl;
    }
}

