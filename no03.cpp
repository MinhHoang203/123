#include <stdio.h>

int main() {
  int n;
  printf("Nh?p s? ph?n t? c?a m?ng: ");
  scanf("%d", &n);

\
  int array[n];
  for (int i = 0; i < n; i++) {
    printf("array[%d] = ", i);
    scanf("%d", &array[i]);
  }

  
  int x;
  printf("Nh?p s? c?n tìm: ");
  scanf("%d", &x);


  bool found = false;
  for (int i = 0; i < n; i++) {
    if (array[i] == x) {
      found = true;
      break;
    }
  }

  if (found) {
    printf("Có s? x trong m?ng.\n");
  } else {
    printf("Không có s? x trong m?ng.\n");
  }

  
}
