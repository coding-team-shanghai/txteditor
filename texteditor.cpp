#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;
char file[100];
void qk()
{
	ofstream qingkong(file);
	qingkong.close();
	return;
}
int main()
{
	system("title 文本编辑器");
	string cnt;
	bool flag=false;
	int sum=1;
	cout<<"请输入文件名"<<endl;
	cin>>file;
	strcat(file,".txt");
	ifstream fin(file);
	if(fin)
	{
		if(MessageBox(NULL,"此文件已存在，是否清空？","提示",MB_YESNO)==6)
		{
			qk();
		}
	}
	ofstream fout(file,ios::app);
	if(MessageBox(NULL,"是否启动标行模式？","询问",MB_YESNO)==6)
	{
		flag=true;
	}
	while(getline(cin,cnt))
	{
		if(cnt=="exit")
		{
			if(MessageBox(NULL,"是否退出","提示",MB_YESNO)==6)
			{
				return 0;
			}
		}
		if(flag)
		{
			fout<<sum<<" ";
			sum++;
		}
		fout<<cnt<<endl;
	}
	return 0;
}
