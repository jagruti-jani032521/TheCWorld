#include <stdio.h>

void loop (int start, int end)
{
   if(start <= end)
   {
      printf("%d\n", start);

      start++;

      loop(start, end);
   }
}

int main()
{
    loop(1, 10);
    return 0;
}