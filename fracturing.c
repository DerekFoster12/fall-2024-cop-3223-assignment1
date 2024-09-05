/*
    fracturing.c
    Author: Derek Foster
    UCFID: 5469059
    Date: 9/5/2024
    Class: COP 3223, Professor Parra
    Purpose: Program to calculate distance, area, perimeter, height, and width of a circle
    Input: 2 sets of (x,y) coordinates
    Output: User inputed coordiantes and calculations for distance, area, perimeter, height, and width
*/

// Assume shape is a circle

// Library
#include <stdio.h>
#include <math.h>

// define pi
#define PI 3.14159

// declare functions
double printDistance();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateHeight();
double calculateWidth();

// main
int main(int argc, char **argv){

    // call print distance function
    printDistance();

    // call perimeter function
    calculatePerimeter();

    // call area function
    calculateArea();

    // call width function
    calculateWidth();

    // call height function
    calculateHeight();

    // return 0
    return 0;
}   //main

/*
    double printDistance

    Purpose: Output distance by calling in the calculateDIstance function
    Output: Prints distance calculation based on user inputed coordinates
    Precondition: None
    Postcondition: Return DIfficulty
*/
double printDistance(){
    // declare and initialize variables
    double distance = 0;

    // call calculateDistacne function
    distance = calculateDistance();

    // print distance calculation
     printf("The distance between the two points is %0.3f\n", distance);

     // return difficulty
     return 1;
}
/*
    double calculateDistance()

    Purpose: Calculates distance of two given points, given that it's a circle
    Output: Prints user inputed data for user to see the values they enter
    Precondition: none
    Postcondition: return distance
*/

double calculateDistance(){
    //declare and initialize variables
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    double distance = 0;

    // I/O Point 1
    scanf("%d %d", &x1, &x2);
    printf("Point #1 entered: x1 = %d x2 = %d \n", x1, x2);

    // I/O Point 2
    scanf("%d %d", &y1, &y2);
    printf("Point #2 entered: y1 = %d y2 = %d \n", y1, y2);

    // Calculate distance 
     distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // return distance
    return distance;

}   // calculateDistance

/*
    double calculatePerimeter()

    Purpose: Calculates perimeter using distance function
    Output: Prints entered points and perimeter calculation
    Precondition: none
    Postcondition: return integer representing difficulty
*/

double calculatePerimeter(){
    // declare and initialize variables
    double distance = 0;
    double perimeter = 0;

    // Call calculateDistance function
    distance = calculateDistance();

    // Calculate cricumference
    perimeter = (PI * distance);

    // Output answer
    printf("The perimeter of the city encompassed by your request is %0.3f\n", perimeter);

    //difficulty
    return 1;
}   // calculatePeriemter

/*
    double calculateArea()

    Purpose: Calculate area using distance
    Output: Prints entered points and area calculation
    Precondition: none
    Postcondition: Retuns integer representing difficulty
*/

double calculateArea(){
    // declare and initialize variables
    double distance = 0;
    double area = 0;

    // call calculateDistance function
    distance = calculateDistance();

    // calculate area
    area = PI * pow((distance/2), 2);

    // output area
    printf("The area of the city encompassed by your request is %0.3f\n", area);

    // difficulty
    return 1;
}   //calculateArea

/*
    double calculateWidth()

    Purpose: Calculates width using distance
    Output: Prints points and width calculation
    Precondition: None
    Postcondition: Returns value representing difficulty
*/

double calculateWidth(){
    // declare and initialize variables
    double width = 0;

    // call calculateDistance function
    width = calculateDistance();

    // output width
    printf("The width of the city encompassed by your request is %0.3f\n", width);

    // difficulty
    return 1;
}

/*
    double calculateHeight()

    Purpose: Calculates height using distance
    Output: Prings points and heigh calculation
    Precondition: None
    Postcondition: Retunrs value representing difficulty
*/

double calculateHeight(){
    // declare and initialize variables
    double height = 0;

    // call calculateDistance function
    height = calculateDistance();
    // Output height
    printf("The height of the city encompassed by your request is %0.3f\n", height);

    // difficulty
    return 1;
}   // calculateHeight
