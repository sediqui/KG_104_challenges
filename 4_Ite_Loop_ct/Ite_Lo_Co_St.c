#include <stdio.h>
#include <math.h>

// const int multi = 10;
// int factorial(int fac){
//   int fact = 1;
//   for(int i = 1; i <= fac; i++){
//     fact *= i;
//   }
//   return fact;
// }
// GCD function (e.g., iterative version)
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// LCM function
// int lcm(int a, int b) {
//     int abs_a = (a > 0) ? a : -a;
//     int abs_b = (b > 0) ? b : -b;
//     if (abs_a == 0 || abs_b == 0) {
//         return 0;
//     }
//     return (abs_a * abs_b) / gcd(abs_a, abs_b);
// }
// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

int main()
{
  // 31.Develop a program that prints the multiplication table for the given number.
  // int num;
  // printf("Enter number for multiplication: ");
  // scanf("%d", &num);
  // for (int i = 1; i <= multi; i++){
  //   printf("multiplication of %d x %d = %d\n", num, i, num * i);
  // }

  // 32.Create a program to sum all odd numbers from 1 to a specified number N.
  // int num, sum = 0;
  // printf("Enter number for sum all numbers: ");
  // scanf("%d", &num);
  // for (int i = 1; i <= num; i++)
  // {
  //   // if (i % 2 != 0) odd continue
  //   if (i % 2 == 0) // even continue
  //   {
  //     continue;
  //   }
  //   sum += i;
  // }
  // printf("sum of all number is: %d", sum);

  // 33.Write a function that calculates the factorial of a given number.
  // int num, factorials;
  // printf("Enter number for sum all numbers: ");
  // scanf("%d", &num);
  // factorials = factorial(num);
  // printf("factorial of %d is %d", num, factorials);

  // 34.Create a program that computes the sum of the digits of an integer.
  // int digits, sum_of_digits = 0;
  // printf("Enter digits for sum all digits: ");
  // scanf("%d", &digits);
  // digits = (digits < 0)?-digits:digits;
  // while(digits > 0){
  //   digit = digits % 10;
  //   sum_of_digits += digit;
  //   digits /= 10;
  // }
  // for(int digit = digits % 10; digits > 0; digit = digits % 10){
  //   sum_of_digits += digit;
  //   digits /= 10;
  // }
  // printf("sum of all digits: %d", sum_of_digits);

  // 35.Create a program to find the Least Common Multiple (LCM) of two numbers.
  // int a, b;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // printf("Enter b number: ");
  // scanf("%d", &b);
  // printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
  // printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));
  // int a, b, min, max;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // printf("Enter b number: ");
  // scanf("%d", &b);
  // min = (a > b)?a:b;
  // max = a * b;
  // for (int i = min; i <= max; i++) {
  //   if (i % a == 0 && i % b == 0){
  //     printf("the LCM of %d and %d is %d", a, b, i);
  //     break;
  //   }
  // }

  // 36.Create a program to find the Greatest Common Divisor (GCD) of two integers.
  // int a, b;
  // printf("Enter a number: ");
  // scanf("%d", &a);
  // printf("Enter b number: ");
  // scanf("%d", &b);
  // // printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
  // // printf("LCM of %d and %d is: %d\n", a, b, lcm(a, b));
  // int min = (a > b)?a:b;
  // for (int i = min; i >= 1; i--)
  // {
  //   if(a % i == 0 && b % i == 0){
  //     printf("GCD of %d and %d is: %d\n", a, b, i);
  //     break;
  //   }
  // }

  // 37.Create a program to check whether a given number is prime using while.
  // int p;
  // printf("Enter a number: ");
  // scanf("%d", &p);
  // if (p == 0 || p == 1){
  //   printf("%d is not prime number", p);
  // }
  // else if (p % 2 != 0){
  //   printf("%d is a prime number", p);
  // }
  // else {
  //   printf("%d is not a prime number", p);
  // }
  // for (int i = 2; i < p; i++)
  // {
  //   if (p % i == 0){
  //     printf("%d is not a prime number.", p);
  //     return 0;
  //   }
  // }
  // printf("%d is a prime number.", p);

  // 38.Create a program to reverse the digits of a number.
  // int num, rev, sum = 0;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // for (int i = 1; i <= num; i)
  // {
  //   rev = num % 10;
  //   num /= 10;
  //   printf("%d", rev);
  // }
  // for (int i = 1; i <= num; i)
  // {
  //   rev = num % 10;
  //   sum = (sum + rev) * 10;
  //   num /= 10;
  // }
  // printf("%d", sum);
  // int num, rev = 0;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // int copy = num;
  // while(copy > 0){
  //   rev = (rev * 10) + (copy % 10);
  //   copy /= 10;
  // }
  // printf("%d", rev);

  // 39.Create a program to print the Fibonacci series up to a certain number.
  // int n, i;
  //   printf("Enter the number of terms: ");
  //   scanf("%d", &n);
  //   printf("Fibonacci Series: ");
  //   for (i = 0; i < n; i++) {
  //       printf("%d ", fibonacci(i));
  //   }
  //   printf("\n");
  // int n, first = 0, second = 1, next, i;
  // printf("Enter the number of terms: ");
  // scanf("%d", &n);
  // printf("Fibonacci Series: ");
  // for (i = 0; i < n; i++)
  // {
  //   if (i <= 1)
  //   {
  //     next = i;
  //   }
  //   else
  //   {
  //     next = first + second;
  //     first = second;
  //     second = next;
  //   }
  //   printf("%d ", next);
  // }
  // printf("\n");

  // 40.Create a program to check if a number is an Armstrong number.
  // int num, ornum, renum, res = 0, n = 0, copy;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // ornum = num;
  // copy = num;
  // while (ornum != 0)
  // {
  //   ornum /= 10;
  //   n++;
  // }
  // ornum = num;
  // while (ornum != 0)
  // {
  //   renum = ornum % 10;
  //   res += pow(renum, n);
  //   ornum /= 10;
  // }
  // printf("num: %d, res: %d, copy of num: %d\n", num, res, copy);
  // if (res == num)
  // {
  //   printf("%d is an Armstrong number.\n", num);
  // }
  // else
  // {
  //   printf("%d is not an Armstrong number.\n", num);
  // }

  // 41.Create a program to verify if a number is a palindrome.
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // int rev = 0, copy = num;
  // while(copy != 0){
  //   rev = (rev * 10) + (copy % 10);
  //   copy /= 10;
  // }
  // if (rev == num){
  //   printf("%d is a palindrome\n", rev);
  //   printf("%d and %d ara the same that why it is a palindrome\n", rev, num);
  // }
  // else{
  //   printf("%d is not a palindrome\n", rev);
  // }

  // 42.Create a program that print patterns:
  // *    * * * *          *
  // * *    * * *        * *
  // * * *    * *      * * *
  // * * * *    *    * * * *
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // for (int i = 1; i <= num; i++)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }
  // printf("\n");
  // for (int i = 1; i <= num; i++)
  // {
  //   for (int j = num; j >= i; j--)
  //   {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }
  // printf("\n");
  // for (int i = 1; i <= num; i++)
  // {
  //   for (int k = 0; k < num - i; k++)
  //   {
  //     printf("  ");
  //   }
  //   for (int j = 0; j < i; j++)
  //   {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }
  // for (int i = 1; i <= num; i++)
  // {
  //   // printf("\n");
  //   for (int k = 0; k < num - i; k++)
  //   {
  //     printf("  ");
  //   }
  //   for (int j = 0; j < i; j++)
  //   {
  //     printf("* ");
  //   }
  //   printf("\n");
  // }

  // 43.Create a program that prompts the user to enter a positive number. Use a do-while loop to keep asking for the number until the user enters a valid positive number.
  // int num;
  // do
  // {
  //   printf("Enter a positive number: ");
  //   scanf("%d", &num);
  // }while (num <= 0);
  // printf("now you enter a positive number.");
  // do
  // {
  //   printf("Enter a positive number: ");
  //   scanf("%d", &num);
  //   // num = (num >= 0)? num: -num;
  //   if (num > 0){
  //     printf("now you enter a positive number.");
  //     break;
  //   }
  // }while (1);

  // 44.Develop a program that calculates the sum of all numbers entered by a user until the user enters 0. The total sum should then be displayed.
  // int num, sum = 0;
  // do
  // {
  //   printf("Enter a number: ");
  //   scanf("%d", &num);
  //   // num = (num >= 0)? num: -num;
  //   sum += num;
  // }while (num != 0);
  // printf("Total sum of all numbers entered by a user: %d", sum);

  // 45.Create a program using for loop multiplication table for a number.
  // int num, to = 10;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // num = (num >= 0) ? num : -num;
  // for(int i = 1; i <= to; i++){
  //   printf("%d x %d = %d\n", num, i, i * num);
  // }

  // 46.Create a program using for to display if a number is prime or not.
  // int num, to = 10;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // // num = (num >= 0) ? num : -num;
  // for(int i = 2; i < num; i++){
  //   if (num % i == 0){
  //     printf("%d is not a prime number\n",num);
  //     break;
  //   }
  // }
  // printf("%d is a prime number\n",num);

  // 47.Create a program using continue to sum all positive numbers entered by the user; skip any negative number.
  // int num, sum = 0;
  // do
  // {
  //   printf("Enter a number: ");
  //   scanf("%d", &num);
  //   if (num < 0)
  //     continue;
  //   sum += num;
  // } while (num != 0);
  // printf("Total of all sums : %d", sum);

  // 48.Create a program using continue to print only even numbers using continue for odd numbers.
  // int num;
  // printf("Enter a number: ");
  // scanf("%d", &num);
  // for (int i = 1; i <= num; i++)
  // {
  //   if (i % 2 != 0)
  //     continue;
  //   printf("%d is even\n", i);
  // };

  // 49.Write a program that continuously reads integers from the user and prints their squares. use an infinite loop and a break statement to exit when a special number (e.g., -1) is entered.
  int num;
  while (1) {
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == -1)
      break;
    printf("square is: %d\n", num * num);
  };

  return 0;
}