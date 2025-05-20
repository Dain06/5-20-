#include <stdio.h>

int main(void) {

	//1번
    for (int i = 2; i < 7; i += 2) {
		printf("<구구단 %d단>\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

    //2
	int m, n;
	printf("m = ");
	scanf_s("%d", &m);
	for (int i = 0;i < m;i++) {
		int sum = 0;
		printf("n = ");
		scanf_s("%d", &n);
		for (int j = 1;j <= n;j++) {
			sum += j;
		}
		printf("%d\n", sum);
	}

    //3-1
	int n, m;
	printf("n m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			printf("1");
		}
		printf("\n");
	}

    //3-2
	int n, m;
	printf("n m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			printf("%d", j+1);
		}
		printf("\n");
	}

    //3-3
	int n, m;
	int k = 0;
	printf("n m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			k++;
			printf("%02d ", k);
		}
		printf("\n");
	}

    //3-4
	int n, m;
	printf("n m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0;i < n;i++) {
		for (int j = 1;j <= m;j++) {
			printf("%02d ", j + i);
		}
		printf("\n");
	}

    //3-5
	int n, m;
	printf("n m = ");
	scanf_s("%d%d", &n, &m);
	for (int i = 0;i < n;i++) {
		if (i % 2 == 0) {
			for (int j = 1;j <= m;j++) {
				printf("%d ", j);
			}
		}
		else {
			for (int j = m;j >= 1;j--) {
				printf("%d ", j);
			}
		}
		printf("\n");
	}

    //4-1
	int n, m;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++) {
		for (int j = 0; j < i;j++) {
			printf("*");
		}
		printf("\n");
	}

    //4-2
	int n, m;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = n;i >= 1;i--) {
		for (int j = 0; j < i;j++) {
			printf("*");
		}
		printf("\n");
	}
    //4-3
	int n, m;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = n;i >= 1;i--) {
		for (int j = n; j > i;j--) {
			printf(" ");
		}
		for (int j = 0; j < i;j++) {
			printf("*");
		}
		printf("\n");
	}
    //4-4
	int n, m;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++) {
		for (int j = 0; j < (2 * i - 1);j++) {
			printf("*");
		}
		printf("\n");
	}
	
    //4-5
	int n, m;
	printf("n = ");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++) {
		for (int j = n; j > i;j--) {
			printf(" ");
		}
		for (int j = 0; j < (2 * i - 1);j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
