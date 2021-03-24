#include <stdio.h>
void printstr(char str[])//function to put input data
{
  int i = 0;
  while (str[i] != '\0')

  {
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}
int main()
{
  // char str[]={'s','a','k','i','l','\0'};
  //  char str[]="Sakil";
  char str[34];
  printf("Which you want 2 times:");
  gets(str); // i can get data and apply it from user
  printf("Using printf %s\n", str);
  printf("Using puts\n");

  puts(str);

  printf("Using custum function printstr\n");
  printstr(str);

  return 0;
}