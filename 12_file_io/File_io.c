#include <stdio.h>
#include <string.h>

int main()
{
  // 99.Write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.
  // FILE *text = fopen("emails.txt", "a");
  // if (!text)
  // {
  //   printf("error");
  // }
  // char string[200];
  // fgets(string, sizeof(string), text);
  // puts(string);
  // for (size_t i = 0; i < sizeof(text); i++)
  // {
  //   printf("%c", text[i]);
  // }
  // fprintf(text, "i think is't work\n");

  // 100.Create a program that reads integers from a file and calculates their sum.
  // FILE *text = fopen("number.txt", "r");
  // if (!text)
  // {
  //   printf("error");
  // }
  // int temp;
  // int sum = 0;
  // while (fscanf(text, "%d", &temp) == 1)
  // {
  //   sum += temp;
  // }
  // printf("sum of all number: %d", sum);
  // fclose(text);
  // text == NULL;

  // 101.Write a program that copies one text file's contents to anther, stopping when it reaches EOF of the source file.
  // FILE *text = fopen("emails.txt", "r");
  // if (!text)
  // {
  //   printf("error");
  //   return 1;
  // }
  // FILE *copy = fopen("tocopy.txt", "w");
  // if (!copy)
  // {
  //   printf("error");
  //   fclose(text);
  //   return 1;
  // }
  // char temp;
  // char copy_file[100];
  // for (size_t i = 0; fscanf(text, "%c", &temp) != EOF; i++)
  // {
  //   copy_file[i] = temp;
  // }
  // while (1)
  // {
  //   char c = fgetc(text);
  //   if (c == EOF)
  //   {
  //     break;
  //   }
  //   fputc(c, copy);
  //   printf(".");
  // }
  // puts(copy_file);
  // fprintf(copy, copy_file);
  // fprintf(copy, copy_file);
  // char details[100];
  // char details_to_copy[100];
  // fgets(details, sizeof(details), text);
  // // printf("%s", details);
  // fprintf(copy, details);
  // fclose(text);
  // fclose(copy);
  // copy = text = NULL;

  // 102.Write a program that takes user Input and writes it to a file, ensuring each entry is on a new line.
  // FILE *text = fopen("emails.txt", "w");
  // if (!text)
  // {
  //   printf("error");
  // }
  // char string[20];
  // while (1)
  // {
  //   printf("Enter a string: ");
  //   fgets(string, sizeof(string), stdin);
  //   if (strcmp(string, "exit\n") == 0)
  //   {
  //     break;
  //   }
  //   fputs(string, text);
  // };
  // fclose(text);
  // char string[20];
  // printf("Enter a string: ");
  // fgets(string, sizeof(string), stdin);
  // fprintf(text, "%s", string);

  // 103.Develop a program that appends user input to the end of a log file each time it's run.
  // FILE *text = fopen("emails.txt", "a");
  // if (!text)
  // {
  //   printf("error");
  // }
  // char string[20];
  //  while (1)
  // {
  //   printf("Enter a string: ");
  //   fgets(string, sizeof(string), stdin);
  //   if (strcmp(string, "exit\n") == 0)
  //   {
  //     break;
  //   }
  //   fputs(string, text);
  // };
  // fclose(text);
  // printf("Enter a string: ");
  // fgets(string, sizeof(string), stdin);
  // fprintf(text, "%s", string);

  // 104.Create a program that performs both reading and writing operations on a fil called data.txt
  FILE *info = fopen("infos.txt", "a+");
  if (!info)
  {
    printf("error");
  }
  char string[20];
  //  while (1)
  // {
  //   printf("Enter a string: ");
  //   fgets(string, sizeof(string), stdin);
  //   if (strcmp(string, "exit\n") == 0)
  //   {
  //     break;
  //   }
  //   fputs(string, info);
  // };
  printf("Enter a string: ");
  fgets(string, sizeof(string), stdin);
  fprintf(info, "%s", string);
  // char infos[100];
  // fgets(infos, sizeof(infos), info);
  // fseek(info, 0, SEEK_END);
  // fputs(infos, info);
  // puts(infos);
  fclose(info);
  info = NULL;

  return 0;
}