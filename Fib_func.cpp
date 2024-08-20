#include <iostream>
#include "Fib_func.h"

int fibanachi(int m) 
{
	if (m < 1)
	{
		 return 0;
	}
	if (m == 1) 
	{
		return 1;
	}
	return fibanachi(m - 1) + fibanachi(m - 2);
}