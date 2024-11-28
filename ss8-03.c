#include <stdio.h>

int main() {
	int n;
	printf("Nhap so nguyen n bat ki: ");
	scanf("%d", &n)
	int arr[n][n];
	printf("Nhap cac phan tu cua ma tran: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("Nhap phan tu o vi tri (%d, %d): ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
