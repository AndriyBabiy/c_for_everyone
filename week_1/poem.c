#include<stdio.h>

int main(void)
{

  char poem_v1[] = "Two roads diverged in a yellow wood, \n And sorry I could not travel both \n And be one traveler, long I stood \n And looked down one as far as I could \n To where it bent in the undergrowth;";
  char poem_v2[] = "Then took the other, as just as fair, \n And having perhaps the better claim, \n Because it was grassy and wanted wear; \n Though as for that the passing there \n Had worn them really about the same,";
  char poem_v3[] = "And both that morning equally lay \n In leaves no step had trodden black. \n Oh, I kept the first for another day! \n Yet knowing how way leads on to way, \n I doubted if I should ever come back.";
  char poem_v4[] = "I shall be telling this with a sigh \n Somewhere ages and ages hence: \n Two roads diverged in a wood, and I— \n I took the one less traveled by, \n And that has made all the difference.";

  printf("The Road Not Taken \n - Robert Frost \n\n %s \n\n %s \n\n %s \n\n %s \n\n", poem_v1, poem_v2, poem_v3, poem_v4);
  return 0;
}