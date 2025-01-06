include <stdio.h>

int main (void)
{
  int myarray 1[] = {5,9,10,11,4,3,1,6,7}
  int myarray 2[] = {2,5,9,2,5,3,0}

  int main 1 = find_min (myarray 1, 9);

  int main 2 = find_min (myarray 2, 7);

  printf ("min 1: %d\n", min);

  printf ("min 1: %d\n", min);

  return 0;
}

int find_min (int array[], int length)
{
  int min; 

  min = array [0];

  for (int i = 1; i<length; i++)
  {
    if (array [i] <min>
    {
      min = array [i];
    }
  }
  return min;
}


