// I'm using scanf here, because it's what I've been helping with in the lab I peer teach.
// If you like std::cin or stdin better, absolutely go for one of those.
// I'm also using printf. The printf function belongs to the stdio.h header, and std::cout belongs to the iostream header. It does not matter which one you use here.


#include <stdio.h>

int main ()
{
  int rows;
  
  printf("Enter the number of rows desired: ");
  
  // The "%" is a placeholder, telling it to look for a variable reference, and the "d" is telling it that the desired variable is an int.
  // You would use "%s" for a string and "%f" for a float.
  // http://www.cplusplus.com/reference/cstdio/scanf/
  
  scanf("%d", &rows);
}
