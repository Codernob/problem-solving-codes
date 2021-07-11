#include<stdio.h>
struct student {
    char Name[20];
    int ID;
    int Batch_no;
    int Age;
    char Blood_Group[3];
    int Year;
    int Semester;
};
int main() {
    struct student students[20];

    //1. for taking input from user
    for(int i=0;i<3;i++) { scanf("%s %d %d %d %s %d %d",students[i].Name,&students[i].ID,&students[i].Batch_no,&students[i].Age,students[i].Blood_Group,&students[i].Year,&students[i].Semester);
    	fflush(stdin);
    	}
    for(int i=0;i<3;i++) printf("%s %d %d %d %s %d %d\n",students[i].Name,students[i].ID,students[i].Batch_no,students[i].Age,students[i].Blood_Group,students[i].Year,students[i].Semester);



}