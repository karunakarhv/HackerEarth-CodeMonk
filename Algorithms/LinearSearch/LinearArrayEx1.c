#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int N = 0, M = 0, i = 0, lastIdx=0;
        int *arr;
	scanf("%d",&N);//Size of Array
        scanf("%d",&M);//Element to be searched.
        arr = (int *)malloc(N * sizeof(int));
        
        for(i = 0; i < N; i++)
        {
		scanf("%d",&arr[i]);		
	}
        for(i=0;i<N;i++)
	{
		if(arr[i] == M)
			lastIdx = i+1;
	}
        printf("%d\n",lastIdx);
	return 0;
}
