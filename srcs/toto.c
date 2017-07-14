#include <stdio.h>
#define NUM 5
#define TOTO (NUM-1)
#define TO_STRING(x) #x

int main()
{
	int a = TOTO;
	printf("%s", TO_STRING(a));
	return (0);
}

