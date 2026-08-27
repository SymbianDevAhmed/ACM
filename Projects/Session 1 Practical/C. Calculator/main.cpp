#include <iostream>

using namespace std;

int main()
{   char S;
    int X,Y;
    cin>> X >> S >> Y;
    if(S=='+')
    {
        cout<<X+Y;
    }
    else if(S=='-')
    {
        cout<<X-Y;
    }
    else if(S=='*')
    {
        cout<<X*Y;
    }
    else
    {
        cout<<X/Y;
    }
    return 0;
}
