#include <stdio.h>
int main() {
  float num1, num2, result;
  char operator;
  printf("Enter Number1: ");
  scanf("%f", &num1);
  printf("Enter the operator: ");
  scanf(" %c", &operator);
  printf("Enter Number2: ");
  scanf("%f", &num2);
  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.");
      return 0;
  }
  printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

  return 0;
}
