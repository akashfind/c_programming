#include <stdio.h>
#include <string.h>

int main() 
{
  char str1[] = "abcd", str2[] = "abCd";
  int result;
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  if(result==0)
          printf("both string are same\n");
  else
          printf("not same\n");
  
}
