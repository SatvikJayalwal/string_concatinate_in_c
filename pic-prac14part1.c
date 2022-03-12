#include <stdio.h>
int main() {
  
  printf("\nThis program Concatenate Two Strings\n");
  char s1[100] = "Polytechnic ", s2[] = "Manesar";
  int length, j;
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  s1[length] = '\0';
  printf("Concatenating of string 1 (Polytechnic) and string 2 (Manesar) : ");
  puts(s1);
  return 0;
}