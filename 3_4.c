#include<stdio.h>

int selectionSort(int A[], int N){
  int sw = 0;
  for(int i = 0; i < N; i++){
    int minj = i;

    for(int j = i; j < N; j++){
      if(A[minj] > A[j]){
        minj = j;
      }
    }
    if(i != minj){
    int min = A[minj];
    A[minj] = A[i];
    A[i] = min;
    sw++;
    }
  }
  return sw;
}

int main(){
  int A[100], N;

  scanf("%d", &N);
  for(int i = 0; i < N; i++) scanf("%d", &A[i]);

  int sw = selectionSort(A, N);

  for(int i = 0; i < N; i++){
    if(i > 0) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
  printf("%d\n",sw);

  return 0;
}
