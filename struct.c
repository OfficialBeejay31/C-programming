#include <stdio.h>

struct Student{
  char name[20];
  int age;
  char gender;
};

int main(){
  struct Student s1;
  struct Student s2;

  printf("Enter your name: ");
  scanf("%s", s1.name);

  printf("Enter your age: ");
  scanf("%d", &s1.age);

  printf("Enter your gender(M or F): ");
  scanf(" %c", &s1.gender);

  printf("The student's name is %s, and the age is %d, and is of gender %c", s1.name, s1.age, s1.gender);

  return 0;
}
