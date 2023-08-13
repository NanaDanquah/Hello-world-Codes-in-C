#include <stdio.h>

int main()
{
	printf("Variables of type char ocuppy %lu bytes\n", sizeof (char));
    printf("Variables of type short ocuppy %lu bytes\n", sizeof (short));
    printf("Variables of type int ocuppy %lu bytes\n", sizeof (int));
    printf("Variables of type long ocuppy %lu bytes\n", sizeof (long));
    printf("Variables of type long long ocuppy %lu bytes\n", sizeof (long long));
    printf("Variables of type float ocuppy %lu bytes\n", sizeof (float));
    printf("Variables of type long double ocuppy %lu bytes\n", sizeof (long double));
    printf("Variables of type double ocuppy %lu bytes\n", sizeof (double));
	return 0;
}
