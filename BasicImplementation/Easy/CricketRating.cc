#include <iostream>
#include <cstdlib>

using namespace std;

int max_sub_array_problem(int array[], int N)
{
  int max_ending_here =0, max_so_far = 0;
  for(int i = 0; i < N; i++)
  {
    max_ending_here += array[i];
    if(max_ending_here < 0)
      max_ending_here = 0;
    else if(max_so_far < max_ending_here)
      max_so_far = max_ending_here;
  }
  return max_so_far;
}

int main(int argc, char const *argv[]) {

  int N;
  int *array;
  int max_consistent = 0;
  cin >> N;
  array = (int*)malloc(sizeof(int) * N);
  for(int i = 0; i < N; i++)
  {
    cin >> array[i];
  }
  max_consistent = max_sub_array_problem(array, N);
  cout << max_consistent << endl;
  return 0;
}
