#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_max_score(int score[], int n);

void update_score(int score[], int n) {
   int i;
   for (i = 0; i < 5; i++) {
      if (score[i] >= 90) {
         score[i] = 100;
      }
      else
         score[i] = score[i] + 10;
   }
}

void print_array(char name, int score[], int n) {
   int i;
   printf("\n Update array %c score \n", name);
   for (i = 0; i < n; i++) {
      printf("\t%d", score[i]);
   }
}

int main(void) {
   int A[5], B[5];
   int i, maxA, maxB;

   srand(time(NULL));
   for (i = 0; i < 5; i++) {
      A[i] = rand() % 101;
      B[i] = rand() % 101;
   }

   maxA = find_max_score(A, 5);
   maxB = find_max_score(B, 5);
   if (maxA > maxB) {
      printf("Array A\n");
      update_score(A, 5);
      print_array('A', A, 5);
   }
   else if (maxA < maxB) {
      printf("Array B\n");
      update_score(B, 5);
      print_array('B', B, 5);
   }
   else {
      printf("Array A and Array B have same max score\n");
      update_score(A, 5);
      update_score(B, 5);
      print_array('A', A, 5);
      print_array('B', B, 5);
   }
   return 0;
}

int find_max_score(int score[], int n) {
   int i, max;
   max = score[0];
   for (i = 1; i < n; i++) {
      if (score[i] > max)
         max = score[i];
   }
   return max;
}
