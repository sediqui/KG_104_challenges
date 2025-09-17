#include <stdio.h>
#include <math.h>
// #include <time.h>

// // 50.Write a function named greet that print "Hello, world!" when called.
// void Greet() {
//   printf("Hello, world!\n");
// };
// // 51.Write a function that adds that takes 4 int parameters and returns the sum.
// int sum(int a, int b, int c, int d) {
//   return a + b + c + d;
// };
// // 52.Define a function square that takes an int and returns its square.
// int square(int a) {
//   return a * a;
// };
// // 53.Call a function print_date that prints the current date. Define the function without any parameters.
// void print_date() {
//   time_t t = time(NULL);
//   struct tm *tm_info = localtime(&t);
//       printf("%04d-%02d-%02d : %02d-%02d-%02d\n",
//            tm_info->tm_year + 1900,   // years since 1900
//            tm_info->tm_mon + 1,       // months since January
//            tm_info->tm_mday,         // day of month
//            tm_info->tm_hour,         // day of month
//            tm_info->tm_min,         // day of month
//            tm_info->tm_sec);         // day of month
// };
// float max(float a, float b) {
//   return a > b? a: b;
// };

// 55.demonstrate with a function increment that the original integer passed to it does not change after incrementing it inside the function.
// int inc (int b) {
//   b++;
//   printf("in function: %d\n", b);
// }

// 56.Call a function get_average that takes five int numbers and returns the average.
// float get_average (float a, float b, float c, float d, float e) {
//   float average = (a + b + c + d + e) / 5;
//   return average;
// }

// 57.Create a program using recursion to display the Fibonacci series up to a certain number.
// int Fibonacci (int a) {
//   a = a < 0 ? -a: a;
//   if (a <= 1 && a >= 0)
//   {
//     return a;
//   }
  
//   return Fibonacci(a - 1) + Fibonacci(a - 2);
// }

// 58.Create a program using recursion to check if a number is a armstrong using recursion.
// int countDigits(int num) {
//     if (num == 0) return 0;
//     return 1 + countDigits(num / 10);
// }

// // recursive function to compute sum of powers of digits
// int armstrongSum(int num, int power) {
//     if (num == 0) return 0;
//     int digit = num % 10;
//     return pow(digit, power) + armstrongSum(num / 10, power);
// }

// 58.Create a program using recursion to check if a number is a palindrome using recursion.
int reverse(int num, int rev) {
    if (num == 0) return rev;
    return reverse(num / 10, rev * 10 + num % 10);
}

int main () {
  // Greet();
  // int sum_total = sum(12, 12, 12, 12);
  // printf("sum total %d\n",sum_total);
  // int squares = square(12);
  // printf("12 square is: %d \n",squares); 
  // print_date();  
  // float maxs = max(12.3, 12.4);
  // printf("max value is: %.2f \n", maxs);
  // int a = 2;
  // printf("before: %d\n", a);
  // inc(a);
  // printf("after: %d\n", a);
  // float avg = get_average(1, 2, 3, 4, 5);
  // printf("average of a b c d e is : %.2f", avg);
  // int n = 15, Fib, f = 0 , s = 1;
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%d\t", Fibonacci(i));
  // }
  // printf("\n");
  // for (int i = 0; i < n; i++)
  // {
  //   if (i <= 1)
  //   {
  //     Fib = i;
  //   }
  //   else{
  //     Fib = f + s;
  //     f = s;
  //     s = Fib;
  //   }
  //   printf("%d ", Fib);
  // }
  // printf("\n");

  // .Create a program using recursion to check if a number is a armstrong using recursion.
  // int arm, or, re, res = 0, n = 0;
  // printf("Enter an armstrong number: ");
  // scanf("%d", &arm);
  // or = arm;
  // while ( or != 0){
  //   or /= 10;
  //   n++;
  // }
  // or = arm;
  // while (or != 0)
  // {
  //   re = or % 10;
  //   res += pow(re, n);
  //   or /= 10;
  // }
  // if (res = arm) {
  //   printf("%d is an armstrong number.\n", res);
  // }
  // else {
  //   printf("%d is not an armstrong number.\n", res);
  // }
  
  // int num;
  //   printf("Enter a number: ");
  //   scanf("%d", &num);

  //   int digits = countDigits(num);
  //   int sum = armstrongSum(num, digits);

  //   if (sum == num)
  //       printf("%d is an Armstrong number.\n", num);
  //   else
  //       printf("%d is not an Armstrong number.\n", num);
  
  // int num, rev;
  //   printf("Enter a number: ");
  //   scanf("%d", &num);

  //   rev = reverse(num, 0);

  //   if (rev == num)
  //       printf("%d is a Palindrome.\n", num);
  //   else
  //       printf("%d is not a Palindrome.\n", num);

  

  return 0;
}