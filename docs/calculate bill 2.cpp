
///////////////////////////////////////////////////
//Example class Hotel : Has a Relation.
//Lecture of OOP, 2nd Semester.
//created by: Faizullah Balghari
//Creation Date: 4-03-2023
////////////////////////////////////////////////////
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<functional>
using namespace std;
/////////////////////////////////////////////////////
static int bill;//static variable bill
static int menu;
/************ hotel **************///////////////////
class CalculateBill{
	private:
	int bill;
      int chawal,daal,doodh,dahi,adrekLeh,piaz,timater,sabzi,oil,roti,d_roti,khera,gosht,masalh;
	public:
    CalculateBill(){
      bill=0;
	  chawal=0;
      daal=0;
      doodh=0;
      dahi=0;
      adrekLeh=0;
      piaz=0;
      timater=0;
      oil=0;
      khera=0;
      roti=0;
      sabzi=0;
      gosht=0;
      masalh=0;
      menu=0;

	cout<<"	Welcome to Mess menu!"<<endl;
	cout<<"----------------------------------"<<endl;
    }
        void takeMenu();
        void breakFast();
        void selectTodayMenu();
	    void TakeBiryaniData();
	    void TakeKarahiData();
	    void TakePolaveData();
	    void TakeHaddiData();
	    void TakeSabziData();
	    void TakeDallData();
	    void showBill();
	    
};
 void CalculateBill::selectTodayMenu(){
      cout<<"enter option today menu"<<endl;
 
      cout<<"1 for Biryani: "<<endl;
      cout<<"2 for Karahi: "<<endl;
      cout<<"3 for haddi: "<<endl;
      cout<<"4 for Daal: "<<endl;
      cout<<"5 for Polave: "<<endl;
      cout<<"6 for Sabzi: "<<endl;
//      cout<<"3 for haddi: "<<endl;
//      cout<<"4 for Daal: "<<endl;
      cin>>menu;
 
 }
 void CalculateBill::TakeBiryaniData(){
		    cout<<"enter price of Chawal: ";
	        cin>>chawal;
			        ::bill+=chawal;
   		    cout<<"enter price of gosht: ";
	        cin>>gosht;
			        ::bill+=gosht;
   		    cout<<"enter price of masalh: ";
	        cin>>masalh;
			        ::bill+=masalh;								  		         
		   		          
		    cout<<"enter price of dahi: ";
	        cin>>dahi;
			        ::bill+=dahi;
		    cout<<"enter price of adrekLeh: ";
	        cin>>adrekLeh;
			        ::bill+=adrekLeh;
   		    cout<<"enter price of piaz: ";
	        cin>>piaz;
			        ::bill+=piaz;
   		    cout<<"enter price of timater: ";
	        cin>>timater;
			        ::bill+=timater;
 		    cout<<"enter price of oil: ";
	        cin>>oil;
			        ::bill+=oil;
		    cout<<"enter price of khera: ";
	        cin>>khera;
			        ::bill+=khera;		   		          

		}
 void CalculateBill::TakeKarahiData(){

   		    cout<<"enter price of gosht: ";
	        cin>>gosht;
			        ::bill+=gosht;
   		    cout<<"enter price of masalh: ";
	        cin>>masalh;
			        ::bill+=masalh;								  		         
		    cout<<"enter price of adrekLeh: ";
	        cin>>adrekLeh;
			        ::bill+=adrekLeh;
   		    cout<<"enter price of piaz: ";
	        cin>>piaz;
			        ::bill+=piaz;
   		    cout<<"enter price of timater: ";
	        cin>>timater;
			        ::bill+=timater;
 		    cout<<"enter price of oil: ";
	        cin>>oil;
			        ::bill+=oil;
 		    cout<<"enter price of dinner roti: ";
	        cin>>d_roti;
			        ::bill+=d_roti;
		}
