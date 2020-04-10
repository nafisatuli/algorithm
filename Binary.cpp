#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,aa[105],item,mid;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> aa[i];
    }
    cin >> item;
    int u=n,l=1;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(aa[mid]==item)
        {
            cout << "found" << endl;
            break;
        }
        else if(aa[mid]>item)
        {
            u=mid-1;
        }
        else if(aa[mid]<item)
        {
            l=mid+1;
        }
    }
    if(aa[mid]!=item)
        {
            cout << "No" << endl;

        }
}
