#include <stdio.h>

/*Mark Kenneth O. Ferrer DICT 1-3 */

int main()
{
    float BMI, lb, kg, feet, meters;

	printf("Enter your weight in pounds:  ");
	scanf("%f", &lb);

    printf("Enter your height in feet followed by a space then additional inches (i.e. 5 5):  ");
    scanf("%f", &feet);

    kg = lb * 0.45359237;
    meters = feet * 0.3048;

    BMI = kg / (meters * meters);

if(BMI < 18.5)
printf("Your BMI is: %f Your risk category is: Underweight.\n", BMI);
if(BMI >= 18.5 && BMI <= 25)
printf("Your BMI is: %f Your risk category is: Underweight.\n", BMI);
if(BMI >=25 && BMI <=30)
printf("Your BMI is: %f \n Your risk category is: Underweight.\n", BMI);
if(BMI >= 30)
printf("Your BMI is: %f \n Your risk category is: Underweight.\n", BMI);


    return 0;
}
