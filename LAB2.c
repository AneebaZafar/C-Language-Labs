#include <stdio.h>
#include <stdlib.h>

/*int main()                                                               //QUESTION NO:1
{ int n,i,number,sum=0;
     printf("Enter the value of n:");
     scanf("%d",&n);
// Using For Loop
 printf("Using a for loop:");
for (i=1,number=1;i<=n;i++,number+=2){
    printf("%d", number);
    sum+=number;
} printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);


//Using While Loop
printf("using a while loop:\n");
i=1;
number=1;
sum=0;
while (i<=n){
   printf("%d", number);
   i++;
   sum+=number;
   number+=2;
} printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);

printf("Using a do-while loop:\n");
    i = 1;
    number = 1;
    sum = 0;
    do {
        printf("%d ", number);
        sum += number;
        i++;
        number += 2;
    } while (i <= n);
    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);
return 0;
}

int main() {                                                //QUESTION NO:2
    int n, i, j;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces before the asterisks
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

int compareStrings(const char *str1, const char *str2) {                             //QUESTION NO:3
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; // Strings are not equal
        }
        str1++;
        str2++;
    }

    // Check if both strings have reached the end simultaneously
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; // Strings are equal
    }

    return 0; // Strings are of different lengths
}

int main() {
    char string1[100], string2[100];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    if (compareStrings(string1, string2)) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    return 0;
}

int main() {                                                             //QUESTION NO:4
    char sentence[1000];
    int i;

    printf("Enter a sentence: ");
    gets(sentence);  // Input the sentence

    for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);  // Convert lowercase to uppercase
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);  // Convert uppercase to lowercase
        }
    }

    printf("After converting case: %s\n", sentence);

    return 0;
}

int main() {                                                          //QUESTION NO:5
    int array[100];
    int n, i, j, isUnique;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Loop through the array to find and print unique elements
    printf("Unique elements in the array: ");
    for (i = 0; i < n; i++) {
        isUnique = 1; // Assume the element is unique

        // Check if the current element is equal to any previous element
        for (j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                isUnique = 0; // The element is not unique
                break;
            }
        }

        if (isUnique) {
            printf("%d ", array[i]);
        }
    }

    printf("\n");

    return 0;
}


struct Distance {                                  //QUESTION NO:6
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If the sum of inches is greater than or equal to 12, convert it to feet and inches
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, sum;

    printf("Enter the first distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    printf("Enter the second distance in feet and inches:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    sum = addDistances(distance1, distance2);

    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;
}
