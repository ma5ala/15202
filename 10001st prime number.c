	/*********************
	Max Kulygin
	fav band : Slice The Cake
	**********************/
	#include <stdio.h>
  #define SIZE 200000
  #define SEARCH 10001
  int isprime (int val)
  {
	int divct = 0;
	int divcheck = 1;
	//printf("%d counting\n", val);
	while (divcheck <= val)
	{
		if (0 == val%divcheck)
			divct++;
		divcheck++;
	}
	//printf("%lld divct for %lld\n", divct, val);
	if (2 == divct)
		return 1;
	else 
		return 0;
}

int main ()
{
	int numbers[SIZE];
	int i = 0;
	int primect = 0;
	for (i = 0; i < SIZE; ++i)
	{
		numbers[i] = i+2;
		if (1 == isprime(numbers[i]))
		{	
			primect++;
			if (SEARCH == primect)
			{
				printf("%d-th prime is %lld\n", primect, numbers[i]);
				break;
			}
		else
			continue;
		}
	}
	return 0;
}
