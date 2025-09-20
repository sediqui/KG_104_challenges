#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// 94.Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.
// typedef struct 
// {
//   char make[50];
//   char model[50];
//   char color[50];
//   int year;
// } Car;

typedef struct 
{
  int x, y;
} Point;


int main () {
  // 94.Create a program that dynamically allocates memory for a Car structure and then free it at the end of the program.
  // Car *car = (Car *)malloc(sizeof(Car));
  // if(car == NULL){
  //   printf("error memory not allocate");
  // return 1;
  // }
  // printf("Enter a car company name: ");
  // fgets(car->make, sizeof(car->make), stdin);
  // car->make[strcspn(car->make, "\n")] = '\0';
  // printf("Enter a car model name: ");
  // fgets(car->model, sizeof(car->model), stdin);
  // car->model[strcspn(car->model, "\n")] = '\0';
  // printf("Enter a car color: ");
  // fgets(car->color, sizeof(car->color), stdin);
  // car->color[strcspn(car->color, "\n")] = '\0';
  // printf("Enter a car year: ");
  // scanf("%d", &car->year);
  // printf("car company: %s, model: %s, color: %s, year: %d", car->make, car->model, car->color, car->year);
  // free(car);
  // car = NULL;

  // 95.Create a program that uses malloc to dynamically allocate an array for a specified number of float values entered by the user and then stores user-entered numbers into it.
  // int n = 5;
  // float *num = (float *)malloc(n * sizeof(float));
  // if(!num){
  //   printf("error");
  //   return 1;
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("now enter a float number: ");
  //   scanf("%f", &num[i]);
  // }
  // printf("here float number\n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%.2f\n", num[i]);
  // }
  // free(num);
  // num == NULL;

  // 96.Use calloc to allocate an array for a set of char characters representing sentence, ensuring all the memory is initialized to zero.
  // int n = 5;
  // char *arr = (char *)calloc(n, sizeof(char));
  // if(!arr){
  //   printf("error");
  //   return 1;
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("%c ", arr[i]);
  // }
  // free(arr);
  // arr = NULL;

  // 97.Allocate memory for a struct representing a Point with x and y coordinates, set some values, and then properly deallocate the memory using free.
  // int n = 2;
  // Point *points = (Point *)malloc(sizeof(Point));
  // if(!points){
  //   printf("error");
  //   return 1;
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("Enter x value: ");
  //   scanf("%d", &points[i].x);
  //   printf("Enter y value: ");
  //   scanf("%d", &points[i].y);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   printf("x value: %d, y value: %d\n ", points->x, points->y);
  // }
  // free(points);
  // points = NULL;

  // 98.Create an array using calloc and fill it with random numbers, then use realloc to shrink the array size by half and print the remaining numbers.
  srand(time(NULL));
  int n = 10;
  int *num = (int*)calloc(n, sizeof(int));
  if (!num)
  {
    printf("error of memory");
    return 1;
  }
  printf("befor updating: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");
  printf("changing: \n");
  for (int i = 0; i < n; i++)
  {
    num[i] = rand() % 100;
    // printf("Enter a number: ");
    // scanf("%d", &num[i]);
  }
  printf("after updating: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");
  printf("befor reallocating: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", num[i]);
  }
  printf("\n");
  n = n / 2;
  int *Rn = (int *)realloc(num, n * sizeof(int));
  if (!Rn) {
    printf("error memory problem");
    free(num);
    num = NULL;
    return 1;
  }
  num = Rn;
  // printf("reallocating: \n");
  // for (int i = 0; i < n; i++)
  // {
  //   printf("Enter a number: ");
  //   scanf("%d", &Rn[i]);
  // }
  // printf("\n");
  printf("after reallocating: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", Rn[i]);
  }
  printf("\n");
  free(Rn);
  Rn = NULL; 
  
  

  return 0;
}