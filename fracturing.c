//************************************************ 
//fracturing.c
//Samuel DeCorso
//UCF ID: 5156159
//Class: COP 3223, Professor Parra
//************************************************

//include stdio and math to be able to calculate 
#include<stdio.h>
#include<math.h>
#define Pi 3.14159

// Function to get user input for x and y and %lf for use of double. This is used so that i did not have to repeat scanf for every x and y in the program.
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}

//this is to get the distance for every time the get distance is called upon.
double getDistance() {
    double x1, y1, x2, y2;

    printf("Enter x1, x2 for Point #1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter y1, y2 for point #2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();
//The math required to get the distance through the pythagorean theorem
    double distance = sqrt (pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);

    return distance;
}
// Function to calculate the distance and get the output between two points
double calculateDistance() {
    double distance = getDistance();

    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Function to calculate and output the perimeter 
double calculatePerimeter() {
    double x1, y1, x2, y2;
    double distance = getDistance();
    double perimeter = Pi * distance;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 3.0; // Difficulty rating for perimeter calculation
}

// Function to calculate and output the area, fabs(per google) is to make sure it is a positive number
double calculateArea() {
    double x1, y1, x2, y2;
    double distance = getDistance();
    double area = Pi * pow(0.5 * distance, 2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 54321.0; // Difficulty rating for area (per instructions) 
}

// Function to calculate and output the width 
double calculateWidth() {
    double x1, x2;

    printf("Enter x1 for Point #1: ");
    x1 = askForUserInput();

    printf("Enter x2 for Point #2: ");
    x2 = askForUserInput();

    double width = (x2 - x1);

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 1.0; // Difficulty rating for width (per instructions) 
}

// Function to calculate and output the height by subtracting y values 
double calculateHeight() {
    double y1, y2;

    printf("Enter y1 for Point #1: ");
    y1 = askForUserInput();

    printf("Enter y2 for Point #2: ");
    y2 = askForUserInput();

    double height = (y2 - y1);

    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 1.0; // Difficulty rating per instructions
}

// Main function to call all other functions
int main(int argc, char **argv) {
    // Call functions to have their use, from the main function

    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    

    return 0;
}
