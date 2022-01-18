//question no 2

#include <stdio.h>
int main()
{
    float km,meters,feet,inches,cm;
    printf("\nenter the distance b/w two cities in km:- ");
    scanf("%f",&km);

    meters=km*1000;                                   //formula
    feet=meters*3.28;                                 //formula
    inches=feet*0.083333;                             //formula
    cm=meters*100;                                    //formula

    printf("the conversion of %f km distance is:-",km);
    printf("\nIn meters:- %.3f \nIn feet:- %.3f \nIn inches:- %.3f \nIn centimeters:- %.3f\n",meters,feet,inches,cm);

    return 0;
}