#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  int N,temp1;
  int T;
  int array[100000];
  cin >> T;
  while(T--){
    cin >> N;
    for(int i = 0; i < N; i++)
    {
      cin >> array[i];
    }
    sort(array,array+N,std::greater<int>());
    for(int i = 0; i < N; i++)
        cout << array[i] << ' ';
    cout << endl;
  }
  return 0;
}
