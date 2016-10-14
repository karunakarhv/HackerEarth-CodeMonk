/*
Arya has just installed twinder(no description required) and now wants to upload a pic so that
she could meet some nice people here,

Minimum dimension of the picture should be M x M where M is the length of the side of square

Arya has a profile picture size of H x L

Now, the rules say the following:-

1 If any of the H or L is less than M, then outcome is UPLOAD ANOTHER

2 If H and L are bigger than M, then:-

a) If the photo is a square, then outcome is ACCEPTED

b) If photo is not square, then outcome is CROP IT

Print the outcome

INPUT FORMAT

First line contains M

Second line contains N, the number of photos

Then ,N lines follow containing 2 space separated integers H and L

CONSTRAINTS

1<=M,H,L<=10000

1<=N<=1000
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  long M, H, L;
  int N;
  cin >> M;
  cin >> N;
  while(N--){
    /* code */
    cin >> H ;
    cin >> L ;
    if(H < M || L < M )
    {
      /*Upload another*/
      cout << "UPLOAD ANOTHER\n";
    }
    else
    {
      if(H == L){
        /*Square*/
        cout << "ACCEPTED\n";
      }
      else{
        /*Crop*/
        cout << "CROP IT\n";
      }
    }
  }
  return 0;
}
