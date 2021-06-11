#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include <ctime>

using namespace std;

class Room
{
public:
int roomid; 
string name;
string address;
string phone;
string fromdate;
string todate;
float paymentinadv;
string bookingid;

void insert1(string,string,string,string,string,float,string,int);
void addRoom(int);
void searchRoom(int);
void Delete(int);
};


ofstream exportfile ("dataexport.txt");
   time_t now = time(0);
   char* dt = ctime(&now);

struct Stroom
{
	string ac;
	string type;
	string stype;
	int rent;
    int roomnumber;
    int status;
    struct Stroom *next;
    
}*head;

struct Stcustom
{
int roomid; 
string name;
string address;
string phone;
string fromdate;
string todate;
float paymentinadv;
string bookingid;
struct Stcustom *next;
    
}*headcustom;


void insert(string ac1, string type1, string stype1, int rent1, int roomnumber1,int status1)
{
	
    struct Stroom *stobj = new Stroom ;
	stobj->ac=ac1;
	stobj->type=type1;
	stobj->stype=stype1;
	stobj->rent=rent1;
	stobj->roomnumber=roomnumber1;
	stobj->status=status1;
	stobj->next=NULL;
	
	if(head==NULL){
		head=stobj;
	}
	else{
		stobj->next=head;
		head=stobj;
	}

}

void Room::insert1(string name1, string address1, string phone1,string fromdate1, string todate1, float paymentinadv1, string bookingid1,int roomid1 )
{
	
    struct Stcustom *stobj = new Stcustom ;
	
	stobj->name=name1;
	stobj->address=address1;
	stobj->phone=phone1;
	stobj->fromdate=fromdate1;
	stobj->todate=todate1;
	stobj->paymentinadv=paymentinadv1;
	stobj->bookingid=bookingid1;
	stobj->roomid=roomid1;
	stobj->next=NULL;
	
	if(headcustom==NULL)
	{
		headcustom=stobj;
	}
	else{
		stobj->next=headcustom;
		headcustom=stobj;
	}

}