void CalculateBill::TakePolaveData(){
		    cout<<"enter price of Chawal: ";
	        cin>>chawal;
			        ::bill+=chawal;
   		    cout<<"enter price of gosht: ";
	        cin>>gosht;
			        ::bill+=gosht;
		    cout<<"enter price of dahi: ";
	        cin>>dahi;
			        ::bill+=dahi;
		    cout<<"enter price of Adrek Lehsen: ";
	        cin>>adrekLeh;
			        ::bill+=adrekLeh;
   		    cout<<"enter price of piaz: ";
	        cin>>piaz;
			        ::bill+=piaz;
   		    cout<<"enter price of timater: ";
	        cin>>timater;
			        ::bill+=timater;
 		    cout<<"enter price of oil: ";
	        cin>>oil;
			        ::bill+=oil;		   		          
		}
 void CalculateBill::TakeHaddiData(){

   		    cout<<"enter price of gosht: ";
	        cin>>gosht;
			        ::bill+=gosht;
   		    cout<<"enter price of masalh: ";
	        cin>>masalh;
			        ::bill+=masalh;								  		         
		    cout<<"enter price of adrekLeh: ";
	        cin>>adrekLeh;
			        ::bill+=adrekLeh;
   		    cout<<"enter price of piaz: ";
	        cin>>piaz;
			        ::bill+=piaz;
   		    cout<<"enter price of timater: ";
	        cin>>timater;
			        ::bill+=timater;
 		    cout<<"enter price of oil: ";
	        cin>>oil;
			        ::bill+=oil;
 		    cout<<"enter price of dinner roti: ";
	        cin>>d_roti;
			        ::bill+=d_roti;
		}
  void CalculateBill::TakeDallData(){
		    cout<<"enter price of Daal: ";
	        cin>>daal;
			        ::bill+=daal;
		    cout<<"enter price of adrekLeh: ";
	        cin>>adrekLeh;
			        ::bill+=adrekLeh;
   		    cout<<"enter price of piaz: ";
	        cin>>piaz;
			        ::bill+=piaz;
   		    cout<<"enter price of timater: ";
	        cin>>timater;
			        ::bill+=timater;
 		    cout<<"enter price of oil: ";
	        cin>>oil;
			        ::bill+=oil;
 		    cout<<"enter price of dinner roti: ";
	        cin>>d_roti;
			        ::bill+=d_roti;
		}
 void CalculateBill::TakeSabziData(){

   		    cout<<"enter price of sabzi except piaz,timater and Adrek Lehsen: ";
	        cin>>sabzi;
			        ::bill+=sabzi;								  		         
		    cout<<"enter price of adrekLeh: ";
	        cin>>adrekLeh;
			        ::bill+=adrekLeh;
   		    cout<<"enter price of piaz: ";
	        cin>>piaz;
			        ::bill+=piaz;
   		    cout<<"enter price of timater: ";
	        cin>>timater;
			        ::bill+=timater;
 		    cout<<"enter price of oil: ";
	        cin>>oil;
			        ::bill+=oil;
 		    cout<<"enter price of dinner roti: ";
	        cin>>d_roti;
			        ::bill+=d_roti;
		}
  void CalculateBill::breakFast(){
   		    cout<<"enter price of breakfast roti: ";
	        cin>>roti;
			        ::bill+=roti;
		    cout<<"enter price of doodh: ";
	        cin>>doodh;
			        ::bill+=doodh;  
  }
 void CalculateBill::showBill(){
              cout<<"-------------------------------------"<<endl;
              cout<<"total price is Rs."<<::bill<<endl;
              cout<<"-------------------------------------"<<endl; 
		 }
int main(){
int p=0;
CalculateBill Checkbill;
Checkbill.breakFast();
Checkbill.selectTodayMenu();


if(menu==1){
Checkbill.TakeBiryaniData();
}
else if(menu==2){
Checkbill.TakeKarahiData();
}
else if(menu==3){
Checkbill.TakeHaddiData();
}
else if(menu==4){
Checkbill.TakeDallData();
}
else if(menu==5){
Checkbill.TakePolaveData();
}
else if(menu==6){
Checkbill.TakeSabziData();
}
else{
cout<<"you enter invalid choice";
exit(0);

}
Checkbill.showBill();
cout<<"enter number of people include in today mess: ";
cin>>p;
              cout<<"per head price is Rs."<<bill/p<<endl;
}
