#include<bits/stdc++.h>
using namespace std;
void LCS(string x,string y)
{
    int b[100][100];
    char c[100][100];
    int m=x.size();
    int n=y.size();
    for(int i=0;i<=m;i++)b[i][0]=0;
    for(int i=0;i<=n;i++)b[0][i]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                b[i][j]=b[i-1][j-1]+1;
                c[i][j]='c';
            }
            else if(b[i-1][j]>=b[i][j-1])
            {
                b[i][j]=b[i-1][j];
                c[i][j]='l';
            }
            else
            {
                b[i][j]=b[i][j-1];
                c[i][j]='u';
            }
        }
    }
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout << b[i][j] << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << b[m][n] << endl;
    int i=m,j=n,t=0;
    while(i!=0 && j!=0)
    {
        if(c[i][j]=='c')
        {
            if(m>n)
            {
                cout << x[i-1];
            }
            else cout << y[j-1];
            i--;j--;
        }
        else if (c[i][j]=='u')j--;
        else if(c[i][j]=='l')i--;
    }

}
int main()
{
    string x,y;
    while(cin >> x >> y)
        LCS(x,y);
}
