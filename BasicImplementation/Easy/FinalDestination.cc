#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
  char str[100000];
  int len = 0, x = 0, y = 0, i = 0;

  cin >> str;
  len = strlen(str);
  for(i=0;i<len;i++)
  {
    switch(str[i])
    {
      case 'L':
        x--;
      break;
      case 'R':
        x++;
      break;
      case 'D':
        y--;
      break;
      case 'U':
        y++;
      break;
    }
  }
  cout << x << ' ' << y << endl;
  return 0;
}
