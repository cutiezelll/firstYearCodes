/*
Name: Zelon Estimo
Course: BSIT -1
Activity 4: Create a program that will prompt the user to ask
the number between 1-5 and do the following:
a.) if number is 1, print "You selected #1"
b.) if number is 2, print "Welcome to #3"
c.) if number is 3, print "Hello World"
d.) if number is 4, print "All for one, One for all"
e.) if number is 5, print "Thank you!"
*/

#include<stdio.h>
void main()
{
    int number =0;
    printf("Enter Number from 1-5:");
    scanf("%d",& number);

    switch (number)
    {
        case 1:
        number =1;
        printf("You Selected #1");
        break;

        case 2:
        number =2;
        printf("Welcome to #3");
        break;

        case 3:
        number =3;
        printf("Hello World");
        break;

        case 4:
        number =4;
        printf("All for one, One for all");
        break;

        case 5:
        number =5;
        printf("Thank you!");
        break;

        default:
        printf("Invalid Number");
        break;
    }

}   
