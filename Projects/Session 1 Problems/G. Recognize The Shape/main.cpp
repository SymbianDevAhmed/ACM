#include <iostream>
#include <math.h>

using namespace std;

int main()
{   long double A;
    cin>>A;
    if(A==1)
    {
        cout<<"Square";
    }
    else if((A/sqrt(A))==sqrt(A)&& A!=1)
    {
        cout<<"Unknown";
    }

    else
    {
        cout<<"Rectangle";
    }
    return 0;
}
