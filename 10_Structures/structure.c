#include <stdio.h>

// 88.Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.
typedef struct books
{
  char title[50];
  char author[50];
  float price;
} books;

// 90.Define a Car structure with fields for make, model, year, and color.
// typedef struct cars
// {
//   char make[50];
//   char model[50];
//   char color[50];
//   int year;
// } cars;

// 91.Pass a car structure to a function that prints out a description of the car in one complete sentence.
// void des_of_car(cars *car, int size){
//   for (int i = 0; i < size; i++)
//   {
//     printf("company: %s, model: %s, color: %s, year: %d\n", (car + i)->make, (car + i)->model,  (car + i)->color, (car + i)->year);
//   }
// }

// 92.Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
// typedef struct Students
// {
//   int id;
//   char name[50];
//   int year;
//   double gpa;
// } Students;
// void des_of_stu(Students *stu, int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("Students id: %d, name: %s, year: %04d, gpa: %.2lf\n", (stu + i)->id, (stu + i)->name, (stu + i)->year, (stu + i)->gpa);
//   }
// }

// 93.Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
typedef struct Students
{
  int id;
  char name[50];
  int year;
  double gpa;
  int no_of_book;
  books borrowed_book[3];
} Students;
void des_of_stu(Students *stu, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("Students id: %d, name: %s, year: %04d, gpa: %.2lf\n", (stu + i)->id, (stu + i)->name, (stu + i)->year, (stu + i)->gpa);
  }
}

int main()
{

  // 88.Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.
  // books b1 = {.title = "khan", .author = "david", .price = 15};
  // books b1 = {"khan", "david", 15};
  // printf("Enter title: ");
  // fgets(b1.title, sizeof(b1.title), stdin);
  // printf("Enter author: ");
  // fgets(b1.author, sizeof(b1.author), stdin);
  // printf("Enter a price: ");
  // scanf("%f", &b1.price);
  // printf("Title: %s", b1.title);
  // printf("Author: %s", b1.author);
  // printf("Price: %.2f$\n", b1.price);

  // 89.Initialize an array of Book structures with different data for each book using designated initializers.
  // books b[2] = {{.title = "khan", .author = "david", .price = 15}, {"khans", "davids", 16}};
  // for (int i = 0; i < 2; i++)
  // {
  //   printf("book title: %s, book author: %s and book price: %.2f\n", b[i].title, b[i].author,  b[i].price);
  // }

  // 90.Define a Car structure with fields for make, model, year, and color.
  // cars c[2] = {{.make = "Toyota", .model = "camry", .color = "white", .year = 2011}, {"Toyota", "corolla", "white", 2011}};
  // for (int i = 0; i < 2; i++)
  // {
  //   printf("company: %s, model: %s, color: %s, year: %d\n", c[i].make, c[i].model,  c[i].color, c[i].year);
  // }

  // 91.Pass a car structure to a function that prints out a description of the car in one complete sentence.
  // des_of_car(c, 2);

  // 92.Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
  // Students c[2] = {{.id = 1, .name = "ahmad", .year = 2025, .gpa = 4.01}, {2, "khan", 2024, 1.50}};
  // des_of_stu(c, 2);

  // 93.Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
  Students c[2] = {{.id = 1, .name = "ahmad", .year = 2025, .gpa = 4.01}, {2, "khan", 2024, 1.50}};
  des_of_stu(c, 2);

  return 0;
}