#include<stdio.h>

int cube(num) 
{
    return num * num * num;
}

int main() 
{
    int number, result;

    printf("Enter any number: ");
    scanf("%d", &number);

    result = cube(number);
    printf("Cube is: %d\n", result);

}
