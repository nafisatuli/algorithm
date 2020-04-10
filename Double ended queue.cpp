#include<bits/stdc++.h>
using namespace std;
int main()
{
    int space,pp,value;
    string s;
    deque<int>qq;
    cin >> space >> pp;
    for(int i=1;i<=pp;i++)
    {
        cin >> s;
        if(s=="PushL")
        {
            cin >> value;
            if(qq.size()!=space)
            {
                qq.push_front(value);
                cout << value << endl;
            }
            else cout << "queue full" << endl;
        }
        else if(s=="PushR")
        {
            cin >> value;
            if(qq.size()!=space)
            {
                qq.push_back(value);
                cout << value << endl;
            }
            else cout << "queue full" << endl;
        }
        else if(s=="PopL")
        {
            if(qq.size()!=0)
            {
                value=qq.front();
                cout << value << endl;
                qq.pop_front();
            }
            else cout << "empty" << endl;
        }
        else if(s=="PopR")
        {
            if(qq.size()!=0)
            {
                value=qq.back();
                cout << value << endl;
                qq.pop_back();
            }
            else cout << "empty" << endl;
        }
    }
}
