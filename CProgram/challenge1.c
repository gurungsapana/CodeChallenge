
/*Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.*/

#include<stdio.h>
#include<conio.h>

int Checker(int k, int array[], int n){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if (array[i] + array[j] == k){				
				return 1;
			}
		}
	}
	return 0;
}

void main(){
	int n, i, k;
	printf("Enter size of array:");
	scanf("%d",&n);
	int array[n];
	printf("Enter elements of the array:");
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	printf("Enter the number whose sum is required:");
	scanf("%d",&k);
	if(Checker(k, array, n)){
		printf("The value of k is obtained by adding any two of the elements.");
	}
	getch();
}

