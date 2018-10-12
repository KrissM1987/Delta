#include <stdio.h>
#include <math.h>

int main()

{
int a,b,c;
float delta, x1 , x2, pdelta ;

printf ("podaj 1 liczbę : \n");
scanf("%i", &a);
printf ("podaj 2 liczbę : \n");
scanf("%i", &b);
printf ("podaj 3 liczbę : \n");
scanf("%i", &c);

delta = b*b - 4*a*c;
printf ("Delta wynosi : %.2f\n", delta);

if (delta >0)
{
    pdelta = sqrt(delta);
    x1=(-b+ pdelta)/2*a;
    x2=(-b-pdelta)/2*a;
    printf ("Delta jest dodatnia jej wartości to: %.2f oraz : %.2f ", x1, x2);

}
else if (delta == 0)
{
    x1 = -b/2*a;
    printf ("Delta ma wartosc 0, rozwiazanie to: %.2f\n",x1);

} else





    return 0;
}