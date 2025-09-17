#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
// void uppercase(char str[], int size)
// {
//   // int len = strlen(str);
//   for (int i = 0; i < size; i++)
//   {
//     if (str[i] >= 97)
//     {
//       // printf("character: %c\n", str[i]);
//       // printf("character int: %d\n", str[i]);
//       str[i] -= 32;
//       // printf("character: %c\n", str[i]);
//       // printf("character int: %d\n", str[i]);
//     }
//     // printf("\n");
//   }
// }
// int lowercase(char str[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     if (str[i] < 97 && str[i] >= 65)
//     {
//       str[i] += 32;
//     }
//   }
// }
// void print_str(char str[], int len)
// {
//   for (int i = 0; i < len; i++)
//   {
//     printf("%c", str[i]);
//   }
//   printf("\n");
// }
// void reverse (char str[], int len) {
//   for (int i = len; i >= 0; i--)
//   {
//     printf("%c", str[i]);
//   }
// }

// int is_palindrome(char arr[])
// {
//   int len = strlen(arr);
//   for (int i = 0; i < len / 2; i++)
//   {
//     if (arr[i] != arr[len - 1 - i])
//     {
//       return 0;
//     }
//   }
//   return 1;
// }

int main()
{
  // 78.Read a line of text from the user using fGets and then print it using puts.
  // char str[100];
  // printf("Enter a string of character: ");
  // fgets(str, sizeof(str), stdin);
  // str[strcspn(str, "\n")] = '\0';
  // puts(str);
  // 79.Use printf with format specifiers to format and print a date string (day, month, year).
  // int day = 11, month = 9, year = 2025;
  // printf("date: %02d-%02d-%04d", day, month, year);
  // 80.Write a program to convert an input string to uppercase.
  // char a = 'a';
  // char A = 'A';
  // printf("a: %c, A: %c", a - 32, A + 32);
  // char str[] = "MahMood";
  // int len = strlen(str);
  // for (int i = 0; i < len; i++)
  // {
  //   printf("%c", str[i]);
  // }
  // printf("\n");
  // uppercase
  // print_str(str, len);
  // uppercase(str, len);
  // print_str(str, len);
  // for (int i = 0; i < len; i++)
  // {
  //   printf("%c", str[i]);
  // }
  // printf("\n");
  // lowercase
  // print_str(str, len);
  // lowercase(str, len);
  // print_str(str, len);
  // 81.Create a simple text-based user login system that compares a stored password string using str_cmp.
  // char *email = "sayedmahmood843@gmail.com";
  // char *password = "sayed12312";
  // char emails[50];
  // printf("Enter you email: ");
  // fgets(emails, sizeof(emails), stdin);
  // remove_newline(emails);
  // char passwords[50];
  // printf("Enter you password: ");
  // fgets(passwords, sizeof(passwords), stdin);
  // remove_newline(passwords);
  // if (strcmp(email, emails) == 0 && strcmp(password, passwords) == 0)
  // {
  //   printf("you are login");
  // }
  // else{
  //   printf("you are not login");
  // }
  // 82.Use a 2-D character array to store and display a tix-tax-toe board.
  // char ttt[3][3] = {{'o', 'x', 'o'},{'x', 'o', 'o'},{'o', 'o', 'x'}};
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     printf("%c ", ttt[i][j]);
  //   }
  //   printf("\n");
  // }
  // 83.Write a function that takes a string and reverses it in place.
  // char str[] = "hello_world";
  // int len = sizeof(str);
  // reverse(str, len);

  // 84.Implement a trim function that removes leading and trailing spaces from a string.
  // char str[] = "    name is mahmood    ";
  // int len = strlen(str);
  // int start = 0;
  // int end = len - 1;
  // while (str[start] == ' ')
  // {
  //   start++;
  // }
  // while (str[end] == ' ')
  // {
  //   end--;
  // }
  // int l = end - start + 2;
  // int new_str[l];
  // int i = 0;
  // while (i < l)
  // {
  //   new_str[i] = str[i + start];
  //   i++;
  // }
  // new_str[i - 1] = '\0';
  // for (int j = 0; j < l; j++)
  // {
  //   printf("%c", new_str[j]);
  // }
  // printf("\nthe end of the code");

  // 85.Create a program that checks if a given string is a palindrome (the same forwards and backwards) and outputs the result.
  // char str1[10] = "saas";
  // int len = strlen(str1);
  // char str2[10];
  // for (int j = len, k = 0; j > 0; j--)
  // {
  //   str2[k] = str1[j - 1];
  //   k++;
  // }
  // if (strcmp(str1, str2) == 0)
  // {
  //   printf("these character are palindrome");
  // }
  // else{
  //   printf("these character are not palindrome");
  // }
  // char str1[] = "saas";
  // if (is_palindrome(str1))
  // {
  //   printf("these character are palindrome");
  // }
  // else{
  //   printf("these character are not palindrome");
  // }
  // char str1[10] = "saas";
  // char str2[10];
  // int len = strlen(str1);
  // int m = 0;
  // for (int n = len; n > 0; n--)
  // {
  //   str2[m] = str1[n - 1];
  //   m++;
  // }
  // str2[m] = '\0';
  // for (int i = 0; i < len / 2; i++)
  // {
  //   int temp = str1[i];
  //   str1[i] = str1[len - 1 - i];
  //   str1[len - 1 - i] = temp;
  // }
  // if (strcmp(str1, str2) == 0)
  // {
  //   printf("these character are palindrome");
  // }
  // else
  // {
  //   printf("these character are not palindrome");
  // }

  // 86.Create a program using do-while to find password checker until a valid password is entered.
  // const char *password = "sayed123";
  // char passwords[10];
  // int temp = 0;
  // do
  // {
  //   if (temp > 0)
  //   {
  //     printf("wrong password try again\n");
  //   }
  //   printf("Enter your password to access: ");
  //   scanf("%9s", passwords);
  //   temp++;
  // } while (strcmp(password, passwords) != 0);
  // printf("after %d try you enter the right one\n", temp);
  // printf("now you can access");

  // 87.Create a program using break to read inputs from the user in a loop and break the loop if a specific keyword (like "exit") is entered.
  // char name[50];
  // while (1)
  // {
  //   printf("Enter your name: ");
  //   fgets(name, sizeof(name), stdin);
  //   // remove_newline(name);
  //   name[strcspn(name, "\n")] = '\0';
  //   if (strcmp(name, "exit") == 0)
  //   {
  //     break;
  //   }
  //   printf("your name is %s\n", name);
  // }

  

  return 0;
}