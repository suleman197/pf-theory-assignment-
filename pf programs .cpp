// 1 program
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter value for y = ";
	cin>>y;
	if (y==10)
	x=0;
	else
	x=1;
	
	cout<<"value of x = " <<x;
	return 0;
}

//program 2 
#include<iostream>
using namespace std;
int main()
{
	int temperature;
	cout<<"Enter temperature = ";
	cin>>temperature;
	
	if(temperature >= -50 && temperature <= 150)
	cout<<"The number is valid";
	
	return 0;
}  

//program 3
#include<iostream>
using namespace std;
int main()
{
      int num1,num2;
      cout<<"Enter first number = ";
      cin>>num1;
      
      cout<<"Enter second number = ";
      cin>>num2;
      
      if( num1> num2)
      cout<<"Larger = "<< num1 <<"\nsmaller = "<<num2;
      
      if( num2> num1)
      cout<<"Larger = "<< num2 <<"\nsmaller = "<<num1;
	
	return 0;
}

//program 4
#include<iostream>
using namespace std;
int main()
{
      double a =10;
       double b =10;
       
       a = a + 0.2;
       
    cout<<" a = "<< a << endl;
    cout<<" b = "<< b << endl;
    
    if( a>b)
    cout<<" A is grater and b is smaller";
    else
     cout<<" B is grater and a is smaller";
       
	return 0;
}


//program 5
#include <iostream>
using namespace std;
int main() {

    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if(num2 != 0)
        cout << "Division = " << num1 / num2;

    else
        cout << "Division by zero is not possible";

    return 0;
}

//program 6
#include <iostream>
using namespace std;
int main() {

    int a = 2, b = 4, c = 6;

    cout << "A: " << (a == 4 || b > 2) << endl;
    cout << "B: " << (6 <= c && a < 3) << endl;
    cout << "C: " << (1 != b && c != 3) << endl;
    cout << "D: " << (a >= -1 || a <= b) << endl;
    cout << "E: " << (!(a > 2)) << endl;

    return 0;
}

//program 7
#include <iostream>
using namespace std;
int main() {

    float r1, r2, r3;

    cout << "Enter time of Runner 1: ";
    cin >> r1;

    cout << "Enter time of Runner 2: ";
    cin >> r2;

    cout << "Enter time of Runner 3: ";
    cin >> r3;

    if(r1 < r2 && r1 < r3)
        cout << "Runner 1 is First";

    else if(r2 < r1 && r2 < r3)
        cout << "Runner 2 is First";

    else
        cout << "Runner 3 is First";

    return 0;
}

//program 8
#include <iostream>
using namespace std;
int main() {

    int choice;
    float radius, length, width, base, height, area;

    cout << "Geometry Calculator\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Rectangle\n";
    cout << "3. Area of Triangle\n";

    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter radius: ";
        cin >> radius;

        area = 3.14159 * radius * radius;
        cout << "Area = " << area;
    }

    else if(choice == 2) {
        cout << "Enter length and width: ";
        cin >> length >> width;

        area = length * width;
        cout << "Area = " << area;
    }

    else if(choice == 3) {
        cout << "Enter base and height: ";
        cin >> base >> height;

        area = base * height * 0.5;
        cout << "Area = " << area;
    }

    return 0;
}

//program 9
#include <iostream>
using namespace std;
int main() {

    char ch;

    for(ch='A'; ch<='Z'; ch++) {
        cout << ch << " = " << (int)ch << endl;
    }

    return 0;
}

//program 10
#include <iostream>
using namespace std;
int main() {

    float mass, weight;

    cout << "Enter mass: ";
    cin >> mass;

    weight = mass * 9.8;

    cout << "Weight = " << weight << endl;

    if(weight > 1000)
        cout << "Object is too heavy";

    else if(weight < 10)
        cout << "Object is too light";

    return 0;
}

//program 11
#include <iostream>
using namespace std;
int main() {

    float sales;

    cout << "Enter sales amount: ";
    cin >> sales;

    if(sales > 50000) {
        sales = sales + (sales * 0.25) + 250;
    }

    cout << "Total sales after bonus = " << sales;

    return 0;
}

