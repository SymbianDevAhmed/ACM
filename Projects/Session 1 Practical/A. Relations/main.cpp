#include <iostream>

using namespace std;

int main()
{     long long X,Y;
      cin>>X>>Y;
      if(X>Y)
      {
          cout<<'>';
      }
      else if (X<Y)
      {
          cout<<'<';
      }
      else
      {
          cout<<'=';
      }
    return 0;
}
