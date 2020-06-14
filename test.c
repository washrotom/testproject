#include <stdio.h>

int main()
{
	for (int i = 1; i <= 35; i++) {
		int con;
		int zeroCount = 0;
		for (int j = 1; j <= i; j++) {
			con = i%j;
			if(con == 0) { zeroCount += 1; }
			else continue;
		} 
		if(zeroCount <= 2) {
			printf("%d: 소수\n", i);
		} else printf("%d: NOT!!\n", i);
	}

	return 0 ;
}
