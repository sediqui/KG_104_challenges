#include <stdio.h>

const double pi = 3.14159;
  
int main () {
  //1.show the following patterns just using print statements:
  // printf("        *\n");
  // printf("      * *\n");
  // printf("    * * *\n");
  // printf("  * * * *\n");
  // printf("* * * * *\n");

  // 2.show the following patterns using single print statement:
  // printf("*\n* *\n* * *\n* * * *\n* * * * *\n");
  // printf("* * * * *\n* * * *\n* * *\n* *\n*\n");
  // printf("        *\n      * *\n    * * *\n  * * * *\n* * * * *\n");

  // 3.create a program to input name of the person and respond with "welcome NAME to KG Coding":
  // char name[20];
  // printf("Enter your name: ");
  // scanf("%49s", name);
  // printf("Welcome %s to the MS Coding", name);

  // 4.Create a program to declare two integer variables, assign them values, and display their values.
  // int a = 5, b = 10;
  // printf("A value of a and b integer is : %d, %d", a, b);

  // 5.Create a program to declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator
  // int a;
  // float b;
  // double d;
  // char c;

  // printf("SizeOf int : %zu\n", sizeof(a));
  // printf("SizeOf float : %zu\n", sizeof(b));
  // printf("SizeOf double : %zu\n", sizeof(d));
  // printf("SizeOf char : %zu\n", sizeof(c));

  // 6.Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
  // char first_name[20];
  // char last_name[20];
  // int age;

  // printf("Enter your first name: ");
  // scanf("%19s", first_name);
  // printf("Enter your last name: ");
  // scanf("%19s", last_name);
  // printf("Enter your age: ");
  // scanf("%d", &age);
  // printf("your first name is: %s\n", first_name);
  // printf("your last name is: %s\n", last_name);
  // printf("your age is: %d\n", age);

  // 7.Create a program to print the area of a square by inputting its side length.
  // double side_length;
  // printf("Enter the side_length for area of a square: ");
  // scanf(" %lf", &side_length);
  // double area_of_a_square = side_length * side_length;
  // printf("area of a square is : %lf", area_of_a_square);

  // 8.Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
  // double radius, circumference;
  // printf("Enter a radius for circumference of a circle: ");
  // scanf("%lf", &radius);
  // circumference = 2 * pi * radius;
  // printf("circumference of a circle: %.2lf", circumference);

  // 9.Create a program to print the area of a circle by inputting its radius.
  // double radius, circle;
  // printf("Enter a radius for the area of a circle: ");
  // scanf("%lf", &radius);
  // circle = pi * (radius * radius);
  // printf("Area of a circle: %lf", circle);

  // power just for test
  // int num, power = 1, po;
  // printf("Enter a number for the power: ");
  // scanf("%d", &num);
  // printf("how much pow do you want: ");
  // scanf("%d", &po);
  // for (int i = 0; i < po; i++){
  //   power *= num;
  // }

  // printf("%d the pow %d is : %d", num, po, power);

  // 10.Create a program to swap two numbers.
  int a = 1, b = 2, temp;
  // printf("before swap: %d, %d\n", a, b);
  // temp = b;
  // b = a;
  // a = temp;
  // printf("after swap: %d, %d\n", a, b);
  printf("before swap: %d, %d\n", a, b);
  temp = a;
  a = b;
  b = temp;
  printf("after swap: %d, %d\n", a, b);


  return 0;
}