#include <iostream>

using namespace std;

int main()
{     int A,B,C;
      cin>>A>>B>>C;
      if(A>B&&A>C)
      {
          cout<<1;
      }
      else if(B>A&&B>C)
      {
          cout<<2;
      }
      else
      {
          cout<<3;
      }
    return 0;
}
