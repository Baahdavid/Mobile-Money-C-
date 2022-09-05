#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
	string dial="*170#";
	cout<<"Menu"<<endl;
	cout<<"dial *170# and follow the prompts"<<endl;
		cin>>dial;


	if( dial=="*170#"){
		cout<<"1=Transfer Money"<<endl;
	cout<<"2=MoMoPay & Pay Bill"<<endl;
	cout<<"3=Airtime & Bundles"<<endl;
	cout<<"4=Allow Cash Out"<<endl;
	cout<<"5=Financial Services"<<endl;
	cout<<"6=My Wallet"<<endl;
	
	}


	else if(dial!="*170#"){cout<<"invalid ussd entered"<<endl;
	cout<<"Try Again"<<endl;
	cin>>dial;
	
	cout<<"1=Transfer Money"<<endl;
	cout<<"2=MoMoPay & Pay Bill"<<endl;
	cout<<"3=Airtime & Bundles"<<endl;
	cout<<"4=Allow Cash Out"<<endl;
	cout<<"5=Financial Services"<<endl;
	cout<<"6=My Wallet"<<endl;
	
	
	
	}
	
	
	
	
		int n;
	cin>>n;
if( n==1){
		cout<<"Transfer Money"<<endl;
		cout<<"1) MoMo User"<<endl;
		cout<<"2) Non MoMo User"<<endl;
		cout<<"3) Send With Care"<<endl;
		cout<<"4) Favourite"<<endl;
		cout<<"5) Other Networks"<<endl;
		cout<<"6) Bank Account"<<endl;
		cout<<"0) Back"<<endl;
}



int x, number;
cin>>x;
if(x==1){
	cout<<"1) Enter Mobile Money Number"<<endl;
	cin>>number;
	
	
}


else if(x==2){
	cout<<"Choose Network"<<endl;
	
	cout<<"1) Airtel"<<endl;
	cout<<"2) Vodafone"<<endl;
	cout<<"3) Tigo"<<endl;
	
}

int q, num;
cin>>q;
if(x==1){
	cout<<"Enter Number"<<endl;
	cin>>num;
}


else if(x==3){
	cout<<"Send With Care"<<endl;
}


else if(x==4){
	cout<<"Favourites"<<endl;
}


else if(x==5){
	cout<<"Select Network: "<<endl;
	cout<<"1) AirtelTigo"<<endl;
	cout<<"2) Vodafone"<<endl;
	}
	
	
int x1;

if(x1==1 && x1==2){
	cin>>x1;
	cout<<"Enter Number"<<endl;
	cin>>number;
}


else if(x==6){
	cout<<"Bank Account"<<endl;
	cout<<"1) Fidelity"<<endl;
	cout<<"2) GCB"<<endl;
	cout<<"3) CBG"<<endl;
	cout<<"4) Absa"<<endl;
	cout<<"5) EcoBank"<<endl;
	
}


int x12;
if(x12==1,2,3,4,5){
	cin>>x12;
	cout<<"Enter Account Number"<<endl;
	cin>>number;
}


	else if(n==2){
		cout<<"MoMo Pay & Pay Bill"<<endl;
		cout<<"1) MoMo Pay"<<endl;
		cout<<"2) Pay Bill"<<endl;
		cout<<"0) Back"<<endl;
	}

	
	else if(n==3){
			cout<<"Airtime & Bundles"<<endl;
		cout<<"1) Airtime"<<endl;
		cout<<"2) Internet Bundles"<<endl;
		cout<<"3) Fixed Broadband"<<endl;
		cout<<"0) Back"<<endl;
	}
	
	
	else if(n==4){
		cout<<"Allow Cash Out"<<endl;
		cout<<"1) Yes"<<endl;
		cout<<"2) No"<<endl;
		cout<<"0) Back"<<endl;
		
	}
	
	

	
	
	
	else if(n==5){
		cout<<"Financial Services"<<endl;
			cout<<"1) Bank Services"<<endl;
		cout<<"2) Savings"<<endl;
		cout<<"3) Loans"<<endl;
		cout<<"4) Pensions And Investments"<<endl;
		cout<<"5) Insurance"<<endl;
		cout<<"6) Trade Shares"<<endl;
		cout<<"0) Back"<<endl;
	}
	
	else if(n==6){
		cout<<"My Wallet"<<endl;
			cout<<"1) Check Balance"<<endl;
		cout<<"2) Allow Cash Out"<<endl;
		cout<<"3) My Approvals"<<endl;
		cout<<"4) Report Fraud"<<endl;
		cout<<"5) Statements"<<endl;
		cout<<"6) Change & Reset PIN"<<endl;
		cout<<"7) Airtime"<<endl;
		cout<<"#) for next"<<endl;
	}
	
	
	return 0;
}