void Room::addRoom(int rno)
{
string ac;
string type;
string stype;
int rent;

int opt;

system("cls");
cout<<"                                                 ____Enter type of Rooms_____\n";
cout<<"                                                | 1. Standard                |\n";
cout<<"                                                | 2. Moderate                |\n";
cout<<"                                                | 3. superior                |\n"; 
cout<<"                                                | 4. Junior suite            |\n"; 
cout<<"                                                | 5. Suite                   |\n"; 
cout<<"                                                ------------------------------\n";
cout<<"                                                Enter Option:";
cin>>opt;

  

  	exportfile<<"Data of Room Number : "<<rno<<endl;
switch(opt)
{
case 1:
     system("cls");
cout<<"                                                 __________Standard Room info___________\n";
cout<<"                                                | Room Type Non-AC                      |\n";
cout<<"                                                | Type Comfort - Single bed             |\n";
cout<<"                                                | Type Size - Small                     |\n"; 
cout<<"                                                | Daily Rent is Rs 300 / 24 hours       |\n"; 
cout<<"                                                | Room  information Added Successfully! |\n"; 
cout<<"                                                -----------------------------------------\n";
ac="Non-AC";
exportfile<<"Room type : "<<ac<<endl;
type="Single bed ";
exportfile<<"Comfort type : "<<type<<endl;
stype="small";
exportfile<<"Type Size : "<<stype<<endl;
rent=300;
exportfile<<"Room Rent : "<<rent<<endl;

break;
case 2:
     system("cls");
cout<<"                                                 __________Moderate Room info___________\n";
cout<<"                                                | Room Type AC                          |\n";
cout<<"                                                | Type Comfort - Single bed             |\n";
cout<<"                                                | Type Size - Medium                    |\n"; 
cout<<"                                                | Daily Rent is Rs 500 / 24 hours       |\n"; 
cout<<"                                                | Room  information Added Successfully! |\n"; 
cout<<"                                                -----------------------------------------\n";
ac="AC";
exportfile<<"Room type : "<<ac<<endl;
type="Single bed ";
exportfile<<"Comfort type : "<<type<<endl;
stype="Medium";
exportfile<<"Type Size : "<<stype<<endl;
rent=500;
exportfile<<"Room Rent : "<<rent<<endl;


break;
case 3:
     system("cls");
cout<<"                                                 __________Superior Room info___________\n";
cout<<"                                                | Room Type AC                          |\n";
cout<<"                                                | Type Comfort-Double bed + living room |\n";
cout<<"                                                | Type Size - Big                       |\n"; 
cout<<"                                                | Daily Rent is Rs 1000 / 24 hours      |\n"; 
cout<<"                                                | Room  information Added Successfully! |\n"; 
cout<<"                                                -----------------------------------------\n";
ac="AC";
exportfile<<"Room type : "<<ac<<endl;
type="Double bed + living room ";
exportfile<<"Comfort type : "<<type<<endl;
stype="Big";
exportfile<<"Type Size : "<<stype<<endl;
rent=1000;
exportfile<<"Room Rent : "<<rent<<endl;

break;
case 4:
     system("cls");
cout<<"                                                 ________Junior suite Room info_________\n";
cout<<"                                                | Room Type AC                          |\n";
cout<<"                                                | Type Comfort-Doublebed+lakeview+living|\n";
cout<<"                                                | Type Size - Big                       |\n"; 
cout<<"                                                | Daily Rent is Rs 2000 / 24 hours      |\n"; 
cout<<"                                                | Room  information Added Successfully! |\n"; 
cout<<"                                                -----------------------------------------\n";
ac="AC";
exportfile<<"Room type : "<<ac<<endl;
type="Doublebed+lakeview+living";
exportfile<<"Comfort type : "<<type<<endl;
stype="Big";
exportfile<<"Type Size : "<<stype<<endl;
rent=2000;
exportfile<<"Room Rent : "<<rent<<endl;


break;
case 5:
     system("cls");
cout<<"                                                 ____________Suite Room info____________\n";
cout<<"                                                | Room Type AC                          |\n";
cout<<"                                                | Type Comfort-2bedrooms+lakeview+living|\n";
cout<<"                                                | Type Size - Big                       |\n"; 
cout<<"                                                | Daily Rent is Rs 5000 / 24 hours      |\n"; 
cout<<"                                                | Room  information Added Successfully! |\n"; 
cout<<"                                                -----------------------------------------\n";
ac="AC";
exportfile<<"Room type : "<<ac<<endl;
type="2bedrooms+lakeview+living";
exportfile<<"Comfort type : "<<type<<endl;
stype="Big";
exportfile<<"Type Size : "<<stype<<endl;
rent=5000;
exportfile<<"Room Rent : "<<rent<<endl;


break;
default:
cout<<"\nPlease Enter correct option";
break;
}
int status=0;

insert(ac,type,stype,rent,rno,status);


getch();
}
void Room::searchRoom(int rno)
{
	int flag=0;
	system("cls");
    struct Stroom *temp=head;
	while(temp!=NULL){
		if(temp->roomnumber==rno)
		{
			cout<<"Room Number : "<<temp->roomnumber<<endl;
			cout<<"Room Type : "<<temp->ac<<endl;
			cout<<"Type comfort : "<<temp->type<<endl;
			cout<<"type size : "<<temp->stype<<endl;
			cout<<"rent : "<<temp->rent<<endl;
			
		flag=1;
		}
		temp = temp->next;
	}
	if(flag==0)
	{
			cout<<rno<<" is not available ";
	}

	getch();
}

void Room ::Delete(int rno)
{
int flag=0;
struct Stroom * temp1 ,*temp2;
 temp1 = temp2 = head;
  
while(temp1!=NULL)
{
		
	if(temp1->roomnumber==rno)
	{
		cout<<"Record against this room is available \n";
		if(temp1==temp2)
		{
		head = head->next;
		delete(temp1);
		}
		else{
		temp2->next = temp1->next;
		delete(temp1); 
		}
    	flag=1;
		cout<<"Record Against Room Number "<<rno<<" is deleted\n";	
		}
		temp2 = temp1;
		temp1 = temp1->next;	
	}
	if(flag==0)
	{
	cout<<"record not found \n";
	}
	getch();
}


