//Polygon code

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846 //I declared here the value of PI in order to use it within this code

struct polygon
{
int n_sides;
double side_length;
};

//functions:
    //construction of the polygon
struct polygon createPolygon(void)
{
    struct polygon p;
    
    printf("Insert the number of sides of the polygon: ");
    scanf("%d", &p.n_sides);
    printf("Insert the length of the sides: ");
    scanf("%lf", &p.side_length);

    return p;
}

    //area of the polygon
double calculateArea(struct polygon p)
{
    double A; //area of the polygon
    A=(p.n_sides*p.side_length*p.side_length)/(4*tan(PI/p.n_sides));
    return A;   
}

    //perimeter of the polygon
double peripoli(struct polygon p)
{
    return p.n_sides*p.side_length;
}

    //double the side length of the polygon
void doubleperi(struct polygon *pp)
{
    pp->side_length*=2;  
}

int main()
{
    struct polygon poligono;
    poligono=createPolygon();
    printf("The area of the polygon is: %lf\n", calculateArea(poligono));
    printf("The perimeter of the polygone is: %lf\n", peripoli(poligono));
    doubleperi(&poligono);
    printf("Doubled length size of the polygon: %lf\n", poligono.side_length);

    return 0;
}




