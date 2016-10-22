#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int T = 0; //No.of.Test cases
  int N = 3; //Square Matrix of rows and columns of size N
  int i = 0, j = 0; //Index to access individual elements.
  unsigned char matrix[50][50];
  string data;

  cin >> T;
  while(T--){
    cin >> N;

    for(i = 0;i < N; i++)
    {
      cin >> data;
      for(j = 0; j < N; j++)
      {
         matrix[i][j] = data[j];
      }
    }
    int mid = (N/2);//x1, y1
    //Find the location of *, get the position.
    for(i=0; i < N; i++)
    {
      for(j=0;j < N;j++)
      {
        if(matrix[i][j] == '*')
          break;
      }
      if(matrix[i][j] == '*')
        break;
    }
    int x2 = i; //x2
    int y2 = j; //y2
    //No of Swaps
    cout << abs(mid-x2) + abs(mid-y2) << endl;
    //Reset
    x2=0;
    y2=0;
    i=0;
    j=0;
    mid =0;

  }
  return 0;
}
