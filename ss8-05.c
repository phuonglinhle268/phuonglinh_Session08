#include <stdio.h>

int main() {
	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int rows = 3, cols = 3;
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		sum += arr[0][i];
		sum += arr[rows - 1][i];
	}
	for (int j = 0; i < cols; j++) {
		sum += arr[j][0];
		sum += arr[j][cols - 1];
	}
	printf("Tong cac phan tu tren duong bien cua mang la: %d.\n", sum);
	
	return 0;
}
