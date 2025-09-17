#include <stdio.h>
#include <limits.h>
#define MILE 0.621371
// const float mile = 0.621371;

int main () {
  // 63.Create a program that converts a large number of kilometers to miles, using long or long long to store the distance.
  // long long kilometers; 
  // double Total_miles;
  // printf("Enter a kilometer to converted to mile: ");
  // scanf("%lld", &kilometers);
  // Total_miles = MILE * kilometers;
  // printf("kilometer convert to the mile: %.2lf", Total_miles);

  // 64.write a program to demonstrate the difference in range between long and long long by calculating the factorial of 20.
  // long l; 
  // long long ll;
  // long l_fac = 1;
  // long long ll_fac = 1;
  // printf("Enter a number: ");
  // scanf("%ld", &l);
  // printf("Enter a kilometer to converted to mile: ");
  // scanf("%lld", &ll);
  // for(int i = 1; i <= l; i++){
  //   l_fac *= i;
  // }
  // printf("total of long factorial: %ld\n", l_fac);
  // for(int i = 1; i <= l; i++){
  //   ll_fac *= i;
  // }
  // printf("total of long long factorial: %lld\n", ll_fac);

  // 65.Write a c program that initializes an unsigned int to its maximum possible value and an int to a negative number. Add 1 to both, and print the results to show how the unsigned int wraps around to 0, whereas the int remains negative due to overflow.
  unsigned int u = UINT_MAX;   // max possible unsigned int
    int s = -1;                  // a negative int

    printf("Initial values:\n");
    printf("Unsigned int: %u\n", u);
    printf("Signed int: %d\n\n", s);

    u = u + 1;   // wraps to 0
    s = s + 1;   // moves toward 0 (still valid, no wrap)

    printf("After adding 1:\n");
    printf("Unsigned int: %u\n", u);
    printf("Signed int: %d\n", s);

  return 0;
}