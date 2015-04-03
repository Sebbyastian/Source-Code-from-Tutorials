#include<iostream>
using namespace std;

int main()
{
	try {
	
		int num1;
		cout << "Enter first number :" << endl;
		cin>> num1;
		if (!cin.good()) {
			cout << "That's not a number, duh!" << endl;
			return 0;
		}
		
		int num2;
		cout << "Enter second number :" << endl;
		cin>> num2;
		if (!cin.good()) {
			cout << "You know what a number is, right?" << endl;
			return 0;
		}
		
		if(num2 == 0){
			throw std::overflow_error("Division by zero");
		}
		
		cout << num1/num2 << endl;
	}catch(int x){
		cout << "you cant divide by 0" << x << endl;
	}
}
