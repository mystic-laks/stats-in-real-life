#include<iostream>
using namespace std;
 class A
 {
 	public:
 		virtual void calc()=0;
 };
 		
 		class B:public A{
 			public:
 				int i,j;
 				int x,y;
 				int temp,count=1;
 				float large=0;
 				void calc()
 				{
 					cout<<"enter the number of slots"<<endl;
 					cin>>x;
 					cout<<"enter the quantity of missiles in each slot for testing"<<endl;
 					cin>>y;
 					float a[100][100];
 					float sum[100];
 					float summ=0;
 					float avg[100];
 					float var[100];
 					float vari=0;
 					for(i=0;i<x;i++)
 					{
 						cout<<"enter the range of missiles for slot "<<i+1<<endl;
 						for(j=0;j<y;j++)
 						{
 							cin>>a[i][j];
						 }
						 cout<<endl;
					 }
					 for(i=0;i<x;i++)
					 {
					 	for(j=0;j<y;j++)
					 	{
					 		summ=summ+a[i][j];
						 }
						 sum[i]=summ;
						 summ=0;
					 }
					 for(i=0;i<x;i++)
					 {
					 	avg[i]=(sum[i])/y;
					 }
					 cout<<avg[0]<<avg[1]<<endl;
					  
					  for(i=0;i<x;i++)
					  {
					  	for(j=0;j<y;j++)
					  	{
					  		
					  		var[i]=vari+((a[i][j]-avg[i])*(a[i][j]-avg[i]))/(y-1);
					  		
						  }
					  }
					  
					  cout<<"the details of the breeds are as follows: "<<endl;
					  for(i=0;i<x;i++)
					  {
					  	cout<<"these are the details for the breed "<<i+1<<endl;
					  	cout<<"average depth of seeds are "<<avg[i]<<endl;
					  	cout<<"the variance about mean of depth of seeds is "<<var[i]<<endl;
					  	cout<<endl<<endl<<endl;
					  }
					  large=avg[0];
					  for(i=1;i<x;i++)
					  {
					  	
						if(large<avg[i])
						{
							large=avg[i];
							count=i+1;
						 }					  	
					  }
					  cout<<endl<<endl<<endl;
					  
					  cout<<"  "<<large<<endl;;
					  cout<<"  "<<count<<"is the best breed "<<endl;
					  cout<<"for checking the best slot follow the following steps "<<endl;
					  cout<<"average range of missiles in slot  to should be high "<<endl;
					  cout<<"if the average range  of missiles  are same while comparing two slots then go for variance "<<endl;
					  cout<<"lower is the variance lower will be the spread of seeds and hence better is the breed "<<endl;
					  cout<<endl<<endl<<endl<<endl;
				}
					 
					 
 					
 					
				 };
		 int main()
		 {
		 	 A *p;
		 	 B ob;
		 	 int choice;
		 	 while(1)
		 	 {
		 	 	cout<<"enter 1 for entering the program "<<endl;
		 	 	cout<<"enter 2 for quitting the program "<<endl;
		 	 	cin>>choice;
		 	 	switch(choice)
		 	 	{
		 	 		case 1:
		 	 			{
		 	 				p=&ob;
		 	 				p->calc();
		 	 				break;
						  }
						  case 2:
						  	{
							  
						  	exit(1);
						  	break;
						  }
						  default:
						  	cout<<"enter valid choice "<<endl;
				  }
			  }
			  return 0;
		 }
