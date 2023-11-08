#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

double add(double a, double b ) {
	cout << "The sum of your two numbers is =  " << a + b;
	return a+b;
}
double sub(double a, double b ) {
	cout << "The subtraction of your two numbers is =  " << a - b;
		return a-b;

}
double multiply(double a, double b ) {
	cout << "The multiplication of your two numbers is =  " << a * b;
	return a*b;

}
double divide(double a, double b ) {
	cout << "The division of your two numbers is =  " << a / b;
  	return a/b;

}
int main(){
	double a; double b;
	cout << "please enter your first number :\n";
	cin >> a;
	cout << "please enter your second number :\n";
	cin >> b;
	
	cout << "What operation do you want to perform?\n (Add,Sub,Mult,Div)\n";
    std::string response;
    cin >> response;
    char lower_response = tolower(response[0]);


	if (lower_response == 'a')
	 {
		add(a,b);
	} else if (lower_response == 's')
	 {
		sub(a,b);
	} else if (lower_response == 'm')
	 {
	multiply(a,b);
	} else if (lower_response == 'd')
	 {
		divide(a,b);
	} 
}