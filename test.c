#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool mergeToSquare(int arr[3][2]) {
  int xcord;
  int markdone = 0;
  int totalArea = 0;

  for (int i = 0; i < 3; i++){
    totalArea += arr[i][0] * arr[i][1];
  }

  int sideLength = sqrt(totalArea);

  for (int i = 0; i < 3; i++){
    if (arr[i][0] == sideLength || arr[i][1] == sideLength){
      markdone = 1;
      xcord = i;
      break;
    }
  }

  if (!markdone){
    return false;
  }

  if (xcord == 0){
    if (arr[1][0] + arr[2][0] != sideLength && 
        arr[1][1] + arr[2][1] != sideLength){
      return false;
    }
  }
  else if (xcord == 1){
    if (arr[0][0] + arr[2][0] != sideLength &&
        arr[0][1] + arr[2][1] != sideLength){
      return false;
    }
  }
  else if (xcord == 2){
    if (arr[0][0] + arr[1][0] != sideLength &&
        arr[0][1] + arr[1][1] != sideLength){
      return false;
    }
  }

  return true;
}

int main() {
  int arr[3][2];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  if (mergeToSquare(arr)) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}