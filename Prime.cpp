#include<bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
    if(n<2)return 0;
    if(n==2)return 1;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if(is_prime(n)==1)cout << n;
    else cout << "not prime";
}
