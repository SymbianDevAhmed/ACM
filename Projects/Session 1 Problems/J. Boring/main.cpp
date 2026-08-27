#include <iostream>

using namespace std;

int main()

{   long long N,X=0,Y=0;
    for(int i=1;i<=5;i++)
    {
        cin>>N;
        if(N%2==0)
           Y++;
        else

           X++;
    }
    cout<<X <<" "<<Y;
    return 0;
}
