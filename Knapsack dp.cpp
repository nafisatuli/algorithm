#include<bits/stdc++.h>
using namespace std;
int B[100][100];
char C[100][100];
void knapsack(int n,int m,int w[],int p[])
{
    for(int w=0; w<=m; w++)
    {
        B[0][w]=0;
    }
    for(int i=0; i<=n; i++)
    {
        B[i][0]=0;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(j>=w[i-1])
            {
                if((p[i-1]+B[i-1][j-w[i-1]])>B[i-1][j])
                {
                    B[i][j]=p[i-1]+B[i-1][j-w[i-1]];
                    C[i][j]='C';
                }
                else
                {
                    B[i][j]=B[i-1][j];
                    C[i][j]='U';
                }
            }
            else
            {
                B[i][j]=B[i-1][j];
                C[i][j]='U';
            }
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            cout << B[i][j]<< C[i][j] <<" ";
        }
        cout << endl;
    }
    cout << endl;
    int i=n,j=m,res=0;
    while(B[i][j])
    {
        if(C[i][j]=='C')
        {
            cout << w[i-1] << " " << p[i-1] << endl;
            res+=p[i-1];
            j=j-w[i-1];
            i=i-1;
        }
        else i=i-1;
    }
    cout << endl << res;
}
int main()
{
    int n,m,w[100],p[100];
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> w[i] >> p[i];
    }
    knapsack(n,m,w,p);
}
