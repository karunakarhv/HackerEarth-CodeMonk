#include <iostream>

int main(int argc, char const *argv[]) {
  int l, r, k;
  int count = 0;

  std::cin >> l >> r >> k;

  for(int i=l;i<=r;i++){
    if(i/k == 0) count++;
  }
  std::cout << count << std::endl;
  /* code */
  return 0;
}
