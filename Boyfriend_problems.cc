// ARYA found a match on twinder and now is the girlfriend of a nice guy , JOHN .
//
// Now, it's, JOHN's birthday , Arya ordered some N towers for him on his birthday of different lengths.
//
// But, Flagdeal messed up her order and all the towers came unarranged,
// Help her arrange the towers in a manner such that if you look from any tower,
// you cannot see any tower to the right but can see all the towers to left
//
// NOTE:
//
// You can see a tower A from tower B only if height(Tower A)> height(Tower B) Equal heighted towers
// can be seen or unseen as deemed fit
//
// INPUT
// First line contains T, the no. of test cases
// Each test case contains N , no of towers
// Then , N spaced integers follow containing the height of the towers
// OUTPUT
// Output the required arrangement of heights
// CONSTRAINTS
// 1<=T<=100
// 1<=N<=10^5
// 1<=Height Of tower <= 10^9

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  long N, H, i,temp;
  int N;
  long array[100000];

  while(T--){
    cin >> N;
    temp = N;
    while(temp--)
    {
      cin >> array[i++];
    }
    sort(array, array + N, std::greater<long>());
    for(i=0;i!=N;++i)
      cout << array[i] << ' ';
    cout << endl;
  }
  return 0;
}
