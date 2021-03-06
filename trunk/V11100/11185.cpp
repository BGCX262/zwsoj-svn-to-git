/* @JUDGE_ID: 13160EW 10976 C++ */
// 2007/04/13

//@BEGIN_OF_SOURCE_CODE 

#include <stdio.h> 
#define P 3
long long ternary(long n) {
	long long result = 0;
	long long base = 1;
	while(n>0) {
		result += base*(n%P);
		base*=10;
		n/=P;
	}

	return result;	
}

int main()
{
	long n;
	while( scanf("%ld", &n) == 1) {
		if(n<0) break; // end
		printf("%lld\n", ternary(n) );
	}
	return 0;
}
