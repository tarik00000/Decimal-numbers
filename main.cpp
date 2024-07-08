#include <iostream>
using namespace std;
int bin,num;
char J;
int rem;
int i = 2;
int m = 8;
int n = 16;
string answer = "";

int main()

{

   cout <<"Enter the number to convert : ";
   cin >> num;
   cout << "The Binary Equivalent : " << endl;


   while(num>0)
   {
cout <<num << "/" <<i << " = " <<(num/i) <<endl;

       bin=num%2;
       cout << bin <<endl;
       num/=2;



   }


   //Decimal to octal
   cout << "Do you want to turn decimal to octal" << endl;
   cout <<"if u want enter y for no enter n" << endl;
   cin >> J;

    if (J == 'n')
    {
    cout << "bye" << endl;
    return 0;
   }

   else if (J == 'y')
   {
        cout <<"Enter the number to convert : ";
   cin >> num;
   cout << "The octal Equivalent : " << endl;
   while(num>0)
   {
       cout <<num << "/" <<m << " = " <<(num/m) <<endl;
       bin=num%8;
       cout << bin << endl;
       num/=8;
   }
   }





//End
//Decimal to hexadecimal
cout <<"Do you want to turn Decimal to hexadecimal " << endl;
   cout <<"if u want enter y for no enter n" << endl;
   cin >> J;
   if ( J == 'n'){
     cout << "bye" << endl;
     return 0;
   }
   else if ( J == 'y'){
        cout <<"Enter the number to convert : ";
   cin >> num;
   cout << "The Binary Equivalent : " <<endl;


string s = "";
while (num > 0)
{

cout <<num << "/" <<n << " = " <<(num/n) <<endl;
  rem = num % 16;
  if (rem > 9)
  {

    switch (rem)
    {
      case 10: s = "A" + s; break;
      case 11: s = "B" + s; break;
      case 12: s = "C" + s; break;
      case 13: s = "D" + s; break;
      case 14: s = "E" + s; break;
      case 15: s = "F" + s; break;

    }

  }
  else
  {

    s = char(rem + 48) + s;



  }

  num = num/16;
 }
 if (s == "")

   cout << "0" << endl;

 else

   cout << s << endl;
   }



return 0;
   }
   //End
