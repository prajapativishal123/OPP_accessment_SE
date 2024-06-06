/*Data members: 
a) Name of the lecturer 
b) Name of the subject 
c) Name of course 
d) Number of lecturers 
Data functions:  
a) To assign initial values  
b) To add a lecture details  
c) To display name and lecture details */
#include<iostream>
using namespace std;
class collage
{
	string lecturer[5];
	string subject[5];
	string lecture;
	string course;
	int i;
	public : 
		void getinfo()
		{
			for(i=1;i<=5;i++)
			{
				cout<<"enter lecturer name : ";
				cin>>lecturer[i];
			}
			for(i=1;i<=5;i++)
			{
				cout<<"enter subject name : ";
				cin>>subject[i];
			}
			cout<<"name of course : ";
			cin>>course;
			cout<<"enter lecture : ";
			cin>>lecture;
		} 
		void printinfo()
		{
			for(i=1;i<=5;i++)
			{
				cout<<"\n\n\t lecturer name : "<<lecturer[i];
			}
			for(i=1;i<=5;i++)
			{
				cout<<"\n\n\t subject name : "<<subject[i];
			}
			cout<<"\n\n\t name of course : "<<course;
			cout<<"\n\n\t lecture : "<<lecture;
		}	
};
main()
{
	collage c;
	c.getinfo();
	c.printinfo();
}
