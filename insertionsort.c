#include <stdio.h>
int main(){
   int A[5] = {5,4, 3, 2, 1};
   for(int j = 1; j <= 4; j++){
      int key = A[j];
      int i = j-1;
      while(i >= 0 && A[i] > key){
         A[i+1] = A[i];
         i = i - 1;
      }
      A[i+1] = key;
   }
   for (int k = 0; k <= 4; k++){
      printf("%d", A[k]);
   }
   return 0;
}