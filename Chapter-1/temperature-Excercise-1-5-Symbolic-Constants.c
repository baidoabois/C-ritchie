#include <stdio.h>

#define LOWER  0 /* lower limit of temperature table */
#define UPPER  300 /* upper limit of temperature table */
#define STEP  20 /* step size betweeen temperatures */


/* print Farenheit-Celsius table
	for fahr = 0, 20, .... , 300 */

main()
{
	float fahr;

	
	
	printf("Farenheit\tCelsius\n");

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
	
		printf("%5.0f\t %13.1f\n",fahr, (5.0/9.0)*(fahr-32));
	
	}
}
