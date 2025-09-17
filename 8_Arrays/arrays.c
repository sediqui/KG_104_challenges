#include <stdio.h>

// void swaps(int *first, int *second) {
//   int temp = *first;
//   *first = *second;
//   *second = temp; 
// }
// void print_arr (int arr[], int size) {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%d ", arr[i]);
//   }
// }
// void reverse (int arr[], int size) {
//   for (int i = 0; i < size / 2; i++)
//   {
//     swaps(&arr[i], &arr[size - 1 - i]);
//   }
// }

// merge sorting
// void merge(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (int i = 0; i < n1; i++) L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) arr[k++] = L[i++];
//         else arr[k++] = R[j++];
//     }
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }
// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }
// int arr[] = {5, 2, 9, 1, 7, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     mergeSort(arr, 0, n - 1);
//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);

// bubble sorting
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void copy_arr (char *arr, int size, char *new_arr) {
//   for (int i = 0; i < size; i++)
//   {
//     // new_arr[i] = arr[i];
//     // *new_arr = *arr;
//     // new_arr++;
//     // arr++;
//     *(new_arr + i) = *(arr + i);
//   }  
// }

// void printf_arr (int *arr, int size) {
//   for (size_t i = 0; i < size; i++)
//   {
//     printf("%d ", arr[i]);
//   }
// }

// void merge_sorted_array(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3){
//   int i = 0, j = 0, k = 0;
//   while(k < size3){
//     // if(arr1[i] < arr2[j]) {
//     //   arr3[k] = arr1[i++];
//     // }
//     // else if(i == size1 ) {
//     //   arr3[k] = arr1[i++];
//     // }
//     // else if(j == size2) {
//     //   arr3[k] = arr2[j++];
//     // }
//     // else {
//     //   arr3[k] = arr2[j++];
//     // }
//     // if (i == size1 || (j < size2 && arr2[j] < arr1[i]))
//     // {
//     //   arr3[k] = arr2[j++];
//     // }else
//     // {
//     //   arr3[k] = arr1[i++];
//     // }
//     if (j == size2 || (i < size1 && arr1[i] < arr2[j]))
//     {
//       arr3[k++] = arr1[i++];
//     }else
//     {
//       arr3[k++] = arr2[j++];
//     }    
//     // k++;
//   }
// }

int main () {
  // 66.Create a program to find the sum and average of all elements in an array.
  // int n = 5;
  // int arr[5] = {1, 2, 3, 4, 5};
  // int sum = 0;
  // float avg;
  // for (int i = 0; i < 5; i++)
  // {
  //   sum += arr[i];
  // }
  // avg = sum / 5.0;
  // printf("the sum of all elements: %d\n", sum);
  // printf("the average of all elements: %.2f\n", avg);

  // 67.Create a program to find number of occurrences of an element in an array.
  // int arr[] = {1, 2, 3, 2, 3, 2, 3, 4, 5, 5, 1, 3, 4, 4, 1};
  // int time = 0;
  // int n;
  // printf("Enter a number to find occurrences: ");
  // scanf("%d", &n);
  // for (int i = 0; i < 15; i++)
  // {
  //   if(arr[i] == n){
  //     time++;
  //   }
  // }
  // printf("%d number repeats: %d times\n", n, time);

  // 68.Create a program to find the maximum and minimum element in an array.
  // this one is wrong!
  // int arr[] = {1, 2, 3, 2, 3, 2, 3, 4, 5, 5, 1, 3, 4, 4, 1};
  // int minimum, maximum;
  // for (int i = 0; i < 15; i++)
  // {
  //   if(arr[i] > arr[i + 1]){
  //     maximum = arr[i];
  //   }
  //   else {
  //     minimum = arr[i];
  //   }
  // }
  // printf("maximum number: %d\n", maximum);
  // printf("minimum number: %d\n", minimum);
  // this one is awesome.
  // int arr[] = {1, 2, 3, 2, 3, 2, 3, 0, 5, 5, 1, 3, 4, 4, 1};
  // int minimum = arr[0], maximum = arr[0];
  // for (int i = 0; i < 15; i++)
  // {
  //   if(maximum < arr[i]) {
  //     maximum = arr[i];
  //   }
  //   if (minimum > arr[i]) {
  //     minimum = arr[i];
  //   }
  // }
  // printf("maximum number: %d\n", maximum);
  // printf("minimum number: %d\n", minimum);

  // 69.Create a program to check if the given array is sorted.
  // int arr[5] = {1, 2, 3, 4, 5};
  // for (int i = 0; i < 4; i++)
  // {
  //   if (arr[i] > arr[i + 1]){
  //     printf("not sorted");
  //     return 1;
  //   }
  // }
  // printf("sorted");
  
  // 70.Create a program to return a new array deleting a specific element.
  // int arr[15] = {1, 2, 3, 2, 3, 2, 3, 4, 5, 5, 1, 3, 4, 4, 1};
  // int new_arr[15];
  // int n, new_size = 0;
  // printf("Enter a number to delete: ");
  // scanf("%d", &n);
  // for (int i = 0, j = 0; i < 15; i++)
  // {
  //   if (n != arr[i])
  //   {
  //     // continue;
  //     new_arr[j] = arr[i];
  //     j++;
  //   }
  //   new_size = j;
  // }
  // for (int j = 0; j < new_size; j++)
  // {
  //   printf("%d, ", new_arr[j]);
  // }
  // printf("\n");

  // 71.Create a program to reverse an array.
  // int reverse[new_size];
  // for (int j = new_size; j > 0; j--)
  // {
  //   printf("%d, ", new_arr[j - 1]);
  // }

  // 72.Create a program to check is the array is palindrome or not.
  // int parr[5] = {1, 2, 2, 2, 1};
  // int new_parr[5];
  // for (int i = 5, j = 0; i > 0; i--)
  // {
  //   new_parr[j] = parr[i - 1];
  //   j++;
  // }
  // for (int k = 0; k < 5; k++)
  // {
  //   if (parr[k] != new_parr[k])
  //   {
  //     printf("not palindrome");
  //   }
  // }
  // printf("palindrome");  

  // 73.Write a function that uses pointer arithmetic to copy an array of char into another.
  // char arr[7] = {'M', 'a', 'h', 'm', 'o', 'o', 'd'};
  // char new_arr[7];
  // copy_arr(arr, 7, new_arr);
  // printf_arr(new_arr, 7);

  // 74.Create a program to merge two sorted arrays.
  // int arr1[5] = {1, 3, 5, 7, 9};
  // int arr2[7] = {2, 4, 6, 8, 10, 11, 12};
  // int arr3[12];
  // merge_sorted_array(arr1, 5, arr2, 7, arr3, 12);
  // printf_arr(arr3, 12);
  

  // 75.Create a program to search an element in a 2-D array.
  // int arr1[2][5] = {{1, 3, 5, 7, 9},{2, 4, 6, 8, 10}};
  // int n;
  // printf("Enter a number to search: ");
  // scanf("%d", &n);
  // for (int i = 0; i < 2; i++)
  // {
  //   for (int j = 0; j < 5; j++)
  //   {
  //     if (arr1[i][j] == n){
  //       printf("the number is find: %d", arr1[i][j]);
  //       return 0;
  //     }
  //   }
  // }
  // printf("not found");  

  // 76.Create a program to do sum and average of all elements in a 2-array.
  // int arr1[2][5] = {{1, 3, 5, 7, 9},{2, 4, 6, 8, 10}}; 
  // float  avg, n = 2.0 * 5.0, sum = 0.0;
  // for (int i = 0; i < 2; i++)
  // {
  //   for (int j = 0; j < 5; j++)
  //   {
  //     sum += arr1[i][j];
  //   }
  // }
  // avg = sum / n;
  // printf("sum: %.2f\n", sum); 
  // printf("average: %.2f\n", avg); 

  // 77.Create a program to find the sum of two diagonal elements.
  int n = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];             // primary diagonal
        sum += mat[i][n - i - 1];     // secondary diagonal
    }

    // avoid double counting center element when n is odd
    if (n % 2 == 1)
        sum -= mat[n/2][n/2];

    printf("Sum of both diagonals = %d\n", sum);


  return 0;
}