#include <stdio.h>

int main()
{
    char Name[100], Branch[100], Division[100], College[100], Mobile_Number[15];
    float Marks;

    printf("Enter Your Name: ");
    scanf(" %99[^\n]", Name);

    printf("Enter Your Mobile Number: ");
    scanf("%14s", Mobile_Number);

    printf("Enter Your Branch: ");
    scanf("%99s", Branch);

    printf("Enter Your Division: ");
    scanf("%99s", Division);

    printf("Enter College Name: ");
    scanf(" %99[^\n]", College);

    printf("Enter Your Marks: ");
    scanf("%f", &Marks);

    printf("\n----- Student Details -----\n");
    printf("Name          : %s\n", Name);
    printf("Mobile Number : %s\n", Mobile_Number);
    printf("Branch        : %s\n", Branch);
    printf("Division      : %s\n", Division);
    printf("College       : %s\n", College);
    printf("Marks         : %.2f\n", Marks);

    return 0;
}