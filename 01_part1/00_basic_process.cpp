#include <iostream>
#include <math.h>

using namespace std;
// If call namespace, not necessary to call such like std::cout.

//prototype declaration
float calc_area(int r, float pi);
void  disp_area(int r, float pi);

int main(void){
// hello world
cout <<"hello world. "<<endl;

// summation. cout number and character.
cout <<2<<" plus "<<3<<" equals "<<2+3<<"."<<endl;
cout <<"π nealy equals "<<3.14<<"."<<endl;

// variable test
cout << "*** variable test ***" << endl;
int r=2;
float pi=3.14, S=0;
S=pi*pow(r,2);
cout << "Area of ciicle(r=2.0) equals " << S <<"."<<endl;

// function test
cout << "*** function test ***";
float area=.0;
area=calc_area(2, 3.14);
cout << "Area of circle(r=2) equals "<<area<<"."<<endl;
disp_area(2, 3.14);

// input test
cout << "*** input(cin) test ***";
int b=0;
cout << "input any number: ";
cin >> b;
cout << "The input number is "<<b<<"."<<endl;

// if test
// inside if bracket, 0 is false, except 0 is true.
cout<<"*** if test ***"<<endl;
int a = 2;
cout <<"If input compare a."<<endl;
if (a == 2){//compare
 cout <<"a="<<a<<" :Equal 2!"<<endl;
 int c= (a==2);
 cout <<"a==2 equals "<<c<<endl;
}
else{
 cout <<"a="<<a<<" :Not 2 !"<<endl;
}
cout <<"If input direct a"<<endl;
if (a){//direct input 1
 cout <<"a="<<a<<" :Equal 2!"<<endl;
}
else{
 cout <<"a="<<a<<" :Not 2!"<<endl;
}
cout <<"If input e."<<endl;
if ("e"){//direct input 2
 cout <<"input e."<<endl;
}
else{
 cout <<"no input e."<<endl;
}

// loop test
cout<<"*** loop test ***"<<endl;
int i=0;
for(i=0;i<10;i++){
 cout<<"******"<<endl;
}

//loop test 2
cout<<"*** loop test 2 ****"<<endl;
i = 0;
while (true){
 cout <<"input number: ";
 cin >> a;
 if(a==2){
  cout<<"break infinite loop"<<endl;
  break;
 }
 else if(a==3){
  cout<<"input 3!!!"<<endl;
  continue;
 }
 else{
  i++;
 }
 cout<<"loop continue "<<i<<"."<<endl;
}

return 0;

}


/*************************************************************/

float calc_area(int r, float pi){
 float S=0;
 S=pi*pow(r,2);
 return S;
}

void disp_area(int r, float pi){
 float S=0;
 S=pi*pow(r,2);
 cout << "Area of circle(r="<<r<<") equals "<<S<<"."<<endl;
}



