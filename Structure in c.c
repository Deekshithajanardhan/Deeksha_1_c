#include <stdio.h>
struct student {
char name[50];
int roll;
float marks;
};
int main(){
  struct student s1;
  printf("Enter name:");
    scanf("%s", s1.name);
  printf("Enter roll number:");
    scanf("%d", &s1.roll);
  printf("Enter marks:");
  scanf("%f", &s1.marks);
  printf("\nStudent Details:\n");
  printf("Name: %s\nRoll:%d\nMarks:%2f\n", s1.name, s1.roll, s1.marks);
  return 0;
}
