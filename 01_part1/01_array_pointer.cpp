#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>

using namespace std;
// If call namespace, not necessary to call such like std::cout.

//macro declaration
#define HOGE_TRIG 1

//prototype declaration
void ChangeToShohwa(int x);
void Shohwa();
void Display(int array[]);

int main(){
// array basic process
int test_array[40]={0};
int i=0, sum=0;
cout<<"*** array: basic process ***"<<endl;
for(i=0;i<40;i++){
 test_array[i]=2*i+1;
 cout<<test_array[i]<<" ";
 sum+=test_array[i];
}
cout<<endl;
cout<<"summation of add number equals "<<sum<<"."<<endl;

//loop test 2
int a=0;
cout<<"*** loop test 2 ****"<<endl;
i = 0;
while (true){
 cout <<"input number(2:break loop): ";
 cin >> a;
 
 switch(a){
 case 2:
 cout<<"hoge"<<endl; break;
 //case 3:
 //cout<<"moge"<<endl; break;
 case 4:
 cout<<"foo"<<endl; break;
 case 5:
 cout<<"bar"<<endl; break;
 default:
 cout<<"hogemogefoobarbaz"<<endl;
 continue; // except 2,4,5 pass after processing 
 }

if(a==2){
  cout<<"break infinite loop"<<endl;
  break;
 }
 else if(a==3){
  cout<<"input 3!!!"<<endl;
  continue;
 }
 else if(a==4){
  cout<<"input 4!!!"<<endl;
  continue;
 }
 else{
  i++;
 }

 cout<<"loop continue "<<i<<"."<<endl;
}

// array and character
char char_array[]="Hello, everyone! こんにちは～";
int char_size=0;
char_size=strlen(char_array);
for(i=0;i<char_size;i++){
 cout<<char_array[i];
}
cout<<char_array[char_size]<<endl;

//character edit
char szResult[50];
sprintf(szResult, "f(%d, %d) = %d", 2, 4, 2 * 2 + 4);
cout << szResult << endl;

// memory and address
// indicate value address
cout<<"*** memory and address ***"<<endl;
int  aaa=10;
char bbb[10];
printf("aaa : %d\nbbb : %d\nmain : %d\n", &aaa, bbb, main);
cout << "aaa = " << &aaa << endl
     << "bbb = " << bbb << endl
     << "main = " << main << endl;

// pointer
 int* p= &aaa;
 //int *p; int * p;
 cout << " p address:  " << p <<" p val: "<<*p<< endl
      << "aaa address: " << &aaa <<" aaa val: "<<aaa<< endl;
 *p = 100;
 cout<<"100 substitute to *p."<<endl;
 cout << " p address:  " << p <<" p val: "<<*p<< endl
      << "aaa address: " << &aaa <<" aaa val: "<<aaa<< endl;

// pointer and function
// if we use pointer as argument of function, we can asign the same variable.
// Because address is same. It is more safe than using global variable.
Shohwa();
Shohwa();

// pointer and array and function
// To save memory, we use pointer.
//If we define the same array multiply, it is waste of memory. Not make a sennse.
int n[5];
for(i = 0; i < 5; i++) n[i] = i * 5;
Display(n);

return 0;
}

void ChangeToShohwa(int* p)
{
    if(1926 < *p && *p < 1989)
        *p -= 1925;
    else
        *p = 0;
}

void Shohwa()
{
    int nYear;

    cout << "西暦を入力して下さい > ";
    cin >> nYear;

    ChangeToShohwa(&nYear);
    if(nYear)
        cout << "その年は昭和 " << nYear
             << " 年です。" << endl;
    else
        cout << "その年は昭和ではありません。" << endl;
}

void Display(int array[])
{
    int i;
    for(i = 0; i < 5; i++)
        cout << array[i] << endl;
}
