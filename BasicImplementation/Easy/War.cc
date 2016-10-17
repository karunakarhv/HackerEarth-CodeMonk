#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int T = 0;
  int N = 0;
  long bob[100000];
  long alice[100000];
  long max_bob = 0, max_alice = 0;
  cin >> T;

  while(T--)
  {
    cin >> N;
    for(int i =0;i<N;i++)
      cin >> bob[i];
    for(int j =0;j<N;j++)
      cin >> alice[j];

   //Running Sum
    for(int k = 0;k<N;k++)
    {
      if(max_bob < bob[k])
        max_bob = bob[k];
      if(max_alice < alice[k])
        max_alice = alice[k];
    }
    //Results
    if(max_bob == max_alice)
      cout << "Tie" <<endl;
    else if(max_bob > max_alice)
      cout << "Bob" << endl;
    else if(max_bob < max_alice)
      cout << "Alice" <<endl;

    //Reset the values
    max_bob = 0;
    max_alice = 0;
  }
  return 0;
}
