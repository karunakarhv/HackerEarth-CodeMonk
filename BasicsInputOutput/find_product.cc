#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
  /* code */
  int N = 1;
  int array[1000];
  long prod = 1;

  std::cin >> N;
  for(int i = 0; i < N; i++)
  {
    std::cin >> array[i];
  }
  for(int i =0; i < N; i++)
  {
    prod = (prod * array[i]) % (1000000007);
  }
  cout << prod << std::endl;
  return 0;
}
