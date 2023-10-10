#include<stdio.h>
#include<math.h>
void main()

{
	float a, b, c, d, e, f;
	printf("enter coordinates of two points");
	scanf("%f%f%f%f", &a, &b, &c, &d);
	e = (pow(c - a, 2) + pow(d - b, 2));
	f = sqrt(e);
	printf("eulcidean distance between two point is%f", f);


}