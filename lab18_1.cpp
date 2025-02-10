#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a,Rect b){
	double x1,y1,x2,y2,x3,y3,x4,y4;
	x1=a.x;
	x2=b.x;
	x3=a.x+a.w;
	x4=b.x+b.w;

	y1=a.y;
	y2=b.y;
	y3=a.y-a.h;
	y4=b.y-b.h;
	//cout<<x1<<"	"<<x2<<"	"<<x3<<"	"<<x4<<"	\n";
	//cout<<y1<<"	"<<y2<<"	"<<y3<<"	"<<y4<<"	\n";
	double left = max(x1,x2);
	double right = min(x3,x4);
	double top = min(y1,y2);
	double bottom = max(y3,y4);
	//cout<<left<<"	"<<right<<"	"<<top<<"	"<<bottom<<"\n";
	if(left<right&&top>bottom) return (right-left)*(top-bottom);
	else return 0;
	
}
int main(){
Rect R1 = {1,1,5,5};
Rect R2 = {2,2,5,5};		
cout << overlap(R1,R2);	
	
}
