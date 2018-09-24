#include <stdio.h>


/* Count lines in input, Also counts blanks and tabs; 2nd version*/

main()
{
	
	int c, nl,nb,nt;
	nl = 0;
	nb = 0;
	nt = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;

	}
	printf ( "Number of lines%d\n",nl);
	printf ( "Number of tabs%d\n",nt);
	printf ( "Number of blanks%d\n",nb);
}
