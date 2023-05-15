//junaidabid 215196
//amjad khalil 215180
//riaz gul 215164
//osama mehram 215193

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int clothing();
int shoes();
int graphics_card();
int laptops();
int main()
{
	char choose,m,client;
	int bill1=0,bill2=0,bill3=0,bill4=0,t_bill=0,f_bill=0,discount,netsale=0,tdis=0,tc=0,total_client=0,regn=215164,regnn=215164;
	ofstream MyFile("Bills.txt");
	do
	{
	do
	{
	
	cout<<"\t\t\tWELCOME TO OUR MALL:"<<endl;
	cout<<"WE HAVE THESE STORE IN OUR MALL: "<<endl;
	cout<<"HOW CAN WE HELP YOU:"<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"| A=CLOTHING |  | B=SHOES |  | C=GRAPHIC CARDS |  | D=LABTOPS | "<<endl;
	cout<<"----------------------------------------------------------------"<<endl;
	cout<<"CHOOSE THE STORE FOR SHOPPING:"<<endl;
	cin>>choose;
	if((choose=='A')||(choose=='a'))
	{
		bill1=0;
		bill2=0;
		bill3=0;
		bill4=0;
		bill1=clothing();
	
	}
	else if((choose=='B')||(choose=='b'))
	{
		bill1=0;
		bill2=0;
		bill3=0;
		bill4=0;
	bill2=shoes();
	}
	else if((choose=='C')||(choose=='c'))
	{
		bill1=0;
		bill2=0;
		bill3=0;
		bill4=0;
	bill3=graphics_card();
	}
		else if((choose=='D')||(choose=='d'))
	{
		bill1=0;
		bill2=0;
		bill3=0;
		bill4=0;
	bill4=laptops();
	}
	t_bill=t_bill+bill1+bill2+bill3+bill4;
	
	
cout<<"PRESS 'M' TO GO TO THE MAIN MENU OF THE MALL:"<<endl;
cout<<"PRESS ANY KEY TO END SHOPPING AND SHOW YOUR BILL:"<<endl;
cin>>m;	
system("cls");
}
while((m=='m')||(m=='M'));
regnn=regn-1;
cout<<"*********************************************************************"<<endl;
cout<<"\tCURRENT SERIAL NO# "<<++regn<<"\t\t PREVIOUS SR# "<<++regnn<<endl;
cout<<"\t\t\t*****YOUR BILL IS "<<t_bill<<" RS*****"<<endl;
cout<<"\t\t\t*****DISCOUNT =";
cin>>discount;
f_bill=t_bill-discount;
cout<<"\t\t\t*****YOUR NET BILL ="<<f_bill<<" RS*****"<<endl;
cout<<"***********************************************************************"<<endl;
MyFile << "*************************************************************************"<<endl;
MyFile <<"\tCURRENT SERIAL NO# "<<++regn<<"\t\t PREVIOUS SR# "<<++regnn<<endl;
MyFile <<"\t\t\t*****YOUR BILL IS "<<t_bill<<" RS*****"<<endl;
MyFile <<"\t\t\t*****DISCOUNT ="<<discount<<endl;
MyFile <<"\t\t\t*****YOUR NET BILL ="<<f_bill<<" RS*****"<<endl;
MyFile <<"*************************************************************************"<<endl;f_bill;
	 MyFile.close();
total_client=total_client+1;
netsale=netsale+f_bill;
		tdis=tdis+discount;
		t_bill=0;
	//	regn++;
		cout<<"DO U HAVE ANY OTHER CLIENT:....IF U HAVE ANY OTHER CLIENT PRESS'Y'"<<endl;
		cout<<"PESS ANY KEY TO CLOSE YOUR MALL AND GIVE YOU TODAY DETAILS:";
		
		cin>>client;
	}
		while((client=='Y')||(client=='y'));
			cout<<"\t\t\tTODAY TOTAL SALE="<<netsale<<endl;
	cout<<"\t\t\tTODAY TOTAL DISCONT="<<tdis<<endl;
	cout<<"\t\t\tTODAY TOTAL CLIENT="<<total_client<<endl;
	
}
int shoes()
{
	int size=15,choice,buy,total=0,total_p=0,t_qantity;
	char ch;
	string str[size]={"Nike","New balance","Adidas","Puma","Converse","Reeboksports","Vans","Asics","Brooks ","Gucci","Fila","Jordan","Crocs","clarks","Merrell"};
	int price[size]={15000,23000,30000,40000,12000,14000,17000,21000,20000,10000,11000,14000,13000,14000,15000};
	int qantity[size]={14,15,15,16,14,14,17,18,25,19,15,19,16,18,13};
	cout<<"\t\tSHOES"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"WE HAVE THIS VARIETY OF SHOES: "<<endl;
	do
	{
	for(int j=0;j<size;j++)
	{
		cout<<j+1<<"- "<<str[j]<<"\n";//<<" = "<<price[j]<<" qantity "<<qantity[j];
		
	}
	cout<<"***********************************************"<<endl;
	cout<<"WHICH BRAND DO YOU WANT TO BUY?";
 cin>>choice;
 system("cls");
	switch(choice)
	{
		case 1:
			cout<<"*******"<<str[0]<<"*******"<<endl;
			cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[0]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[0]<<"."<<endl;
			if(qantity[0]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[0])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[0]*buy;
			qantity[0]=qantity[0]-buy;
			break;
			case 2:
			cout<<"*******"<<str[1]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[1]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[1]<<"."<<endl;
			if(qantity[1]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[1])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[1]*buy;
			qantity[1]=qantity[1]-buy;
			break;
			case 3:
			cout<<"*******"<<str[2]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[2]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[2]<<"."<<endl;
			if(qantity[2]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[2])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[2]*buy;
			qantity[2]=qantity[2]-buy;
			break;
			case 4:
			cout<<"*******"<<str[3]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[3]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[3]<<"."<<endl;
			if(qantity[3]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[3])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[3]*buy;
			qantity[3]=qantity[3]-buy;
			break;
			case 5:
			cout<<"*******"<<str[4]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[4]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[4]<<"."<<endl;
			if(qantity[4]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[4])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[4]*buy;
			qantity[4]=qantity[4]-buy;
			break;
			case 6:
			cout<<"*******"<<str[5]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[5]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[5]<<"."<<endl;
			if(qantity[5]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[5])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[5]*buy;
			qantity[5]=qantity[5]-buy;
			break;
			case 7:
			cout<<"*******"<<str[6]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[6]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[6]<<"."<<endl;
			if(qantity[6]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[6])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[6]*buy;
			qantity[6]=qantity[6]-buy;
			break;
			case 8:
			cout<<"*******"<<str[7]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[7]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[7]<<"."<<endl;
			if(qantity[7]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[7])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[7]*buy;
			qantity[7]=qantity[7]-buy;
			break;
			case 9:
			cout<<"*******"<<str[8]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[8]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[8]<<"."<<endl;
			if(qantity[8]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[8])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[8]*buy;
			qantity[8]=qantity[8]-buy;
			break;
			case 10:
			cout<<"*******"<<str[9]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[9]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[9]<<"."<<endl;
			if(qantity[9]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[9])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[9]*buy;
			qantity[9]=qantity[9]-buy;
			break;
			case 11:
			cout<<"*******"<<str[10]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[10]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[10]<<"."<<endl;
			if(qantity[10]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[10])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[10]*buy;
			qantity[10]=qantity[10]-buy;
			break;
			case 12:
			cout<<"*******"<<str[11]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[11]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[11]<<"."<<endl;
			if(qantity[11]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[11])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[11]*buy;
			qantity[11]=qantity[11]-buy;
			break;
			case 13:
			cout<<"*******"<<str[12]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[12]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[12]<<"."<<endl;
			if(qantity[12]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[12])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[12]*buy;
			qantity[12]=qantity[12]-buy;
			break;
			case 14:
			cout<<"*******"<<str[13]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[13]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[13]<<"."<<endl;
			if(qantity[13]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[13])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[13]*buy;
			qantity[13]=qantity[13]-buy;
			break;
			case 15:
			cout<<"*******"<<str[14]<<"*******"<<endl;
				cout<<"THIS BRAND IS A GOOD QUALITY OF SHOES :"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[14]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[14]<<"."<<endl;
			if(qantity[14]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[14])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[14]*buy;
			qantity[14]=qantity[14]-buy;
			break;
		
	}
	total_p=total_p+total;
	cout<<"PRESS 'Q' TO RETURN TO MAIN MENU:"<<endl;
		cout<<"PRESS ANY KEY TO END YOUR SHOPPING IN THIS STORE."<<endl;
	cin>>ch;

}
while((ch=='Q')||(ch=='q'));
return total_p;
//cout<<"total="<<total_p<<endl;
}
int clothing()
{
	int size=15,choice,buy,total=0,total_p=0,t_qantity;
	char ch;
	string str[size]={"lone","cotton","bridal","fancy","marina","maria b","valvet","remsha","pasha","kaadi","gul ahmed","bonanza","shista","zari","washing wear"};
	int price[size]={1150,1250,35000,5000,2500,15000,8500,7000,3000,7000,6000,7000,12500,8000,2000};
	int qantity[size]={11,12,13,11,14,21,12,11,5,14,5,9,16,18,16};
	cout<<"\t\tCLOTHING"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"We have this variety of clothing"<<endl;
	do
	{
	for(int j=0;j<size;j++)
	{
		cout<<j+1<<"- "<<str[j]<<endl;//<<" = "<<price[j]<<" qantity "<<qantity[j];
		
	}
	cout<<"***********************************************"<<endl;
	cout<<"Which brand do u want to buy?";
 cin>>choice;
 system("cls");
	switch(choice)
	{
		case 1:
			cout<<"*******"<<str[0]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[0]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[0]<<"."<<endl;
			if(qantity[0]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[0])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[0]*buy;
			qantity[0]=qantity[0]-buy;
			break;
			case 2:
			cout<<"*******"<<str[1]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[1]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[1]<<"."<<endl;
			if(qantity[1]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[1])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[1]*buy;
			qantity[1]=qantity[1]-buy;
			break;
			case 3:
			cout<<"*******"<<str[2]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[2]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[2]<<"."<<endl;
			if(qantity[2]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[2])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[2]*buy;
			qantity[2]=qantity[2]-buy;
			break;
			case 4:
			cout<<"*******"<<str[3]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[3]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[3]<<"."<<endl;
			if(qantity[3]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[3])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[3]*buy;
			qantity[3]=qantity[3]-buy;
			break;
			case 5:
			cout<<"*******"<<str[4]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[4]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[4]<<"."<<endl;
			if(qantity[4]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[4])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[4]*buy;
			qantity[4]=qantity[4]-buy;
			break;
			case 6:
			cout<<"*******"<<str[5]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[5]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[5]<<"."<<endl;
			if(qantity[5]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[5])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[5]*buy;
			qantity[5]=qantity[5]-buy;
			break;
			case 7:
			cout<<"*******"<<str[6]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[6]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[6]<<"."<<endl;
			if(qantity[6]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[6])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[6]*buy;
			qantity[6]=qantity[6]-buy;
			break;
			case 8:
			cout<<"*******"<<str[7]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[7]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[7]<<"."<<endl;
			if(qantity[7]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[7])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[7]*buy;
			qantity[7]=qantity[7]-buy;
			break;
			case 9:
			cout<<"*******"<<str[8]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[8]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[8]<<"."<<endl;
			if(qantity[8]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[8])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[8]*buy;
			qantity[8]=qantity[8]-buy;
			break;
			case 10:
			cout<<"*******"<<str[9]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[9]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[9]<<"."<<endl;
			if(qantity[9]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[9])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[9]*buy;
			qantity[9]=qantity[9]-buy;
			break;
			case 11:
			cout<<"*******"<<str[10]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[10]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[10]<<"."<<endl;
			if(qantity[10]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[10])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[10]*buy;
			qantity[10]=qantity[10]-buy;
			break;
			case 12:
			cout<<"*******"<<str[11]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[11]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[11]<<"."<<endl;
			if(qantity[11]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[11])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[11]*buy;
			qantity[11]=qantity[11]-buy;
			break;
			case 13:
			cout<<"*******"<<str[12]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[12]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[12]<<"."<<endl;
			if(qantity[12]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[12])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[12]*buy;
			qantity[12]=qantity[12]-buy;
			break;
			case 14:
			cout<<"*******"<<str[13]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[13]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[13]<<"."<<endl;
			if(qantity[13]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[13])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[13]*buy;
			qantity[13]=qantity[13]-buy;
			break;
			case 15:
			cout<<"*******"<<str[14]<<"*******"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[14]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[14]<<"."<<endl;
			if(qantity[14]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[14])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[14]*buy;
			qantity[14]=qantity[14]-buy;
			break;
		
	}
	total_p=total_p+total;
	cout<<"PRESS 'Q' TO RETURN TO MAIN MENU:"<<endl;
		cout<<"PRESS ANY KEY TO END YOUR SHOPPING IN THIS STORE."<<endl;
	cin>>ch;
}
while((ch=='Q')||(ch=='q'));
return total_p;
//cout<<"total="<<total_p<<endl;
}
int graphics_card()
{
	int size=10,choice,buy,total=0,total_p=0,t_qantity;
	char ch;
	string str[size]={"MSI GeForce RTX 3070","MSI RTX 3090 Gaming X Trio","Nvidia GeForce RTX 3080 Ti","Nvidia GeForce GTX 1660 Ti","AMD Radeon RX 6800","AMD Radeon Pro WX8200","AMD Radeon RX 5700","Nvidia Quadro RTX 5000","Gigabyte Aorus GeForce RTX 3080","Nvidia Quadro RTX 4000"};
	int price[size]={4000,2000,36000,44000,55000,6600,7200,8400,9400,11000};
	int qantity[size]={11,12,13,11,14,21,12,11,5,14,};
	cout<<"\t\t GRAPHICS CARDS"<<endl;
	cout<<"***************"<<endl;
	cout<<"We have this variety of graphics card"<<endl;
	do
	{
	for(int j=0;j<size;j++)
	{
		cout<<j+1<<"- "<<str[j]<<endl;//<<" = "<<price[j]<<" qantity "<<qantity[j];
		
	}
	cout<<"*****************"<<endl;
	cout<<"Which brand do u want to buy?";
 cin>>choice;
 system("cls");
	switch(choice)
	{
		case 1:
			cout<<"**"<<str[0]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD :"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[0]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[0]<<"."<<endl;
			if(qantity[0]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[0])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[0]*buy;
			qantity[0]=qantity[0]-buy;
			break;
			case 2:
			cout<<"**"<<str[1]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[1]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[1]<<"."<<endl;
			if(qantity[1]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[1])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[1]*buy;
			qantity[1]=qantity[1]-buy;
			break;
			case 3:
			cout<<"**"<<str[2]<<"**"<<endl;
			cout<<"THIS BRAND HAVE A GOOD FABRIC:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[2]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[2]<<"."<<endl;
			if(qantity[2]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[2])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[2]*buy;
			qantity[2]=qantity[2]-buy;
			break;
			case 4:
			cout<<"**"<<str[3]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[3]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[3]<<"."<<endl;
			if(qantity[3]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[3])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[3]*buy;
			qantity[3]=qantity[3]-buy;
			break;
			case 5:
			cout<<"**"<<str[4]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[4]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[4]<<"."<<endl;
			if(qantity[4]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[4])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[4]*buy;
			qantity[4]=qantity[4]-buy;
			break;
			case 6:
			cout<<"**"<<str[5]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD RIGHT NOW:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[5]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[5]<<"."<<endl;
			if(qantity[5]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[5])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[5]*buy;
			qantity[5]=qantity[5]-buy;
			break;
			case 7:
			cout<<"**"<<str[6]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[6]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[6]<<"."<<endl;
			if(qantity[6]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[6])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[6]*buy;
			qantity[6]=qantity[6]-buy;
			break;
			case 8:
			cout<<"**"<<str[7]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD RIGHT NOW:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[7]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[7]<<"."<<endl;
			if(qantity[7]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[7])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[7]*buy;
			qantity[7]=qantity[7]-buy;
			break;
			case 9:
			cout<<"**"<<str[8]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD RIGHT NOW:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[8]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[8]<<"."<<endl;
			if(qantity[8]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[8])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[8]*buy;
			qantity[8]=qantity[8]-buy;
			break;
			case 10:
			cout<<"**"<<str[9]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD RIGHT NOW:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[9]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[9]<<"."<<endl;
			if(qantity[9]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[9])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[9]*buy;
			qantity[9]=qantity[9]-buy;
			break;
			case 11:
			cout<<"**"<<str[10]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD RIGHT NOW:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[10]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[10]<<"."<<endl;
			if(qantity[10]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[10])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[10]*buy;
			qantity[10]=qantity[10]-buy;
			break;
			case 12:
			cout<<"**"<<str[11]<<"**"<<endl;
			cout<<"ONE OF THE BEST QUALITY GRAPHIC CARD RIGHT NOW:"<<endl;
			cout<<"______________"<<endl;
			cout<<"PRICE="<<price[11]<<"RS"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[11]<<"."<<endl;
			if(qantity[11]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
		}
			total=price[10]*buy;
			qantity[10]=qantity[10]-buy;
			break;
		
	}
	total_p=total_p+total;
	cout<<"Press anykey to end the shopping"<<endl;
	cout<<"PRESS 'Q' TO RETURN TO MAIN MENU:";
	cin>>ch;
}
while((ch=='Q')||(ch=='q'));
return total_p;
//cout<<"total="<<total_p;
}
int laptops()
{
	int size=5,choice,buy,total=0,total_p=0,t_qantity;
	char ch;
	string str[size]={"Hp","Dell","Apple","Asus","Lenovo"};
	int price[size]={1099,1159,799,2349,1750};
	int qantity[size]={5,12,6,10,8};
	cout<<"\t\t\LAPTOPS"<<endl;
	cout<<"*******************************************"<<endl;
	cout<<"WE HAVE THESE VARIETY OF LAPTOPS:"<<endl;
	do
	{
	for(int j=0;j<size;j++)
	{
		cout<<j+1<<"- "<<str[j]<<endl;//<<" = "<<price[j]<<" qantity "<<qantity[j];
		
	}
	cout<<"***********************************************"<<endl;
	cout<<"Which brand do u want to buy?";
 cin>>choice;
 system("cls");
	switch(choice)
	{
		case 1:
			cout<<"*******"<<str[0]<<"*******"<<endl;
			cout<<"Windows 10 Pro 64, 10th Generation Intel® Core™ i7 processor,8 GB memory"<<endl;
			cout<<" 256 GB SSD storage, 32 GB eMMC storage 13.3' diagonal FHD display"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[0]<<"$"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[0]<<"."<<endl;
			if(qantity[0]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[0])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[0]*buy;
			qantity[0]=qantity[0]-buy;
			break;
			case 2:
			cout<<"*******"<<str[1]<<"*******"<<endl;
			cout<<"Up to 11th Gen Intel Core i9 11900H"<<endl;
			cout<<"Up to Windows 11 Home, English"<<endl;
			cout<<"Up to NVIDIA® GeForce RTX™ 3080 8GB GDDR6, 15.6 - inch"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[1]<<"$"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[1]<<"."<<endl;
			if(qantity[1]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[1])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[1]*buy;
			qantity[1]=qantity[1]-buy;
			break;
			case 3:
			cout<<"*******"<<str[2]<<"*******"<<endl;
			cout<<"8-core CPU with 4 performance cores and 4 efficiency cores 8-core GPU"<<endl;
			cout<<"16-core Neural Engine,8 GB memory"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[2]<<"$"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[2]<<"."<<endl;
			if(qantity[2]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[2])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[2]*buy;
			qantity[2]=qantity[2]-buy;
			break;
			case 4:
			cout<<"*******"<<str[3]<<"*******"<<endl;
			cout<<"Windows 10 Pro 64, 11th Generation Intel® Core™ i5 processor,8 GB memory"<<endl;
			cout<<" 512 GB SSD storage, 12 GB eMMC storage 15.6' diagonal FHD display"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[3]<<"$"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[3]<<"."<<endl;
			if(qantity[3]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[3])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[3]*buy;
			qantity[3]=qantity[3]-buy;
			break;
			case 5:
			cout<<"*******"<<str[4]<<"*******"<<endl;
			cout<<"Windows 10 Pro 64, 8th Generation Intel® Core™ i5 processor,8 GB memory"<<endl;
			cout<<" 128 GB SSD storage, 8 GB eMMC storage 15.6' diagonal FHD display"<<endl;
			cout<<"______________________________________"<<endl;
			cout<<"PRICE="<<price[4]<<"$"<<endl;
			cout<<"PIECES IN STOCK="<<qantity[4]<<"."<<endl;
			if(qantity[4]<=0)
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			else
			{
			cout<<"HOW MANY DO U WANT TO BUY:"<<endl;
			cin>>buy;
			if(buy>qantity[4])
			{
				cout<<"SORRY THERE IS NOT ENOUGH STOCK"<<endl;
				buy=0;
			}
			}
			total=price[4]*buy;
			qantity[4]=qantity[4]-buy;
			break;
		
		
	}
	total_p=total_p+total;
	cout<<"PRESS 'Q' TO RETURN TO MAIN MENU:"<<endl;
		cout<<"PRESS ANY KEY TO END YOUR SHOPPING IN THIS STORE."<<endl;
	cin>>ch;
}
while((ch=='Q')||(ch=='q'));
return total_p;
}

