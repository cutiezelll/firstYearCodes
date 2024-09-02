#include <stdio.h>

int main()
{
    int A = 0, B = 0; 

    //for A
    printf("Enter number for A:"); 
    scanf("%d", &A);

    //for B
    printf("Enter number for B:"); 
    scanf("%d", &B);

    //Display the entered values of A & B
    printf("A: %d B: %d\n", A, B); 
    

    // Calculation for the sum of A and B
    int sum = A + B; 
    
    // Display the sum of A and B
    printf("The sum of A and B is %d", sum); 
    return 0;
}