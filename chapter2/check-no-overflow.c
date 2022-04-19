#include <stdio.h>
int main(){
	unsigned x = 50000666666666666666666666666666666666666666666666;
	unsigned y = 7000000000000000000000000000;
	int ans = uadd_ok(x, y);
	printf("ans is %d \n", ans);
}

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y){
unsigned sum = x+y;
	return sum >= x;
}