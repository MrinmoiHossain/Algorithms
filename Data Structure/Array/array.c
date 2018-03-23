#include <stdio.h>
#define MAX_SIZE 10^7
//if you declare array globally then we can declare upto - 10^7 but in main funtion it will be - 10^6

//Declare Array ->data type will be: int, double, float, char
int arr[MAX_SIZE];

void ReadArrayValue(int n)
{
	int i = 0;
	printf("Type the array value\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
}

void PrintArray(int n)
{
	int i = 0;
	printf("The Array: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void UpdateArray(int m)
{
	printf("How many times you want to update array: ");
	int n;
	scanf("%d", &n);

	
	printf("Position and Value\n");
	int i = 0, pos, val;
	for(i = 0; i < n; i++){
		scanf("%d %d", &pos, &val);
		--pos;
		
		if(pos >= 0 && pos <= m)
			arr[pos] = val;
		else
			printf("Invalid position\n"); 		
	}
}

int main(void)
{
    int n;
	printf("Say the array size: ");
	scanf("%d", &n);

	arr[n];				//know as Array declaration

	ReadArrayValue(n);	//know as Array Initialization
	PrintArray(n);		//know as Array Traversing

	UpdateArray(n);		//know as Array Update
	PrintArray(n);

   return 0;
}
