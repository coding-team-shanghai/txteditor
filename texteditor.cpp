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
	system("title �ı��༭��");
	string cnt;
	bool flag=false;
	int sum=1;
	cout<<"�������ļ���"<<endl;
	cin>>file;
	strcat(file,".txt");
	ifstream fin(file);
	if(fin)
	{
		if(MessageBox(NULL,"���ļ��Ѵ��ڣ��Ƿ���գ�","��ʾ",MB_YESNO)==6)
		{
			qk();
		}
	}
	ofstream fout(file,ios::app);
	if(MessageBox(NULL,"�Ƿ���������ģʽ��","ѯ��",MB_YESNO)==6)
	{
		flag=true;
	}
	while(getline(cin,cnt))
	{
		if(cnt=="exit")
		{
			if(MessageBox(NULL,"�Ƿ��˳�","��ʾ",MB_YESNO)==6)
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
