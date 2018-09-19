#include <stdio.h>


/* print Celsius-to-Farenheit table
	for Celsius = -50, -, .... , 300 */

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -50; /* lower limit of temperature table */
	upper = 300; /* upper limit of temperature table */
	step = 10; /* step size betweeen temperatures */
	
	printf("Celsius\tFarenheit\n");

	celsius = lower ;
	while (celsius <= upper) {
		fahr = celsius * ( 9.0 / 5.0 ) + 32;
	
		printf("%5.0f\t %13.1f\n",celsius, fahr);
		celsius = celsius + step;
	}
}
