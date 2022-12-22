#include<stdio.h>  
struct s{
  int rollno;
  float marks;
  char a[20];
}s1,s2;
int main(){
  printf("enter the values\n");
  scanf("%d",&s1.rollno);
  scanf("%f",&s1.marks);
  scanf("%s",&s1.a);
  struct s*ptr=&s1;
  printf("%d\n",ptr->rollno);
  printf("%s\n",(*ptr).a);

return 0;  
}    