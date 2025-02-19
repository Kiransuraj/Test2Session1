#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the value of x1 and x2:\n");
  scanf("%f%f",x1,x2);
  printf("Enter the value of y1 and y2:\n");
  scanf("%f%f",y1,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("The distance between point (%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,area);
}
int main()
{
  float a,b,c,d,ans;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&ans);
  output(a,b,c,d,ans);
  return 0;
}