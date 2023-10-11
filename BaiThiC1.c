//
// Created by ChienDC on 10/11/2023.
//
#include <stdio.h>

int calculate_sum(int a, int b) {
    return a + b;
}

int calculate_subtraction(int a, int b) {
    return a - b;
}

int calculate_multiplication(int a, int b) {
    return a * b;
}

float calculate_division(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

void display_menu() {
    printf("Calculation:\n");
    printf("============\n");
    printf("1. Input Number\n");
    printf("2. Calculate Sum\n");
    printf("3. Calculate Subtraction\n");
    printf("4. Calculate Multiplication\n");
    printf("5. Calculate Division\n");
    printf("6. Exit\n");
}

int main() {
//int BaiThi2(){
    int choice = 0;
    int num1 = 0;
    int num2 = 0;

    while (choice != 6) {
        display_menu();
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
        } else if (choice == 2) {
            int result = calculate_sum(num1, num2);
            printf("Sum: %d\n", result);
        } else if (choice == 3) {
            int result = calculate_subtraction(num1, num2);
            printf("Subtraction: %d\n", result);
        } else if (choice == 4) {
            int result = calculate_multiplication(num1, num2);
            printf("Multiplication: %d\n", result);
        } else if (choice == 5) {
            float result = calculate_division(num1, num2);
            printf("Division: %.2f\n", result);
        } else if (choice == 6) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice. Please enter a number from 1 to 6.\n");
        }
    }

    return 0;
}