#include <stdio.h>


/* print Farenheit-Celsius table
	for fahr = 0, 20, .... , 300 */

main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit of temperature table */
	step = 20; /* step size betweeen temperatures */

	fahr = lower ;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
	
		printf("%3d\t %6d\n",fahr, celsius);
		fahr = fahr + step;
	}
}
