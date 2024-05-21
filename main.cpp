#include <iostream>

void menu(void) {
    printf("Select an option:\n");
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("0 - END\n");
}

void enterNumbers(int *number1, int *number2) {
    printf("Enter first number: ");
    scanf("%d", number1);
    printf("Enter second number: ");
    scanf("%d", number2);
}

int main() {
    int option = 0;
    int number1 = 0;
    int number2 = 0;
    int result = 0;
    int modulo = 0;

    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:{
                enterNumbers(&number1, &number2);
                result = number1 + number2;
                printf("%d + %d = %d\n", number1, number2, result);
                break;}
            case 2:{
                enterNumbers(&number1, &number2);
                result = number1 - number2;
                printf("%d - %d = %d\n", number1, number2, result);
                break;}
            case 3:{
                enterNumbers(&number1, &number2);
                result = number1 * number2;
                printf("%d * %d = %d\n", number1, number2, result);
                break;
            }
            case 4:{
                enterNumbers(&number1, &number2);
                if (number2!= 0) {
                    result = number1 / number2;
                    printf("%d / %d = %d\n", number1, number2, result);
                    modulo = number1 % number2;
                    printf("reszta wynosi: %d\n", modulo);
                } else {
                    if (number1 == 0) {
                        printf("%d / %d = NaN\n", number1, number2);
                    } else if (number1 > 0) {
                        printf("%d / %d = +INF\n", number1, number2);
                    } else {
                        printf("%d / %d = -INF\n", number1, number2);
                    }
                }
                break;
            }
            default:
                printf("Choose the right number\n");
        }
    } while (option != 0);

    return 0;
}