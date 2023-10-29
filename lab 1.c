#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int id;
    float h , am;
    printf("Enter employees id:");
    scanf("%d",&id);
    printf("enter hours worked in a month:");                            //QUESTION NO:1
    scanf("%f",&h);
    printf("enter amount recieved per hour:");
    scanf("%f",&am);
    float salary = h*am;
    printf("the salary of %d",id);
    printf(" is %.2f\n",salary);
    return 0;
}

int main(){
   float h,w;
   printf("Enter the height of rectangle:");
   scanf("%f",&h);
   printf("Enter the width of a rectangle:");
   scanf("%f",&w);                                                        //QUESTION NO:2
   printf("The area of the rectangle is %.2f\n",h*w);
   printf("The perimeter of a rectangle is %.2f\n",2*h+w);
   return 0;
}

int main(){
    float height;
    printf("Enter the height of a person in cm:");                        //QUESTION NO:3
    scanf("%f",&height);
    if (height<150){
        printf("DWARF");

    } else if(height==150){
          printf("AVERAGE");
    }else if (height>=150){
          printf("TALL");
    }return 0;
    }

void decimalToBinary(int decimal) {
    if (decimal > 1) {                                        //QUESTION NO:4
        decimalToBinary(decimal / 2);
    }
    printf("%d", decimal % 2);
}

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Please enter a non-negative decimal number.\n");
    } else if (decimalNumber == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        decimalToBinary(decimalNumber);
        printf("\n");
    }

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;                                              //QUESTION NO:5
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to print the Fibonacci series up to the nth number
void printFibonacciSeries(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n to calculate the nth Fibonacci number and print the series: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative value of n.\n");
    } else {
        printf("Fibonacci Series up to the %dth number: ", n);
        printFibonacciSeries(n);

        int nthFib = fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, nthFib);
    }

    return 0;
}*/
