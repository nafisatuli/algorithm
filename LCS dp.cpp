#include<bits/stdc++.h>
using namespace std;

void LCS_length(string x,string y)
{
    int c[100][100];
    char b[100][100];
    int m = x.size();
    int n = y.size();
    for(int i=0; i<=m; i++) c[i][0]=0;
    for(int i=0; i<=n; i++) c[0][i]=0;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='l';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='u';
            }
        }
    }
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cout << c[i][j] << b[i][j] << " ";
        }
        cout << endl;
    }
    cout <<"\nLCS size is = "<< c[m][n] << "."<< endl;
    int t=0;
    int i=m,j=n;
    cout <<"LCS length is = ";
    while(i != 0 && j != 0)
    {
        if(b[i][j]=='c')
        {
        	if(m>n)
            cout << x[i-1];
            else  cout << y[j-1];
            i--,j--;
        }
        else if(b[i][j]=='u') j--;
        else if(b[i][j]=='l') i--;
    }
    cout <<".\n"<<endl;
}
int main()
{
    string x,y;
    while(cin >> x >> y)
        LCS_length(x,y);
}
