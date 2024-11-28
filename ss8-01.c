#include <stdio.h>

int main() {
	int arr[10];
	int n = 10;
	//Cach khac: printf("Nhap day so bat ki:\n");
    //for (int i = 0; i < n; i++) {
    //printf("Nhap phan tu %d: ", i + 1); 
    //scanf("%d", &arr[i]) 
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1; 
	} 
	printf("Day so dao nguoc lai la: \n"); 
	for (int i = n -1; i >= 0; i--) {
		printf("%d", arr[i]); 
	} 
	return 0; 
} 
