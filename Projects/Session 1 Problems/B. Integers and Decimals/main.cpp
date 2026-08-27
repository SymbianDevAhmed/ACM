#include <iostream>

using namespace std;

int main()
{    long double N;
     cin>>N;
     if(N==int64_t(N))
     {
         cout<<"Integer";
     }
     else
     {
         cout<<"Decimal";
     }
    return 0;
}
