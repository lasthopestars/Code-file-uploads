#include<stdio.h>

int main() {
	int T, n;
	scanf_s("%d", &T);

	//1

	while (T--) {
		
		scanf_s("%d", &n);//13
		int digit = 0;
		
		while (n > 0) {//13
			if (n % 2 == 1) 
				printf("%d", digit);
				n /= 2;
				digit++;

		}
	
	}
}