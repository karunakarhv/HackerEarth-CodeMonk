#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  char char_array[1000000];
  int N, count_hack = 0;
  int count_h = 0,count_a=0,count_c=0,count_k=0,count_e=0,count_r=0,count_tt=0;

  cin >> N;
  for(int i=0; i< N; i++)
    cin >> char_array[i];
  char_array[i] = '\0';
  for(int i =0;i<N;i++)
  {
    switch(array[i])
    {
      case 'h':
        count_h++;
      break;
      case 'a':
        count_a++;
      break;
      case 'c':
        count_c++;
      break;
      case 'k':
        count_k++;
      break;
      case 'e':
        count_e++;
      break;
      case 'r':
        count_r++;
      break;
      case 't':
        count_tt++;
      break;
    }
    if((count_h==2) &&
       (count_a==2) &&
       (count_c==1) &&
       (count_k==1) &&
       (count_e==2) &&
       (count_r==2) &&
       (count_tt==1))
    {
      count_hack++;
      count_h=0;count_a=0;count_c=0;
      count_k=0;count_e=0;count_r=0;count_tt=0;
    }
  }
  cout << count_hack << endl;

  /* code */
  return 0;
}
