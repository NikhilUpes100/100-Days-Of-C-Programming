#include <stdio.h>
int main() {

     int nums[100], answer[100];
     int n, i;
     int prefix = 1, suffix = 1;

     printf("Enter the number of elements:");
     scanf("%d", &n);

     if (n <= 0 || n > 100) {
         printf("Invalid array size.\n");
         return 1;
     }

     printf("Enter the array elements:");
     for (i = 0; i < n; i++) {
         answer[i] = prefix;

         if (i < n - 1) {
             prefix *= nums[i];
         }
      }


      for (i = n - 1; i >= 0; i--) {
           answer[i] *= suffix;

           if (i > 0) {
               suffix *= nums[i];
           }
      }


      printf("Product array:");
      for (i = 0; i < n; i++) {
           printf("%d", answer[i]);

           if (i < n - 1) {
               printf(",");
           }
      }

      printf("\n");

      return 0;
}
