
#include <stdio.h>

int main(void)
{
	float perimeter, length, width;

	printf("Enter the perimeter of the fence: ");
	scanf("%f", &perimeter);

	length = (2.0 * perimeter);
        width = (3.0 / 4.0) * length;

	printf("Length of the fence = %.2f\n", length);
	printf("Width of the fence = %.2f\n", width);

	return 0;
}
