#include <iostream>
#include <string>
using namespace std;

//大小写转换
void UperToLowerToUper(){
	//注意不能 “”+''
	cout<<"输入一个字符。。。"<<endl;
	char i; 
	cin>>i;  
	while(1){
		cout<<"您输入的是："<<i<<endl;
		if(i=='0')
		{
			cout<<"即将退出.."<<endl;
			break;
		}
		if(i>=97&&i<=122)
		{
			i=i-32; 
			cout<<"转化后："<<i<<endl;; 
		}
		else if(i>=65&&i<90)
		{
			i=i+32;
			cout<<"转化后："<<i<<endl;; 
		}
		cin>>i;  我
	}
}
//字符比较
bool CmpChar(string s1,string s2)
{
	return s1>s2;
}
//10以内的数字转化为汉字
string GetNumberName(int num)
{	
	if(num>=0&&num<=10)
	{
		string names[11] ={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖","拾"};
		return names[num];
	}
	return "error";
}
int main(void)
{ 
	//UperToLowerToUper();
	                         
	//bool a = CmpChar("bc","abc");
	//cout<<a;
	int num;
	while(1)
	{
		cin>>num;
		//处理错误
		if(cin.fail())
		{
			system("cls");
			cin.clear();
			cin.ignore();   
		}
		if(num>10)
		{
			break;
		}
		string numName = GetNumberName(num);
		cout<<numName;
	}	

	system("pause");

}
