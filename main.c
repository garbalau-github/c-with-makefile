#include "io/file_reader.h"

int main()
{
  char filename[100];
  printf("File you want to read?\n");
  scanf("%s", filename);
  read_file(filename);
  return 0;
}
