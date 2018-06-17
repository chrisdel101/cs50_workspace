#include <cs50.h>
#include <stdio.h>
#include <string.h>


// #include "../pset5/speller/dictionaries/small"

int main(void)
{
//
  // blank string store
  char line[126];


  FILE *inptr = fopen("./pset5/speller/dictionaries/small", "r");

  // scan file from inptr to line
  while(fscanf(inptr,"%s",line) != EOF)
  {

        // strcpy(mem->word, line);
        // make next null
  printf("%s", line);

  }


}