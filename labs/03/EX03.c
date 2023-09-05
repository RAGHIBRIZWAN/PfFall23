#RAGHIB RIZWAN RABANI
##23k-0012 B-AI

#include <stdio.h>
#include <math.h>

int main(){
	int perp;
	perp = 0;
	printf("ENTER THE VALUE OF PERPENDICULAR:");
	scanf("%d",&perp);
	int base;
	base = 0;
	printf("ENTER THE VALUE OF BASE:");
	scanf("%d",&base);
	int p = perp*perp;
	int b = base*base;
	printf("HYPOTENUSE: %f",sqrt(p+b));
	return 0; 
}
