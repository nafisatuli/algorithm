#include<bits/stdc++.h>
using namespace std;
int top=-1,st[5],_max=5,item;
void display()
{
    if(top==-1)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        for(int i=0;i<=top;i++)cout << st[i] << " ";
        cout<< endl;
    }
}
void top_value()
{
    cout << "Top value:: " << st[top] << endl;
}
void pop()
{
    if(top==-1)
    {
        cout << "Empty" << endl;
        return;
    }
    else
    {
        cout << "Deleted:: " << st[top] << endl;
        top--;
    }
}
void push()
{
    if(top==_max)
    {
        cout << "Overflow" << endl;
        return;
    }
    else
    {
        cin >> item;
        top++;
        st[top]=item;
    }
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
        else if(n==4)top_value();
        else
        {
            cout << "Error" << endl;
            continue;
        }
    }
}
