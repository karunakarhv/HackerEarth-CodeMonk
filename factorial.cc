#include <iostream>

using namespace std;

int factorial(int n)
{
  if(n == 1)
    return 1;
  else
   return n * factorial(n-1);
}
int main(int argc, char const *argv[]) {
  /* code */
  int n;
  cin >> n;
  cout << factorial(n);
  return 0;
}
