// Program to accept and display an array
//  #include<stdio.h>
//  int main()
//  {
//  int a[10],u;
//  for(u=0;u<10;u++)
//  {
//      printf("\n Enter number \n");
//      scanf("%d",&a[u]);

// }

// printf("\n Array Elements are:");
// for(u=0;u<10;u++)
// {
// printf("\n %d",a[u]);
// }
//   return 0;
// }
// ==========================================================================
#include <stdio.h>

int main()
{
  int size;

  // Ask the user for the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Check if the size is non-positive
  if (size <= 0)
  {
    printf("Invalid array size. Please enter a positive size.\n");
    return 1; // Exit with an error code
  }

  // Declare an array of the given size
  int arr[size];

  // Initialize the array elements (you can do this as per your requirements)
  printf("Enter %d elements:\n", size);
  for (int i = 0; i < size; i++)
  {
    printf("Element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Perform operations on the array
  printf("Array elements: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // Add your additional array operations here

  return 0; // Exit with a success code
}
