#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int len = 0;
  len = strlen(str);
  printf("word:%s\nlen:%d", str, len);
  return 0;
}