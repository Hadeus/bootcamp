#include <stdio.h>


int main(){

char string[100];

int i;
int length = strlen(string);
int foundLower = 0;
int foundUpper = 0;
int foundDigit = 0;

for(i=0; i<30; i++)
 scanf("%f", string[i]);

for (i = 0; i < strlen(string); ++i) {
    if ((string[i] >= 'a') && (string[i] <= 'z')) //check for lower
        {foundLower+=1;}
    else if ((string [i] >= 'A') && (string[i] <= 'Z')) //check for upper
        {foundUpper+=1;}
    else if ((string[i] >= '0') && (string[i] <='9'))
        {foundDigit+=1;}
      }

printf("foundLower = %d\n", foundLower);
printf("foundUpper = %d\n", foundUpper);
printf("foundDigit = %d\n", foundDigit);











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
