#include <stdio.h>

int bit_operations(int num, int oper_type) {
  // Check the operation type
  if (oper_type == 1) {
    // Set the 1st bit
    num |= (1 << 0);
  } else if (oper_type == 2) {
    // Clear the 31st bit
    num &= ~(1 << 31);
  } else if (oper_type == 3) {
    // Toggle the 16th bit
    num ^= (1 << 16);
  } else {
    // Invalid operation type
    return -1;
  }

  // Return the result
  return num;
}

int main() {
  int num, oper_type;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Enter an operation type (1 to set the 1st bit, 2 to clear the 31st bit, 3 to toggle the 16th bit): ");
  scanf("%d", &oper_type);
  int result = bit_operations(num, oper_type);
  if (result == -1) {
    printf("Invalid operation type\n");
  } else {
    printf("The result is %d\n", result);
  }

  return 0;
}