bool checkroomno(int rno)
{
struct Stroom *temp=head;
while(temp!=NULL)
	{

	if(temp->roomnumber==rno )
	{
    return true;
	}
	temp = temp->next;
}	
	
}


bool checkroomstatus(int rno)
{
struct Stroom *temp=head;
while(temp!=NULL)
	{

	if(temp->roomnumber==rno )
	{
	if(temp->status==1)
	{
    return true;
    }
	}
	temp = temp->next;
}	
	return false;
}



void setstatus(int rno,int stat)
{
struct Stroom *temp=head;
while(temp!=NULL)
	{
	if(temp->roomnumber==rno)
	{
	temp->status=stat;
	return;
	}
	temp = temp->next;
}	

}






class hotelmanage:protected Room
{
public:
void checkIn();
void getAvailRoom();
void searchCustomer(string );
void checkOut(int);
void guestSummaryReport();

};


void hotelmanage::guestSummaryReport()
{

struct Stcustom *temp = headcustom; 

while(temp!=NULL)
{
cout<<"\n Customer First Name : "<<temp->name;
cout<<"\n Address (only city) : "<<temp->address;
cout<<"\n Booking ID          : "<<temp->bookingid;
cout<<"\n Check in date       : "<<temp->fromdate;
cout<<"\n Checkout date       : "<<temp->todate;
cout<<"\n Occupied Room No    : "<<temp->roomid;
cout<<"\n Phone               : "<<temp->phone;
cout<<"\n---------------------------------------";

temp= temp->next;	
}

getch();
}






void hotelmanage::checkIn()
{
int found=0,rno;

cout<<"\nEnter Room number : ";
cin>>rno;


if(checkroomno(rno)==true)
{
	found=1;
}
else{
	cout<<"you need to add room first \n";
	getch();
}

if(found==1)
{
	
if(checkroomstatus(rno)==true)
{
cout<<"\nRoom is already Booked";
getch();
return;
}

struct Stcustom *temp=headcustom;

cout<<"\nEnter booking id: ";


cin>>bookingid;
exportfile<<"\nBooking id: "<<bookingid;

cout<<"\nEnter Customer Name (First Name): ";
cin>>name;
exportfile<<"\nCustomer Name : "<<name;

cout<<"\nEnter Address (only city): ";
cin>>address;
exportfile<<"\nAddress : "<<address;

cout<<"\nEnter Phone: ";
cin>>phone;
exportfile<<"\nPhone No : "<<phone;

cout<<"\nCheck-in Date and Time : ";
fromdate=dt;
cout<<fromdate;
exportfile<<"\ncheck-in Date and time: "<<fromdate;

cout<<"\nEnter to  Date: ";
cin>>todate;
exportfile<<"\nto  Date: "<<todate;

cout<<"\nEnter Advance Payment: ";
cin>>paymentinadv;
exportfile<<"\nAdvance Payment: "<<paymentinadv;

roomid=rno;
insert1(name,address,phone,fromdate,todate,paymentinadv,bookingid,roomid);


setstatus(rno,1);


cout<<"\n Customer Checked-in Successfully..";
getch();
return;
}

}



void hotelmanage::getAvailRoom()
{
int found=0;

struct Stroom *temp = head;

while(temp!=NULL)
{
if(temp->status==0)
{

cout<<"Room no "<<temp->roomnumber<<" is Available \n"; 

found=1;

}
temp = temp->next;
}
getch();
if(found==0)
{
cout<<"\nAll rooms are reserved";
getch();
}
}



void hotelmanage::searchCustomer(string pname)
{
int i,found=0;

struct Stcustom *tempcust = headcustom;
while(tempcust!=NULL)
{
if(tempcust->name==pname)
{
cout<<"\nCustomer Name: "<<tempcust->name;
cout<<"\nRoom Number: "<<tempcust->roomid;

cout<<"\n\n Record desplayed Press enter for next record";
found=1;
getch();
}
tempcust=tempcust->next;
}

if(found==0)
{
cout<<"\nPerson not found.";
getch();
}
}


