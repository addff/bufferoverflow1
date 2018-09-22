#include <stdio.h>
#include <string.h>

int main()
{
	char password[16];
	int passcheck = 0;

	printf("\nwhat's the secret password?\n");
	gets(password);

	if(strcmp(password, "shahadan"))
	{
		printf("\nYou fail!\n");
	}

	else
	{
		printf("\nCorrect Password\n");
		passcheck = 1; //Change pass valueso that sothat code executes below.
	}

	if(passcheck) // A valueotherthan0 meansitwas set above
	{
		//Do privileged stuff here, in this case read a protected file.
		system("cat /etc/shadow");
	}

	return 0;
}
