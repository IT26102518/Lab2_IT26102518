
#include <stdio.h>

int main(void)
{ 
	float p1,p2,p3;
	printf("Enter the first person's height");
	scanf("%f", &p1);
	printf("Enter the secon person's height");
	scanf("%f", &p2);
	printf("Enter the third person's height");
	scanf("%f", &p3);
        
	float avg;
	avg = (p1+p2+p3)/3;
	printf("Average %.2f", avg);
	return 0;
}
