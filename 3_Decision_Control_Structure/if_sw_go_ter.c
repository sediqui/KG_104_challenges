#include <stdio.h>
  
int main () {
  // 19.Create a program that determines if a number is positive, negative, or zero.
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // if (a > 0){
  //   printf("positive");
  // }else if (a < 0){
  //   printf("negative");
  // }else{
  //   printf("zero");
  // }


  // 20.Create a program that determines if number is odd or even.
  // int a;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // if (a % 2 == 0){
  //   printf("even");
  // }else if (a % 2 == 1){
  //   printf("odd");
  // }else{
  //   printf("invalid");
  // }


  // 21.Create a program that determines the greatest of three numbers.
  // int a, b, c;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // printf("Enter b number: ");
  // scanf("%d", &b);
  // printf("Enter c number: ");
  // scanf("%d", &c);
  // if (a > b && a > c){
  //   printf("a value is greeter then all");
  // }else if (b > c){
  //   printf("b value is greeter then all");
  // }else if (c > b){
  //   printf("c value is greeter then all");
  // }else{
  //   printf("all of them are equal I Love it");
  // }


  // 22.Create a program that determines if a given year is a leap year (considering conditions like divisible by 4 but not 100, unless also divisible by 400.
  // int year;
  // printf("Enter a leap year: ");
  // scanf("%d", &year);
  // if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
  //   printf("this year is a leap year");
  // }else{
  //   printf("this year is not a leap year");
  // }


  // 23.Create a program that calculates grades based on marks:
  // A -> above 90%   B -> above 75%  C -> above 60%  D -> above 30% F -> below 30%
  // float marks;
  // printf("Enter a marks of student: ");
  // scanf("%f", &marks);
  // if(marks > 90){
  //   printf("A grads");
  // }
  // else if (marks > 75){
  //   printf("B grads");
  // }
  // else if (marks > 60){
  //   printf("C grads");
  // }
  // else if (marks > 45){
  //   printf("D grads");
  // }
  // else{
  //   printf("F grads your fail.");
  // }

  // 24.Create a program that categorize a person into different age groups:
  // child -> below 13   teen -> below 20  adult -> below 60  senior -> above 60
  // float age;
  // printf("Enter your age: ");
  // scanf("%f", &age);
  // if(age < 13){
  //   printf("child");
  // }
  // else if (age < 20){
  //   printf("teen");
  // }
  // else if (age < 60){
  //   printf("adult");
  // }
  // else{
  //   printf("senior.");
  // }

  // 25.Create a program to find the minimum of two numbers using ternary operator.
  // int a, b;
  // printf("Enter your a: ");
  // scanf("%d", &a);
  // printf("Enter your b: ");
  // scanf("%d", &b); 
  // (a > b)?printf("b value is a minimum number\n"):printf("a value is a minimum number\n");
  
  // 26.Create a program to find if the given number is even or odd using ternary operator.
  // int c;
  // printf("Enter a number: ");
  // scanf("%d", &c);
  // (c % 2 == 0)?printf("even\n"):printf("odd\n");


  // 27.Create a program to calculate the absolute value of a given integer using ternary operator.
  // int a, b;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // b = (a > 0)? a : -a ;
  // printf("absolute value %d", b);


  // 28.Create a program to Based on a student's score, categorize as "High", "Moderate", or "Low" using the ternary operator (e.g., High for scores > 80, moderate for 50-80, low for < 50).
  // int score;
  // printf("Enter a score: ");
  // scanf("%d", &score);
  // (score > 80)?printf("high"):(score > 50 && score < 80)?printf("moderate"):printf("low");


  // 29.Create a program to print the month of the year based on a number (1-12) input by the user.
  // 1-January, 2- February, 3-March, 4-April, 5-May, 6-June, 7-July, 8-August, 9-September, 10-October, 11-November, and 12-December
  // int num;
  // printf("Enter a number (1-12) to show you the month of the year: ");
  // scanf("%d", &num);
  // switch (num)
  // {
  // case 1:
  //   printf("January");
  //   break;
  // case 2:
  //   printf("February");
  //   break;
  // case 3:
  //   printf("March");
  //   break;
  // case 4:
  //   printf("April");
  //   break;
  // case 5:
  //   printf("May");
  //   break;
  // case 6:
  //   printf("June");
  //   break;
  // case 7:
  //   printf("July");
  //   break;
  // case 8:
  //   printf("August");
  //   break;
  // case 9:
  //   printf("September");
  //   break;
  // case 10:
  //   printf("October");
  //   break;
  // case 11:
  //   printf("November");
  //   break;
  // case 12:
  //   printf("December");
  //   break;    
  // default:
  //   printf("invalid option");
  //   break;
  // }

  
  // 30.Create a program to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition, subtraction, multiplication, and division.
  // char c;
  // float a, b;
  // printf("Enter a number: ");
  // scanf("%f", &a);
  // printf("Enter an operator: ");
  // scanf(" %c", &c);
  // printf("Enter b number: ");
  // scanf("%f", &b);
  // switch (c)
  // {
  // case '+':
  //   printf("%.2f + %.2f = %.2f", a, b, a + b);
  //   break;
  // case '-':
  //   printf("%.2f - %.2f = %.2f", a, b, a - b);
  //   break;
  // case '/':
  //   printf("%.2f / %.2f = %.2f", a, b, a / b);
  //   break;
  // case '*':
  //   printf("%.2f * %.2f = %.2f", a, b, a * b);
  //   break;   
  // default:
  //   printf("invalid option");
  //   break;
  // }


  

  return 0;
}