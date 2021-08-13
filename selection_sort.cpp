#include<stdio.h>


void selection_sort(int list[], int n) {
	int i, j, least, temp;

	for (i = 0; i < n - 1; i++) {
		least = i;


		for (j = i + 1; j < n; j++) {
			if (list[j] < list[least])//여기!
				least = j;
			

		}

		if (i != least) {

			temp = list[i];
			list[i] = list[least];
			list[least] = temp;
		
			

		}

	
	}


	for (i = 0; i < n; i++)
	{
		printf("%d", list[i]);
	}




}

int main() {
	int i;
	int N;
	
	printf("숫자 개수를 입력하세요.");
	scanf_s("%d", &N);

	int *array = new int[N];

	
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &array[i]);
		for (int j = 0; j < i; j++) {
			if (array[i] == array[j]) {
				i--;
				break;
			}
		}
			
		

	}
	
	selection_sort(array, N);





}