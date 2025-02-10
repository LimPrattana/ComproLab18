#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *pa,Rect *pb){

	double x1,y1,x2,y2,x3,y3,x4,y4;
	x1=pa->x;
	x2=pb->x;
	x3=pa->x+pa->w;
	x4=pb->x+pb->w;

	y1=pa->y;
	y2=pb->y;
	y3=pa->y-pa->h;
	y4=pb->y-pb->h;
	double left = max(x1,x2);
	double right = min(x3,x4);
	double top = min(y1,y2);
	double bottom = max(y3,y4);

	if(left<right&&top>bottom) return (right-left)*(top-bottom);
	else return 0;
	
}
int main(){
Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};		
cout << overlap(&R1,&R2);	
	
}
