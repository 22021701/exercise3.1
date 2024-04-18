using namespace std;

#include <iostream>

int main(){
	
	string lover;
	string Ans;
	
	cout << "Please enter potential lover's name below:\n";
	cin>>lover;
	
	cout << "Is " <<lover <<" handsome / pretty? (Yes/No)\n";
	cin>>Ans;
	
	if (Ans == "Yes" || Ans == "yes"){
		cout << "Is "<< lover <<" respectful? (Yes/No)\n";
		cin>>Ans;
		
		if (Ans == "yes" || Ans =="Yes"){
			cout << "Is "<< lover <<" kind? (Yes/No)\n";
			cin>>Ans;
			
			if (Ans == "Yes" || Ans == "yes"){
				cout <<lover << " is right for you";
			}else{
		cout << lover <<" is not right for you";
	}
		}else{
		cout << lover <<" is not right for you";
	}
	}else{
		cout << "Partner is not right for you";
	}
	
	return 0;
	
}
