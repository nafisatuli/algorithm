#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,D[100],tk,temp,res=0,aa[1000],j=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> D[i];
    }
    cin >> tk;
    for(int i=0; i<n; i++)
    {
        temp=D[i];
        tk=tk%temp;
        if(tk<=temp)
        {
            if((tk/temp)>0)
                res+=tk/temp;
            aa[j]=temp;
            j++;
        }
    }
    cout << endl << res << endl;
    for(int i=0; i<n; i++)
    {
        cout << aa[i] << " ";
    }
}
