// Mark Wlodawski ma584815
//********************************************************
// Assignment 1
// Author: Mark Wlodawski
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: This program, Fracture, prompts the user to enter input to answer questions, then prints it for them to see.
// Input: From the user
//
// Output: (to the command line) A brief Message displaying their own input
 //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function for retrieving user input
double askForUserInput()
    {
    int point1x = 0;
    int point1y = 0;
    int point2x = 0;
    int point2y = 0;
    printf("Please enter a new x value for point #1:");
    scanf("%i", &point1x);
    printf("Please enter a new x value for point #2:");
    scanf("%i", &point2x);  
    printf("Please enter a new y value for point #1:");
    scanf("%i", &point1y);
    printf("Please enter a new y value for point #2:");
    scanf("%i", &point2y);
    
    printf("Point #1 entered: x1 = %i", point1x);
    printf("; y1 = %i",point1y);
    printf("\n");
    printf("Point #2 entered: x2 = %i", point2x);
    printf("; y2 = %i",point2y);    
    printf("\n");
    
    double diameter = sqrt(pow((point2x - point1x),2) + pow((point2y - point1y),2)); 

    return diameter;
    };
    
//    Function for calculating Distance
    double calculateDistance()
    {
       double distance = askForUserInput(); 
       double difficulty = 2.0;

        printf("The distance between the two points is: %.2f\n", distance);
        printf("\n");

        return difficulty;
    };

//Function for calculating Perimeter    
    double calculatePerimeter()
    {
        double diameter = askForUserInput(); 
        double difficulty = 2.0;
        
        double perimeter = diameter * PI;
        
        printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
        printf("\n");
        
        return difficulty;
        
    };
        
//Function for calculating Area
    double calculateArea()
    {
        double diameter = askForUserInput(); 
        double difficulty = 3.0;


        double area = PI * (pow((diameter/2),2));
        
        printf("The area of the city encompassed by your request is %.2f\n", area);
        printf("\n");

        return difficulty;        
        
    };

//Function for calculating Width
   
    double calculateWidth() 
    {
        double width = askForUserInput(); 
        double difficulty = 1.0;

        printf("The width of the city encompassed by your request is: %.2f\n", width);
        printf("\n");

        return difficulty;
    };    

//Function for calculating Height
    double calculateHeight() 
    {
       double height = askForUserInput(); 
       double difficulty = 1.0;


        printf("The height of the city encompassed by your request is %.2f\n", height);
        printf("\n");

        return difficulty;
    };    

// Main function
int main (int argc, char **argv)
{
    // Call all functions.
      calculateDistance();
      calculatePerimeter();
      calculateArea();
      calculateWidth();
      calculateHeight();

    
    return 0;
}