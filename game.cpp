//Apple game
#include<iostream>
using namespace std;
int main()
{
	int apple=21,user,turn=0,com;
	cout<<"..............Apple game............."<<endl;
	cout<<"there are 21 apple in the bucket your have to pick min 1 to max 4"<<endl;
	while(apple!=1)
	{
		if(turn==0)
		{
			cout<<"Enter no of apple - ";
			cin>>user;
			if(user<0 || user>4)
			{
				cout<<"follow the rules of game !!!\n";
				continue;
			}
			apple=apple-user;
			cout<<"Remaining Apple"<<apple<<endl;
			turn=1;
		}
		if(turn==1)
		{
			com=5-user;
			cout<<"Computer choose"<<com<<endl;
			apple=apple-com;
			cout<<"Remaining Apple"<<apple<<endl;
			turn=0;
		}
		if(apple==1 && turn==0)
		cout<<"User loose the match";
		else if(apple==1&& turn==1)
		cout<<"Computer loose the match";
	}
	return 0;
}