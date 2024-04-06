#include <stdio.h>
#include <stdlib.h>

int main(){
  char color[20];
  char pluralNoun[20];
  char celebrityF[20];
  char celebrityL[20];

  printf("Enter a color: ");
  scanf("%s", color);

  printf("Enter a plural noun: ");
  scanf("%s", pluralNoun);

  printf("Enter a celebrity's first name: ");
  scanf("%s", celebrityF);

  printf("Enter a celebrity's last name: ");
  scanf("%s", celebrityL);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralNoun);
  printf("Sugar is %s %s\n", celebrityF, celebrityL);

  return 0;
}