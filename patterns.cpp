#include<iostream>
using namespace std;
class Pattern{
	public:
		virtual void print()=0;
};

class Pyramid: public Pattern{
	protected:
		int n;
	public:
		void print(){
			cout<<"Welcome to basic pattern maker:"<<endl;
			cout<<endl;
		}	
};

class HalfStar: public Pyramid{
	public:
	void print(){
		cout<<endl;
			cout<<"Half star pyramid has been selected"<<endl;
			cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;
		cout<<"Creating a half star pyramid of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"HALF-STAR-PYRAMID"<<endl<<endl;;
		cout<<endl;
		
		for(int i=1; i<=n; ++i){
        	for(int j=1; j<=i; ++j){
            	cout << "* ";
        	}
        	cout << "\n";
    	}	 
	}
};

class RevHalfStar: public Pyramid{
	public:
	void print(){
		cout<<endl;
			cout<<"Reverse half star pyramid has been selected"<<endl;
			cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;
		cout<<"Creating a reverse half star pyramid of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"REVERSE-HALF-STAR-PYRAMID"<<endl<<endl;;
		cout<<endl;
		
		for(int i=1; i<=n; ++i){
        	for(int j=1; j<=n; ++j){
        		if(j<=n-i){
        			cout<<"  ";
				}
				else{
					cout << "* ";
				}
        	}
        	cout << "\n";
    	}	 
	}
};

class InvertedHalfStar: public Pyramid{
	public:
	void print(){
		cout<<endl;
		cout<<"Inverted half star pyramid has been selected"<<endl;
		cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;	
		cout<<"Creating an inverted half star pyramid of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"INVERTED-HALF-STAR-PYRAMID"<<endl<<endl;;
		cout<<endl;
		
		for(int i=n; i>=1; --i){
        	for(int j=1; j <= i; ++j){
            	cout << "* ";
        	}
        	cout << endl;
    	}	 
	}
};
class Star: public Pyramid{
	public:
	void print(){
		cout<<endl;
			cout<<"Star pyramid has been selected"<<endl;
			cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;
		cout<<"Creating a star pyramid of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"STAR-PYRAMID"<<endl<<endl;;
		cout<<endl;
		
		for(int i=1; i<=n; ++i){
        	for(int j=1; j<=n; ++j){
        		if(j<=n-i){
        			cout<<" ";
				}
				else{
					cout << "* ";
				}
        	}
        	cout << "\n";
    	}	 
	}
};

class HalfNumber: public Pyramid{
	public:
	void print(){
		cout<<endl;
		cout<<"Half number pyramid has been selected"<<endl;
		cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;
		
		cout<<"Creating a half number pyramid of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"Half-NUMBER-PYRAMID"<<endl<<endl;;
		cout<<endl;
		
		for(int i =1; i<=n; i++){
			for(int j=1; j<=i; j++){
				cout<<j;
				cout<<" ";
			}
			cout<<endl;
		}
	}
};

class InvertedHalfNumber: public Pyramid{
	public:
	void print(){
		cout<<endl;
		cout<<"Inverted Half number pyramid has been selected"<<endl;
		cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;
		
		cout<<"Creating an inverted half number pyramid of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"HALF-NUMBER-PYRAMID"<<endl<<endl;;
		cout<<endl;
		
		for(int i=n; i>=1; i--){
			for(int j=1; j<=i; j++){
				cout<<j;
				cout<<" ";
			}
			cout<<endl;
		}
	}
};

class FloydTri: public Pyramid{
	public:
	void print(){
		cout<<endl;
		cout<<"Floyd's trinage has been selected"<<endl;
		cout<<"Enter the number of lines: "; cin>>n;
		cout<<endl;
		
		cout<<"Creating floyd's trinagle of "<<n<<" lines in 3 2 1..."<<endl;
		cout<<"-------------------------------"<<endl;
		cout<<"FLOYD'S-TRIANGLE"<<endl<<endl;;
		cout<<endl;
		int num =1;
		for(int i =1; i<=n; i++){
			for(int j=1; j<=i; j++){
				cout<<num;
				num++;
				cout<<" ";
			}
			cout<<endl;
		}
	}		
};

int main(void){
	
	Pattern *ptr;
	
	Pyramid obj1;
	
	HalfStar obj2;
	RevHalfStar obj3;
	InvertedHalfStar obj4;
	Star obj5;
	HalfNumber obj6;
	InvertedHalfNumber obj7;
	FloydTri obj8;
	
	ptr =&obj1;
	ptr->print();
	
/*	ptr = &obj2;
	ptr->print();
	
	ptr = &obj3;
	ptr->print();
	
	ptr = &obj4;
	ptr->print();
	
	ptr = &obj5;
	ptr->print();  
	
	ptr = &obj6;
	ptr->print();
	
	ptr = &obj7;
	ptr->print();
	
	ptr = &obj8;
	ptr->print(); */ // uncomment to make patterns
	
}
