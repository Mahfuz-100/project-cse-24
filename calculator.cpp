#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double a, b;
    char sign ;
    cin >> a >> sign >> b;
    if(sign == '+')
    {
        cout << a + b << endl;
    }else  if(sign == '-')
    {
        cout << a - b << endl;
    }else  if(sign == '*')
    {
        cout << a * b << endl;
    }else  if(sign == '/')

    {
        if(b == 0)
        {
            if( a == 0)
                cout << "undefined" << endl;
            else     
                cout << "Math error" << endl;
        }else
        {
            cout << a / b << endl;
        }     
    }else
    {
        cout << "Can't solve" << endl;
    }
    return 0;
}