void hotelmanage::checkOut(int roomNum)
{

struct Stroom *temp=head;

struct Stcustom *tempcust=headcustom;

int i,found=0,days,rno,rent;
float billAmount=0;

	while(temp!=NULL)
	{
		if(temp->roomnumber==roomNum)
		{
			rent=temp->rent;
		}
		temp = temp->next;
}

if(checkroomstatus(roomNum)==true && checkroomno(roomNum)==true)
{
	
cout<<"\nEnter Number of Days:\t";
cin>>days;
billAmount=days * rent;



while(tempcust!=NULL)
{
	
if(tempcust->roomid==roomNum)
{

cout<<"                                                 ________________________ Checkout Details _______________________\n";
cout<<"                                                |Customer Name : "<<tempcust->name<<"\n";
cout<<"                                                |Room Number : "<<tempcust->roomid<<"\n";
cout<<"                                                |Address : "<<tempcust->address<<"\n";
cout<<"                                                |Phone : "<<tempcust->phone<<"\n";
cout<<"                                                |Total Amount Due : "<<billAmount<<"\n";
cout<<"                                                |Advance Paid: "<<tempcust->paymentinadv<<"\n";
cout<<"                                                |Total Payable: "<<billAmount-tempcust->paymentinadv<<"only"<<"\n";
cout<<"                                                -------------------------------------------------------------------\n";

setstatus(roomNum,0);
}
tempcust= tempcust->next;

}

}

getch();
}




void manageRooms()
{
class Room room;

int opt,rno,flag=0;

do
{
system("cls");
cout<<"                                                 ________Manage rooms________\n";
cout<<"                                                | 1. Add Rooms               |\n";
cout<<"                                                | 2. Search Room             |\n";
cout<<"                                                | 3. Delete Room             |\n";
cout<<"                                                | 4. Back to main menu       |\n"; 
cout<<"                                                ------------------------------\n";
cout<<"                                                Enter Option:";
cin>>opt;


switch(opt)
{
case 1:
cout<<"\nEnter Room Number: ";
cin>>rno;

if(checkroomno(rno)==true)
{
	flag=1;
}
if(flag==1)
{
cout<<"\nRoom Number is already Present\n ";
cout<<"Please enter Different Number";
flag=0;
getch();
}
else
{
room.addRoom(rno);

}
break;
case 2:
cout<<"\nEnter room number: ";
cin>>rno;
room.searchRoom(rno);
break;
case 3:
cout<<"\nEnter room number to delete: ";
cin>>rno;
room.Delete(rno);
break;
case 4 :

default:
cout<<"\nPlease Enter correct option";
break;
}
}while(opt!=4);
}


int main()
{
class hotelmanage hm;
int opt,rno;
char ch;
string sname;

system("cls");

do
{
system("cls");
cout<<"                                                 _____ Hotel Management _____\n";
cout<<"                                                | 1. Manage Rooms            |\n";
cout<<"                                                | 2. Check-In Room           |\n";
cout<<"                                                | 3. Available Rooms         |\n";
cout<<"                                                | 4. Search Customer By Name |\n";
cout<<"                                                | 5. Check-Out Room          |\n";
cout<<"                                                | 6. Summary                 |\n";
cout<<"                                                | 7. Exit                    |\n";
cout<<"                                                ------------------------------\n";
cout<<"                                                Enter Option:";
cin>>opt;
switch(opt)
{
case 1:
manageRooms();
break;
case 2:
hm.checkIn();
break;
case 3:
hm.getAvailRoom();
break;
case 4:
cout<<"Enter Customer Name: ";
cin>>sname;
hm.searchCustomer(sname);
break;
case 5:
cout<<"Enter Room Number : ";
cin>>rno;
hm.checkOut(rno);
break;
case 6:
hm.guestSummaryReport();	
break;
case 7:
cout<<"\n\n\n                                                   EXITING PROGRAM";
abort();
exit(0);
break;
default:
cout<<"\nPlease Enter correct option";
break;
}
}while(opt!=7);

getch();
}
