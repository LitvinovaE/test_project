// [main]

#include <stdio.h>
#include <stdlib.h>
#include "test_A.h"
#include "test_B.h"

int main(int argc, char *argv[])
{
	if(atoi(argv[1]) == 1)
	{
		A();
	}
	else
	{
		B();
	}
}