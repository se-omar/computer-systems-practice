#include <stdio.h>
int main(){
	int x = 50000666666666666666666666666666666666666666666666;
	int y = 7000000000000000000000000000;
	int ans = uadd_ok(x, y);
	printf("ans is %d \n", ans);
}

/* Determine whether arguments can be added without overflow */
int uadd_ok(unsigned x, unsigned y){
	int sum = x+y;
	return !((x > 0 && y > 0 && sum <= 0) || (x < 0 && y < 0 && sum >= 0));
}