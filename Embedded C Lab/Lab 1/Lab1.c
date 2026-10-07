#include <stdio.h>
#include <math.h>


void multiple();
void seconds_hours();
void calendar();
void division();
void distance();


int main(){
    distance();
    return 0;
}




void multiple(){
    int a = 10;
    int b = 4;
    if (a%b == 0)
    {
        printf("Number %d is a multiple of %d",a,b);
    }
    else{
        printf("Number %d is not a multiple of %d",a,b);
    }
}

void calendar(){
    int x = 10;
    char *months[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Month number %d is %s",x,months[x-1]);

}


void division(){
    int x = 10;
    printf("numbers divisible by %d are:\n",x );
    for (int i = 1; i <= 100; i++)
    {
        if (i%x == 0)
        {
            
            printf("%d\n",i);
        }
        
    }
    
}

void distance(){
    int x1 = 5, x2 = 10, y1 = 2, y2 = 6;
    int h = pow(x2-x1,2), w = pow(y2-y1,2);
    double d = sqrt(h + w);
    printf("shortest distance is %.1f units", d);
}

void seconds_hours(){
    
    int s;
    printf("Enter NO. Seconds: ");
    scanf("%d", &s);
    
    int hr = s/3600;
    int min = s%3600 / 60;
    int sec = s%60;

    printf("%d Days, %d Hours, %d Seconds", hr,min,sec);
}
