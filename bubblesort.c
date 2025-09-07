#include<stdio.h>
int main(){
   int A[5] = {5, 4, 3, 2, 1};
   for(int i = 0; i < 4; i++){
      int flag = 0;
      for(int j = 0; j < 5-i-1; j++){
         if (A[j] > A[j+1]){
            int temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            flag = 1;
         }
      }
      if(flag == 0){
         break;
      }
   }
   for (int k = 0; k <= 4; k++){
      printf("%d", A[k]);
   }
   return 0;
}