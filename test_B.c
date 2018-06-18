// [B]
#include "test_B.h"

void B()
{
	printf("B();\n");
	C();
}

void C()
{
	printf("C();\n");
	A();
}