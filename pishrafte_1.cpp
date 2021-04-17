#include <cstdio>
#include <cstdlib>
#include <cmath>
//void give (struct point *);
void show (int *p1,int *p2);
void dispotocen(int *x,int *y);
void potopo(int *x,int *y);
void angle (int *x,int *y);
void change (int *x,int *y);


struct point
{
    int x;
    int y;
};

int main ()
{
    point p;
      printf("\nHello user!!!\n\n");
      printf("Please enter a point :\n");
      printf("x.point is:\n");
      scanf ("%d",&p.x);
      printf("y.point is:\n");
    scanf ("%d",&p.y);
     int ch;
      printf("\nMenu :\n");
      printf("1_show points \n");
      printf("2_distance of point to center\n");
      printf("3_distance of point to point \n");
      printf("4_Angle  between point and X-axis\n");
      printf("5_change the prametr of point :\n");
      printf("6_Exit");
      printf("\nPlease enter a number to continue:");
    scanf ("%d",&ch);
     switch(ch)
     {
     case 1:
        show(&p.x,&p.y);
        break;
     case 2:
        dispotocen(&p.x,&p.y);
        break;
     case 3:
        potopo(&p.x,&p.y);
        break;
     case 4:
        angle(&p.x,&p.y);
        break;
     case 5:
        change(&p.x,&p.y);
        break;
     case 6:
        break;

     }


}


void show (int *p1,int *p2)
{
   printf("x.point is :%d\n",*p1) ;
   printf("y.point is :%d\n",*p2) ;
   printf("\n\n");
   main();
}
void dispotocen(int *x,int *y)
{
int res=((*x)*(*x))+((*y)*(*y));
float resault=sqrt(res);
printf("distance to center from your point is :%.2f\n\n",resault);
main();
}
void potopo(int *x,int *y)
{
      int x1,y1;
      printf("\nPlease enter second point :\n");
      printf("x.point is: ");
      scanf("%d",&x1);
      printf("y.point is: ");
      scanf("%d",&y1);
      int hir =(x1-(*x))*(x1-(*x))+(y1-(*y))*(y1-(*y));
      float res=sqrt(hir);
      printf("\nthe resualt is :%.2f\n\n",res);
main();


}
void angle (int *x,int *y)
{
    const double val=180/3.14159265;
    int d=atan((*x)/(*y))*val;
   printf("the angle is :%.2f\n\n",d);
    main();
}
void change (int *x,int *y)
{
    int dx,dy;
  printf("Please enter dx :");
   scanf("%d",&dx);
  printf("Please enter dy :");
   scanf("%d",&dy);
 int x_n=*x+dx;
 int y_n=*y+dy;
 printf("New x of point is :%d\n",x_n);
 printf("New y of point is :%d\n\n",y_n);
 main();
}
