#include <stdio.h>
int main( int argc, char** argv)
{
int i;
i = 0;
while ( i != argc )
{
printf("truc %ld : %s\n",i,argv[i]);
i = i+1;
}
return(0);
}
