#include <stdio.h>

double formule(double altitude, double gravity)
{
	float lightspeed = 300000000.0 * 300000000.0;

	gravity *= altitude;
	gravity /= lightspeed;
	gravity *= 86400.0;
	gravity *= 1000000000;
	return gravity;
}

int main(void)
{
	float aster[10] = {274, 3.7, 8.87, 9.81, 1.62, 3.71, 24.79, 10.44, 8.69, 11.15};
	printf("Enter the celestial body's number : \n0 : Sun\n1 : Mercure\n2 : Venus\n3 : Earth\n4 : Moon\n5 : Mars\n6 : Jupiter\n7 : Saturn\n8 : Uranus\n9 : Neptune\n-> ");
	int planet;
	scanf("%d", &planet);
	while (planet >= 10 || planet < 0)
	{
		printf("Please select a valid entry")
		scanf("%d", &planet);
	}

	double gravity = aster[planet];
	double altitude;
	printf("Enter the distance to the planet (unit : METERS). Warning: Above 100 km, this program uses an approximation.: \n");
	scanf("%lf", &altitude);
	printf("Time at this altitude has a difference of %f nanosecondes per day from the surface of the celestial body\n", formule(altitude, gravity));
	return 0;
}
