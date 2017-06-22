#include <stdio.h>

void print(char *c){
  while (*c != '\0'){
      printf("%c", *c);
      c++;}
  printf("\n");}




int main(){

char string[100];
//////////////////
int i;
int length = strlen(string);
int foundLower = 0;
int foundUpper = 0;
int foundDigit = 0;
int foundOther = 0;
///////////////////

printf("Enter a string:\n>");
scanf("%s", string);

for (i = 0; i < strlen(string); ++i) {
    if ((string[i] >= 'a') && (string[i] <= 'z') ) //check for lower
        {foundLower+=1;}
    else if ((string [i] >= 'A') && (string[i] <= 'Z')) //check for upper
        {foundUpper+=1;}
    else if ((string[i] >= '0') && (string[i] <='9'))
        {foundDigit+=1;}
    else
        {foundOther+=1;}
      }

printf("\n\n\n");
print(string);
printf("length of string = %d\n", length);
printf("foundLower = %d\n", foundLower);
printf("foundUpper = %d\n", foundUpper);
printf("foundDigit = %d\n", foundDigit);
printf("foundOther = %d\n", foundOther);











/*
int c, i, nwhite, nother;
int ndigit[10];

nwhite = nother = 0;

for (i = 0; i < 10; ++i)
  ndigit[i] = 0;

while ((c = getchar()) != EOF)
  if (c > '0' && c <= '9')
    ++ndigit[c-'0'];
  else if (c == ' ' || c == '\n' || c == '\t')
    ++nwhite;
  else
    ++nother;

printf("digits = ");
for (i = 0; i < 10; ++i)
  printf(" %d,", ndigit[i]);
printf(" white space = %d, other = %d\n", nwhite, nother);
*/




  return 0;
}
