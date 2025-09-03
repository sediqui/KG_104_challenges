#include <stdio.h>

int powers(int num, int po){
  int power = 1;
  for (int i = 0; i < po; i++){
    power *= num;
  }
  return power;
}

int main()
{
  // 11.Create a program that takes two numbers and shows result of all arithmetic operators (+, -, *, /, %).
  // float a = 23, b = 17;
  // printf("a + b = %.2f\n", a + b);
  // printf("a - b = %.2f\n", a - b);
  // printf("a / b = %.2f\n", a / b);
  // printf("a * b = %.2f\n", a * b);
  // printf("a %% b = %d\n", (int)a % (int)b);

  // 12.Given an integer value, convert it to a floating-point value and print both.
  // int a = 1.8, b = 2.2;
  // printf("%.2f, %.2f", (float)a, (float)b);

  // 13.Create a program to calculate product of two floating points numbers.
  // float a, b, product;
  // printf("Enter a floating point a number: ");
  // scanf("%f", &a);
  // printf("Enter a floating point b number: ");
  // scanf("%f", &b);
  // product = a * b;
  // printf("Product of a * b is: %.2f", product);

  // 14.Create a program to calculate Perimeter of a rectangle.
  // Perimeter of rectangle ABCD = A+B+C+D
  // float length, width, primeter;
  // printf("Enter a length: ");
  // scanf("%f", &length);
  // printf("Enter a width: ");
  // scanf("%f", &width);
  // primeter = 2 * (length + width);
  // printf("primeter of a rectangle: %.2f", primeter);
  // float a, b, c, d, primeter;
  // printf("Enter value of a: ");
  // scanf("%f", &a);
  // printf("Enter value of b: ");
  // scanf("%f", &b);
  // printf("Enter value of c: ");
  // scanf("%f", &c);
  // printf("Enter value of d: ");
  // scanf("%f", &d);
  // primeter = (a + b + c + d);
  // printf("primeter of a rectangle: %.2f", primeter);

  // 15.Create a program to calculate the Area of a Triangle.
  // Area of triangle = 1/2*B*H
  // double base, height, triangle;
  // printf("Enter the base fo triangle: ");
  // scanf("%lf", &base);
  // printf("Enter the height fo triangle: ");
  // scanf("%lf", &height);

  // triangle =  0.5 * height * base;
  // printf("Area of a Triangle is : %.2lf\n", triangle);
  // triangle = (height * base) / 2;
  // printf("Area of a Triangle is : %.2lf\n", triangle);

  // 16.Create a program to calculate simple interest.
  // Simple Interest = (P x T x R)/100
  // double Principal, Rate, Time, Interest;
  // printf("Enter Principal: ");
  // scanf("%lf", &Principal);

  // printf("Enter Rate of Interest: ");
  // scanf("%lf", &Rate);

  // printf("Enter Time (in years): ");
  // scanf("%lf", &Time);

  // Interest = (Principal * Rate * Time) / 100;

  // printf("Simple Interest = %.2f\n", Interest);


  // 17.Create a program to calculate Compound interest.
  // Compound Interest = P(1 + R/100)t
  // double Principal, Rate, Num, Time, pra, po, com_in, to;
  // // int num, po;
  // printf("Enter a Principal: ");
  // scanf("%lf", &Principal);
  // printf("Enter Rate of Interest: ");
  // scanf("%lf", &Rate);
  // printf("Enter a number: ");
  // scanf("%lf", &Num);
  // printf("Enter Time (in years): ");
  // scanf("%lf", &Time);
  // to = Rate / Num;
  // pra = Principal * (1 + to);
  // po = Num * Time;
  // com_in = powers(pra, po);
  // printf("Compound Interest is: %.2lf", com_in);
  
  // 18.Create a program to convert Fahrenheit to Celsius
  // C = (F - 32) x 5/9
  // float f, c;
  // printf("Enter f: ");
  // scanf("%f", &f);
  // c = (f - 32) * (5.0/9.0);
  // printf("Celsius: %f", c);



  return 0;
}