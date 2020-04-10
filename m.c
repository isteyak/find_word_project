

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main()
{
    FILE *fp = fopen("db.txt", "r+");


    char buffer[9];
    char value[9];

    printf("Enter the keyword\n");
    scanf("%s", value);

    while(feof(fp) == 0)
    {

    if(fread(buffer, sizeof(buffer), 1, fp))
    {
	if(strncmp(value, buffer, sizeof(buffer)) == 0)
	{
	    printf("value is find %s\n", buffer);
	}

    }
    else

	    printf("value is find %s\n", buffer);
	if(strncmp(value, buffer, sizeof(buffer)) == 0)
	{
	    printf("value is find %s\n", buffer);
	}
	//printf("fell\n");
    }

    printf("%d\n", ftell(fp));
    clearerr(fp);
}
