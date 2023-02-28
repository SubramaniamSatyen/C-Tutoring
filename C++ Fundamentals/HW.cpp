#include <iostream>
using namespace std;
#include <string>
int main()
{
   int a, b;
   int c = 0;
   cin >> a;
   cin >> b;
   while (a > 0) {
       c *= 10;
       c += a % 10;
       a /= 10;
   }
   if (b == c) {
       cout << "True" << endl;
   }
   else {
       cout << "False" << endl;
   }
}
