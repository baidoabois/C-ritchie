#include <stdio.h>


/* print Farenheit-Celsius table
	for fahr = 0, 20, .... , 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit of temperature table */
	step = 20; /* step size betweeen temperatures */
	
	printf("Farenheit\tCelsius\n");

	fahr = upper ;
	while (fahr >= lower) {
		celsius = 5.0 / 9.0 * (fahr-32);
	
		printf("%5.0f\t %13.1f\n",fahr, celsius);
		fahr = fahr - step;
	}
}
