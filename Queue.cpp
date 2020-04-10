#include<bits/stdc++.h>
using namespace std;
int aa[5],f=0,r=1,k;
void push()
{
    cout << "Push" << endl;
    f++;
    cin >> aa[f];
}
void pop()
{
    cout << "Pop" << endl;
    k=aa[r];
    r++;
}
void display()
{
    cout << "Queue" << endl;
    for(int i=r;i<=f;i++)
    {
        cout << aa[i] <<" ";
    }
    cout << endl << "Deleted value: " << k << endl;
}
int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(n==1)push();
        else if(n==2)pop();
        else if(n==3)display();
        else
        {
            cout << "Error" << endl;
            continue;
        }
    }
}
