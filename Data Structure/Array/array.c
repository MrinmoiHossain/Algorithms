#include <stdio.h>
#define MAX_SIZE 10^7
//if you declare array globally then we can declare upto - 10^7 but in main funtion it will be - 10^6

//Declare Array ->data type will be: int, double, float, char
int arr[MAX_SIZE];

int n;				//final array size

void ReadArrayValue()
{
	int i = 0;
	printf("Type the array value\n");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
}

void PrintArray()
{
	int i = 0;
	printf("The Array: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void UpdateArray()
{
	printf("How many times you want to update array: ");
	int t;
	scanf("%d", &t);

	if(t > 0)
		printf("1-based: Position and Value\n");
	int i = 0, pos, val;
	for(i = 0; i < t; i++){
		scanf("%d %d", &pos, &val);
		--pos;
		
		if(pos >= 0 && pos <= n)
			arr[pos] = val;
		else
			printf("Invalid position\n"); 		
	}
}

void DeleteArray()
{
	printf("Delete Element\n");
	printf("1-based: Position\n");
	int index;
	scanf("%d", &index);
	
	int i = --index;

	if(index < 0 || index > n)
		printf("Invalid position\n");
	else{
		
		while(i < n - 1){
			arr[i] = arr[i + 1];
			i++;
		}
	}

	n--;
}

int main(void)
{
	printf("Say the array size: ");
	scanf("%d", &n);
	arr[n];				//know as Array declaration

	ReadArrayValue();	//know as Array Initialization
	PrintArray();		//know as Array Traversing

	UpdateArray();		//know as Array Update
	PrintArray();

	DeleteArray();		//know as Array Delete
	PrintArray();

   return 0;
}
