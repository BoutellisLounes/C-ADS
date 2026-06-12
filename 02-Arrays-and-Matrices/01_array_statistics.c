#include<stdio.h>
#define N 10

int main(){
	
	int T[N];	
	int j, sum, maximum, minimum;
	
	//Reading integers
	for (j=0; j<N; j++){
		printf("Enter the %d th element : ", j+1);
		scanf("%d", &T[j]);
	}
	
	//Initializing variables
	maximum=T[0];
	minimum=T[0];
	sum=T[0];
	
	//Calculating minimum, maximum and sum
	for (j=1; j<N; j++){
		sum += T[j];
		
		if ( maximum<T[j] ) {
			maximum=T[j];
		}
		
		if ( minimum>T[j] ) {
			minimum=T[j];
		}
	}
	
	//Displaying results
	printf("Minimum : %d\n", minimum);
	printf("Maximum : %d\n", maximum);
	printf("Sum : %d\n", sum);
	printf("Average :%.2f\n", (float)sum/N);
	
	return 0;
}
