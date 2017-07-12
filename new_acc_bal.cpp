#include<iostream>
#include<string>
using namespace std;
class account{
	private:
		
	public:
		string acc_no = "2420023772";
		double acc_bal;
		double getProfit(){
			return acc_bal*0.03;	// a profit of 3 percent
			}
		};
int main(){
	account current_bal;
	cout<<"enter your account balance";
	cin>>current_bal.acc_bal; // user prompted to enter their account balance
	cout<<endl;
	cout<<"your account "<< acc_no <<" has received a profit of "<<current_bal.getProfit();
	
}


		
