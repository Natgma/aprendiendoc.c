include <stdio.h>

int main (void)
{
  int myarray[] = {5,9,10,11,4,3,8,6,7}; 
  int min; 

  min = myarray[0];
  for (int i = 0; i < 9; i++)
  {
    if (myarray[i] < min) min = myarray [i];
  }

  printf("Minimum: %d\n", min);
  return 0;
}


