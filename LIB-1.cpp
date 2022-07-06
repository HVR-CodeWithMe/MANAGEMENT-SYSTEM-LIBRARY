#include<iostream>
using namespace std;
int i=0;
int lid=10,li;
struct sifo
{
	int id, bid[5],br=0;
	char fname[30]="-";
	char lname[30]="-";
	char mn[12]="-"; 		
} st[20];
class Lib
{
	public:
	string s[20]={"THE GUIDE","THE GOLDEN GATE","WINGS OF LIFE","NARCOPOLIS","MAHABHARATA","C PROG LANG","PROG WITH JAVA","PYTHON PROG","R PROGRAMMING","DATABASE SYSTEM","HARRY POTTER","BAG OF STORIES","PANCHATANTRA","CAT & HAT","CHARLOTTES WEB","DIS OF INDIA","GANDHI & IDIA","THE LOST RIVER","BUDDHA CHARITA","NATYASHASTRA"};
	string aut[20]={"R.K NARAYAN","VIKRAM SETH","ABDUL KALAM","JEET THAYIL","RAJAGOPALACHAI","REEMA THAREJA","E BALAGURUSAMY","RYAN TURNER","SANDIP RAKSHIT","S.SUDARSHAN","J.K ROWLING","SUDHA MURTY","VISHNUSHARMA","DR.SEVSS","E.B WHITE","J NEHRU JI","RAMACHANDRA","SARASVATI","ASVAGHOSA"," J.S. BHARATS "};
	int id[20],cnt[20];
	Lib()
	{
		for(int i=0;i<20;i++)
		
		id[i]=i+1,cnt[i]=5;
	}
	void books()
	{
			cout<<"BOOK NAME\t\tAUTHOR NAME\t\tID\t\tNO OF BOOKS\n";
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";	
			for(int i=0;i<20;i++)
			cout<<s[i]<<"\t\t"<<aut[i]<<"\t\t"<<id[i]<<"\t\t"<<cnt[i]<<endl;
			cout<<"-----------------------------------------------------------------------------------\n";
		}
	void stu_reg()
	{
			cout<<"Enter your name\n";
			cin>>st[i].fname;
			cout<<"Enter last name\n";
			cin>>st[i].lname;
			cout<<"Enter mobile number\n";
			cin>>st[i].mn;
			st[i].id=lid++;
			cout<<"Successfully Registered\nYour Library ID is :: "<<st[i].id<<endl;
			cout<<"...........................................\n";
			i=++i;
	}
virtual void stu_del()
	{
		int c=0;
			cout<<"Enter your id \n";
			cin>>li;
			for(int j=0;j<=i;j++)
			{
				if(li==st[j].id)
				{c++;
					cout<<"NAME: "<<st[j].fname<<" "<<st[j].lname<<"\t\t"<<"id="<<st[j].id<<endl;
					}
		}
		try
		{
         if(c==0)
         throw c; 
         }
         catch(int c)
         {
         	cout<<"User not found\n";
         }
	}
	void g_bk()
	{
		int m,li,uc=0, bid=0,k=0,bc=0;
		cout<<"Enter the lib id\n";
		cin>>li;
		for(m=0;m<=i;m++)
		if(st[m].id==li)
		{
			uc++;
		do{	cout<<"Enter book id to get book (OR) press 0 to exit\n ";
    	cin>>bid;
    	bc=0;
		for(k=0;k<20;k++)
	{
		
			if((bid==id[k] )&&(cnt[k]>0))
		{bc++;
		if(st[m].br<5)
			{cout<<"Book received:\n";
			cout<<"Book name ="<<s[k]<<"\n";
			cout<<"Book id="<<id[k]<<endl;
			cout<<"................................................\n";
			st[m].bid[st[m].br]=bid;
			st[m].bid[st[m].br]=bid;
			cnt[k]--;
			st[m].br++;}
			
		}}
		try{
			if(bc==0)
			throw bc;}
			catch(int bc)
			{cout<<"Book doesn't exist\n";
			cout<<"...............................\n";
			}
			
				try{
				if(st[m].br>=5)
				throw 5;}
				catch(int)
				{cout<<"User reached max no of books\nNo Any further Allotment\n";
				cout<<"........................................................\n";
				break;}
		
		}while(bid!=0);
		
			}
     		
    try
     	{
     		if(uc==0)
     		throw uc;
     		
     	}
     	catch(int uc)
     	{cout<<"The user didnt found\n";
		 cout<<"-------------------------------\n";}
	}
	void r_bk()
	{
		int li,bi,ct=0,uc=0;
		cout<<"Enter your id to return books\n";
		cin>>li;
		for(int j=0;j<=i;j++)
		{
			if(li==st[j].id)
			{uc++;
				cout<<"Name::"<<st[j].fname<<endl;
				do
				{
				cout<<"Enter the id of the book to return (OR)Enter 0 to exit\n";
				cin>>bi;
				if(bi==0)
				break;
				for(int k=0;k<st[j].br;k++)
				{
					if(bi==st[j].bid[k])
				{	ct++;
					cout<<"book returned\n";
					cout<<"book Name::"<<s[bi-1]<<endl;
					cout<<"book id::"<<id[bi-1]<<endl;cnt[bi-1]++;
					cout<<".........................................\n";
					for(k;k<st[j].br;k++)
					{
						st[j].bid[k]=st[j].bid[k+1];
					}
					st[j].br--;
					break;
				}
					ct=0;
			}
					try{
		if(ct==0)
		throw ct;
	}
	catch(int x)
	{
		cout<<"Sorry this book dosent exist on your ID\n";
		cout<<"-----------------------------------------\n";
	}
				}while(true);
			}
		}
		try
		{
			if(uc==0)
			throw uc;
		}
		catch(int uc)
		{
			cout<<"User doesn't exist\n";
			cout<<"-----------------------------------------\n";
		}
			}
};
class stu : public Lib 
{
	public:
	stu(){};
	void stu_del()
	{	
		for(int j=0;j<=i;j++)
		{
			if(li==st[j].id)
			{
				cout<<"Books Received by you ::"<<st[j].br<<endl;
				cout<<"BOOK NAME\t\tAUTHOR NAME\t\tID\n";
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";	
				if(st[j].br!=0)
				{
					for(int m=0;m<st[j].br;m++)
					cout<<s[st[j].bid[m]-1]<<"\t\t"<<aut[st[j].bid[m]-1]<<"\t\t"<<st[j].bid[m]<<endl;
				}
			}
		}
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
	
};
	int main()
	{
		Lib *l1b;
		Lib l1;
		stu a1;
		int o;
		cout<<"\t\tWELCOME TO LIBRARY SYSTEM\n";
		cout<<"------------------------------------------------------------------\n";
	do{
		l1b=&l1;
		cout<<"1.Books information\n2.Register\n3.know your details\n4.Get Books\n5.Return Books\n6.Exit\n";
		cout<<"\n\tENTER YOUR CHOICE:";
		cin>>o;
		cout<<"...........................................\n";
		if(o==1)
		l1b->books();
		else if(o==2)
		{
			l1b->stu_reg();
		}
		else if(o==3)
		{
		l1b->stu_del();
		l1b=&a1;
		l1b->stu_del();
				}
		else if(o==4)
		{
			l1b->g_bk();
		}
		else if(o==5)
		l1b->r_bk();
	else 
	exit(0);
	}while(1);
	}