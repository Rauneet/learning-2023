#include <stdio.h>
int main() {
  int roll_no;
  char name[100];
  int physics, math, chemistry;
  float total, percentage;
  printf("Enter the roll no: ");
  scanf("%d", &roll_no);
  printf("Enter the name of the student: ");
  scanf("%s", name);
  printf("Enter the marks of Physics, Math and Chemistry: ");
  scanf("%d%d%d", &physics, &math, &chemistry);
  total = physics + math + chemistry;
  percentage = total / 3 * 100;
  printf("Roll No: %d\n", roll_no);
  printf("Name: %s\n", name);
  printf("Marks in Physics: %d\n", physics);
  printf("Marks in Math: %d\n", math);
  printf("Marks in Chemistry: %d\n", chemistry);
  printf("Total Marks: %d\n", total);
  printf("Percentage: %.2f%%\n", percentage);
  return 0;
}
