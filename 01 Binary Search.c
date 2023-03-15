#include <stdio.h>

int search(int arr[], int l, int r, int x) {
	while (l<= r) {
		int mid = l + (r - l) / 2;
		
		if (arr[mid] == x)
		return mid;
		
		if (arr[mid] > x)
		r = mid - 1;
		
		else 
		l = mid + 1;
	}
	return -1;
}

int main () {
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	int n = sizeof(arr) / sizeof (arr[0]);
	int x;
	
	printf ("masukan halaman yang ingin dicari : ");
	scanf ("%d",&x);
	int result = search(arr, 0, n -1, x);
	
	if (result == -1)	
		printf("halaman yang dicari tidak ditemukan di index array");
		
	else 
		printf ("halaman %d ada pada index ke-%d pada array", x, result);
		
	return 0;
}

