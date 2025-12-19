#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,interest,payy;	
	cout << "Enter initial loan: "; 
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payy;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
    
  
	int i=1;
	while(true){
	  cout << fixed << setprecision(0); 
	  cout << setw(13) << left << i ; 
	  cout << fixed << setprecision(2); 
	  double prevba;
	  if(i==1){
         prevba=loan;
		 cout << setw(13) << left << prevba;
	  }else{
         cout << setw(13) << left << prevba;
	  }
	  double inter=prevba*(interest/100.0);
	  cout << setw(13) << left << inter;
      double total=prevba+inter;
	  cout << setw(13) << left << total;
	  if(payy<=total){
		cout << setw(13) << left << payy;
	  }else{
		cout << setw(13) << left << total;
	  }
	  double newba=total-payy;
	  if(newba<=0){
		cout << setw(13) << left << 0.00 ;
		break;
	  }else{
		cout << setw(13) << left << newba;
	  }
	  prevba=newba;
	  i++;
	  cout << "\n";


	}
	
	
		
	
	return 0;
}