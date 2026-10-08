#include <stdio.h>
#include <math.h>


void multiple();
void seconds_hours();
void calendar();
void division();
void distance();


int main(){
    
    return 0;
}


// Problem 5: Check if one integer is a multiple of another integer
void multiple(){
    int a = 10;
    int b = 4;

    if (a % b == 0)
    {
        printf("Number %d is a multiple of %d", a, b);
    }
    else{
        printf("Number %d is not a multiple of %d", a, b);
    }
}


// Problem 6: Read an integer between 1 and 12 and print the corresponding month
void calendar(){
    int x = 10;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Month number %d is %s", x, months[x - 1]);
}


// Problem 7: Print all numbers between 1 and 100 that are divisible by a specified number
void division(){
    int x = 10;

    printf("Numbers divisible by %d are:\n", x);

    for (int i = 1; i <= 100; i++)
    {
        if (i % x == 0)
        {
            printf("%d\n", i);
        }
    }
}


// Problem 3: Calculate the distance between two points (x1, y1) and (x2, y2)
void distance(){
    int x1 = 5, x2 = 10, y1 = 2, y2 = 6;

    int h = pow(x2 - x1, 2);
    int w = pow(y2 - y1, 2);

    double d = sqrt(h + w);

    printf("Shortest distance is %.1f units", d);
}


// Problem 4: Convert a given number of seconds into hours, minutes, and seconds
void seconds_hours(){
    int s;

    printf("Enter NO. Seconds: ");
    scanf("%d", &s);

    int hr = s / 3600;
    int min = s % 3600 / 60;
    int sec = s % 60;

    printf("%d Hours, %d Minutes, %d Seconds", hr, min, sec);
}
