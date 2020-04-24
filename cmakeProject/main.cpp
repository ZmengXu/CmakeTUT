#include <iostream>
#include <string>
#include "addlib/library.h"
using namespace std;
int main(){
  int n=10;
  int ans=acc_add(n);
  cout<<"1+....+"<<n<<"="<<ans<<endl;
   return 0;
}
