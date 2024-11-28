#include <stdio.h> 

int main() {
	int arr[5] = {1,2,3,4,5};
	int n = 5;
	int phan_tu, kiem_tra = 0;
	printf("Nhap phan tu bat ki: ");
	scanf("%d", &phan_tu);
	for (int i = 0; i < n; i++) {
		if (arr[i] == phan_tu) {
			printf("Vi tri phan tu trong mang la %d.\n", i + 1);
			kiem_tra = 1;
			break;
		}
	} 
	if (!kiem_tra) {
		printf("Phan tu khong ton tai trong mang.\n");
	}
	return 0;
} 
