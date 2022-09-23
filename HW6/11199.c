#include "function.h"

#include <stdio.h>


int main( void ){
	// input
	int N ;
	scanf( "%d", &N ) ;

	// call recursion and print moves
	hanoi( N, 1, 2, 3 ) ;

	return 0 ;
}

