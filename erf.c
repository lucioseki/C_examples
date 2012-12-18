// compile me with
// gcc erf.c -o erf -lm -g -Wall -O3 -std=gnu11
//
// -lm makes linker use libmath
// -g creates debugger symbols for gdb
// -Wall makes compiler warn every problem
// -O3 does the level 3 optimization
// -std=gnu11 verifies whether the source is conforming to the C11 standards
#include <math.h> //erf, sqrt
#include <stdio.h> //printf

int main(){
	printf("The integral of a Normal(0, 1) distribution "
				"between -1.96 and 1.96 is: %g\n", erf(1.96*sqrt(1/2.)));
}
