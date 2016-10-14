#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  char str[100];

  cin >> str;
  int len = strlen(str);
  for(i=0;i< len; i++)
  {
    if(str[i] == '0')
    {
      count0++;
      count1=0;
      if(count0 == 6)
      {
        cout << "Sorry, sorry!" << endl;
        return;
      }
    }
    else if(str[i] == '1'){
      count1++;
      count0=0;
      if(count1 == 6)
      {
        cout << "Sorry, sorry!" << endl;
        return;
      }
    }
  }
  cout << "Good Luck!"

  /* code */
  return 0;
}
