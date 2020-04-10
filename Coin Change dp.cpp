#include<bits/stdc++.h>
using namespace std;
void change(int data[],int tk)
{
    int c[10000],s[10000];
    int i=1,x=0,min,item,D,t=1;
    c[0]=0,s[0]=0;
    while(tk>=i)
    {
        x=0;
        while(data[x]<=i)
        {
            item=c[i-data[x]]+1;
            if(t==1)
            {
                min=item;
                c[i]=min;
                s[i]=data[x];
                t=2;
            }
            else
            {
                if(min>item)
                {
                    min=item;
                    c[i]=min;
                    s[i]=data[x];
                }
            }
            x++;
        }
        t=1;
        i++;
    }
    cout << "Total coins:";
    cout << c[tk] << endl;
    cout << "Minimum number of coins:" << endl;
    for(int i=0; i<=tk; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    cout << "Last coin stored in array:"<< endl;
    for(int i=0; i<=tk; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << "Selected coins are:: ";
    for(int i=tk; i!=0;)
    {
        cout << s[i] << " ";
        i=i-s[i];
    }
}
int main()
{
    int n,data[10000],tk;
    cout << "Number of coins::";
    cin >> n;
    cout << endl;
    cout << "Coins are:: ";
    for(int i=0; i<n; i++)
    {
        cin >> data[i];
    }
    cout << "Taka:: ";
    cin >> tk;
    change(data,tk);
}

