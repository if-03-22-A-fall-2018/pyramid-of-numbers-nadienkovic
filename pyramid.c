
#include "pyramid.h"

int main(int argc, char const *argv[]) {
  char x[MAX_LENGTH];
  GetNumber(x);
  return 0;
}
void GetNumber(char* x){
  printf("Please enter a number: ");
  scanf("%s\n",x);
}
