#include <iostream>

int main(int argc, char const *argv[]) {
  /* code */
  int N = 0, sum1 = 0, sum2 = 0, sum3 = 0;
  int array[100000];

  cin >> N;
  for(int i = 0; i < N; i++)
  cin >> array[i];
  for(i=0;i<N;i=i+3)
  sum1 += array[i];
  for(i=1;i<N;i=i+3)
  sum2 += array[i];
  for(i=2;i<N;i=i+3)
  sum3 += array[i];
  cout << sum1 << ' ' << sum2 << ' ' << sum3 << endl;
  return 0;
}
