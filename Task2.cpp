
#include <iostream>
using namespace std;

int main(){
   int var1,var2,swapper;
   var1 = 2;
   var2 = 3;
   cout << "This is variable first:" << var1 << "\tThis is variable second:" << var2 << endl;
  swapper = var1;
  var1 = var2;
  var2 = swapper;
    cout << "This is variable first:" << var1 << "\tThis is variable second:" << swapper << endl;
    return 0;

}
