#include<bits/stdc++.h>
using namespace std;
void activity(int s[],int f[],int n)
{
    cout << s[0] << " " << f[0] << endl;
    int j=1;
    for(int i=2; i<n; i++)
    {
           if(s[i]>=f[j])
           {
               cout << s[i] << " "<< f[i]<< endl;
               j=i;
           }
    }
}
int main()
{
    int n;
    int s[100],f[100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s[i] >> f[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(f[j]>f[j+1])
            {
                swap(f[j],f[j+1]);
                swap(s[j],s[j+1]);
            }
        }
    }
    activity(s,f,n);
}
