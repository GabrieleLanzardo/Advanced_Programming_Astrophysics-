

#include <stdio.h>
#include <math.h>

#define SIZE 100

struct point{ //structure in which we wants to store the coordinates of the point
    char *name;
    double x_coord;
    double y_coord;
}; 

//function to calculate the minimum distance between point:
double distance(struct point A, struct point B) 
{   
   // printf("%lf, %lf \n", A.x_coord, A.y_coord); debug
   // printf("%lf, %lf \n", B.x_coord, B.y_coord);
    return sqrt((A.x_coord-B.x_coord)*(A.x_coord-B.x_coord)+(A.y_coord-B.y_coord)*(A.y_coord-B.y_coord));
}


//function to calculate the perimeter of the quardilateral:
double perimeter(double a, double b, double c, double d)
{
    double p;
    p=a+b+c+d;
    return p;
}

int main()
{
    struct point point_1, point_2, point_3, point_4;

    //Assign the coordinates:
printf("Insert the coordinates of 4 points. The points will be assigned in sequence, as inserted from the keyboard. \n ");
    //point A:
    point_1.name="A";
    printf("x coordinate of point A: ");
    scanf("%lf", & point_1.x_coord);
    printf("y coordinate of point A: ");
    scanf("%lf", & point_1.y_coord);

    //point B:
    point_2.name="B";
    printf("x coordinate of point B: ");
    scanf("%lf", & point_2.x_coord);
    printf("y coordinate of point B: ");
    scanf("%lf", & point_2.y_coord);

    //point C:
    point_3.name="C";
    printf("x coordinate of point C: ");
    scanf("%lf", & point_3.x_coord);
    printf("y coordinate of point C: ");
    scanf("%lf", & point_3.y_coord);

    //point D:
    point_4.name="D";
    printf("x coordinate of point D: ");
    scanf("%lf", & point_4.x_coord);
    printf("y coordinate of point D: ");
    scanf("%lf", & point_4.y_coord);

//perimeter of the quadrilateral:

    //sides of the quadrilateral:    

    struct point points[4]={point_1, point_2, point_3, point_4};
    double lengths[6];
    int k=0;
    for(int i=0; i<4; i++)
    {
        for(int j=1+i; j<4; j++)
        {
                lengths[k]=distance(points[i], points[j]);
                printf("Distance between point %d and %d: %lf \n", i+1, j+1, lengths[k]);
                k++;
            
        }
    }

    //perimeter:
    double perim;
    perim=perimeter(lengths[0], lengths[3], lengths[5], lengths[2]);
    printf("The perimeter of the quadrilateral is: %lf\n", perim);

//distance between point:


return 0;
}