#include <stdio.h>
#include <stdlib.h>

int main() {
  // Get the size of the arrays from the user.
  int N,i;
  printf("Enter the size of the arrays: ");
  scanf("%d", &N);

  // Declare the arrays as variable length arrays.
  char *char_array = malloc(N * sizeof(char));
  int *int_array = malloc(N * sizeof(int));
  long long int *longlongint_array = malloc(N * sizeof(long long int));

  // Initialize the arrays with random values.
  for (i = 0; i < N; i++) {
    char_array[i] = rand() % 256;
    int_array[i] = rand();
    longlongint_array[i] = rand() * (long long int)RAND_MAX + rand();
  }

  // Print the addresses and values stored in the arrays using pointer arithmetic.

  // Print the char array.
  printf("Char array:\n");
  char *p = char_array;
  for (*p= char_array; p < char_array + N; p++) {
    printf("Address: %p, Value: %d\n", p, *p);
  }

  // Print the int array.
  printf("\nInt array:\n");
  int *q= int_array;
  for ( *q = int_array; q < int_array + N; q++) {
    printf("Address: %p, Value: %d\n", q, *q);
  }

  // Print the long long int array.
  printf("\nLong long int array:\n");
  long long int *r = longlongint_array;
  for ( *r = longlongint_array; r < longlongint_array + N; r++) {
    printf("Address: %p, Value: %lld\n", r, *r);
  }

  // Free the allocated memory for the arrays.
  free(char_array);
  free(int_array);
  free(longlongint_array);

  return 0;
}
