#include <stdio.h>

struct student
    {
        char name[50];
        int age;
        int marks;
    };

int main(){
    int x;
    printf("how many students: ");
    scanf("%d",&x);
    int total = 0;
    struct student s[x];
    struct student tempStudent;
     
    for (int i = 0; i < x; i++)
    {
        printf("name: ");
        scanf(" %49[^\n]",&s[i].name);
        printf("age: ");
        scanf("%d",&s[i].age);
        printf("marks: ");
        scanf("%d",&s[i].marks);
    }   
    for (int j = 0; j < x; j++)
    {
        printf("Student name: %s, Age: %d, Marks: %d\n",s[j].name,s[j].age,s[j].marks);
        total +=s[j].marks; 
    }
    float avg = (float)total / x;
    printf("Average marks is %2.f \n",avg);

    for (int i = 0; i < x-1; i++)
    {
        for (int j = 1; j < x; j++)
        {
            if (s[j].marks>s[i].marks)
            {
                tempStudent = s[i];
                s[i] = s[j];
                s[j] = tempStudent;
            }
            
        }
        
        
    }
    printf("highest degree is %d \n",s[0].marks);
    printf("Top 3 are %s , %s and %s ",s[0].name, s[1].name, s[2].name);  
    return 0;
}

