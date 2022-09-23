#include "function.h"

#include <stdio.h>


int main(void){
	int value ;		// values of input
	int gcd_ans, lcm_ans ;	// the answers

	// initialization
	scanf( "%d", &value ) ;
	gcd_ans = lcm_ans = value ;

	// keep updating
	while( scanf("%d", &value)!=EOF ){
		gcd_ans = gcd( gcd_ans, value ) ;
		lcm_ans = lcm( lcm_ans, value ) ;
	}

	// output
	printf( "The Greatest Common Divisor is %d.\n", gcd_ans ) ;
	printf( "The Least Common Multiple is %d.\n", lcm_ans ) ;

	return 0 ;
}

