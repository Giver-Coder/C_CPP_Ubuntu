#include <stdio.h>

struct student
{
    char name[20];
    int roll_num;
};
void display_1(char *n, int r);
void display_2(struct student s);
int main()
{
    struct student s1 = {"Ram", 10}, s2 = {"Shyam", 12};
    display_1(s1.name, s1.roll_num);
    display_2(s2);
}
void display_1(char *n, int roll)               //Function with character pointer(string) and integer as arguments
{
    printf("Name: %s\nRoll Number: %d\n", n, roll);
}
void display_2(struct student s)                //Function with 'struct student' variable as argument
{
    printf("Name: %s\nRoll Number: %d\n", s.name, s.roll_num);
}