//program 12
#include <iostream>
using namespace std;
int main() {

    float income;
    int years;

    cout << "Enter annual income: ";
    cin >> income;

    cout << "Enter years at current job: ";
    cin >> years;

    if(income >= 35000 && years > 5)
        cout << "You qualify for the special loan";
    else
        cout << "You do NOT qualify for the loan";

    return 0;
}

//program13
#include <iostream>
using namespace std;
int main() {

    int model;

    cout << "Enter TV model (100 / 200 / 300): ";
    cin >> model;

    if(model == 300)
        cout << "Features: Picture-in-picture, Stereo sound, Remote control";

    else if(model == 200)
        cout << "Features: Stereo sound and Remote control";

    else if(model == 100)
        cout << "Features: Remote control only";

    else
        cout << "Invalid model";

    return 0;
}

//program 14
#include <iostream>
using namespace std;
int main() {

    int month, day, year;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter year (two digits): ";
    cin >> year;

    if(month * day == year)
        cout << "The date is MAGIC";
    else
        cout << "The date is NOT MAGIC";

    return 0;
}

//program 15
#include <iostream>
using namespace std;
int main() {

    float sales, commission;

    cout << "Enter sales amount: ";
    cin >> sales;

    if(sales <= 10000)
        commission = sales * 0.10;

    else if(sales <= 15000)
        commission = sales * 0.15;

    else
        commission = sales * 0.20;

    cout << "Commission = " << commission;

    return 0;
}

//program16
#include <iostream>
using namespace std;
int main() {

    float balance, fees = 10;
    int checks;

    cout << "Enter beginning balance: ";
    cin >> balance;

    cout << "Enter number of checks written: ";
    cin >> checks;

    if(balance < 400)
        fees += 15;

    if(checks < 20)
        fees += checks * 0.10;

    else if(checks <= 39)
        fees += checks * 0.08;

    else if(checks <= 59)
        fees += checks * 0.06;

    else
        fees += checks * 0.04;

    cout << "Bank service fees = $" << fees;

    return 0;
}

//program 17
#include <iostream>
using namespace std;
int main() {

    int choice;

    cout << "Select Headphone Type\n";
    cout << "1. Noise Canceling\n";
    cout << "2. Wireless\n";
    cout << "3. Wired Budget\n";

    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
        cout << "Price: $249.00";

    else if(choice == 2)
        cout << "Price: $199.00";

    else if(choice == 3)
        cout << "Price: $49.00";

    else
        cout << "Invalid choice";

    return 0;
}

//program18
#include <iostream>
using namespace std;
int main() {

    int choice, months;
    float total;

    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    if(choice >=1 && choice <=3) {

        cout << "Enter number of months: ";
        cin >> months;

        if(choice == 1)
            total = months * 40;

        else if(choice == 2)
            total = months * 20;

        else
            total = months * 30;

        cout << "Total amount = Rs " << total;
    }

    return 0;
}

//program19
#include <iostream>
using namespace std;
int main() {

    int package;
    float gb, bill;

    cout << "Enter package (1,2,3): ";
    cin >> package;

    cout << "Enter GB used: ";
    cin >> gb;

    if(package == 1) {

        bill = 39.99;
        if(gb > 4)
            bill += (gb - 4) * 10;

    }

    else if(package == 2) {

        bill = 59.99;
        if(gb > 8)
            bill += (gb - 8) * 5;

    }

    else if(package == 3) {

        bill = 69.99;

    }

    cout << "Total bill = $" << bill;

    return 0;
}

//program20
#include <iostream>
using namespace std;
int main() {

    int seconds;

    cout << "Enter number of seconds: ";
    cin >> seconds;

    if(seconds >= 86400)
        cout << "Days = " << seconds / 86400;

    else if(seconds >= 3600)
        cout << "Hours = " << seconds / 3600;

    else if(seconds >= 60)
        cout << "Minutes = " << seconds / 60;

    else
        cout << "Seconds = " << seconds;

    return 0;
}








