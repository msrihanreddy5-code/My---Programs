#include <stdio.h>
struct student {
    int id;
    char name[20];
    float marks;
};
int main(){
    struct student s;
    printf("Enter ID, Name, Marks: ");
    scanf("%d %s %f", &s.id, s.name, &s.marks);
    printf("ID: %d\nName: %s\nMarks: %.2f\n", s.id, s.name, s.marks);
    return 0;
}
