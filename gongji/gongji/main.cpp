#include <iostream>
#include <string>
using namespace std;

//��Сдת��
void UperToLowerToUper(){
	//ע�ⲻ�� ����+''
	cout<<"����һ���ַ�������"<<endl;
	char i; 
	cin>>i;  
	while(1){
		cout<<"��������ǣ�"<<i<<endl;
		if(i=='0')
		{
			cout<<"�����˳�.."<<endl;
			break;
		}
		if(i>=97&&i<=122)
		{
			i=i-32; 
			cout<<"ת����"<<i<<endl;; 
		}
		else if(i>=65&&i<90)
		{
			i=i+32;
			cout<<"ת����"<<i<<endl;; 
		}
		cin>>i;  ��
	}
}
//�ַ��Ƚ�
bool CmpChar(string s1,string s2)
{
	return s1>s2;
}
//10���ڵ�����ת��Ϊ����
string GetNumberName(int num)
{	
	if(num>=0&&num<=10)
	{
		string names[11] ={"��","Ҽ","��","��","��","��","½","��","��","��","ʰ"};
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
		//�������
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
