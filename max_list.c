#include <stdio.h>
int main(){
  int l = 0;
  int sl = 0;
  int arr[3];

  for(int i=0; i<3; i++){
    printf("Enter the digit : ");
    scanf("%d", &arr[i]);
  }

  for(int i=0; i<3; i++){
    if(arr[i] > l){
      sl = l;
      l = arr[i];
    }

    else if(arr[i] > sl){
      sl = arr[i];
    }
  }

printf("%d\n", l+sl);

return 0;
}
