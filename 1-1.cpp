#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int arr[5]; // �迭 ����
	int min,max; // �ּ� �ִ밪 ���� ����
	int sum=0; // �� ���� 0���� ����
	int mul=1; // �� ���� 1�� ����
	int i;
	srand((unsigned int)time(NULL)); //���� �ߺ��ȵǰ� ����

	for(i=0;i<5;i++)
	{
		arr[i] = rand()%41+10; // 10~50������ ������ arr[0]~[4] ������� �Է°����� �ִ´� 
	}
	min=max=arr[0];//�迭�� �񱳸� ���� arr[0] ���� �ִ´�
	
	for(i=0;i<5;i++) 
	{
		if(min>arr[i])
		{	
			min=arr[i]; //�迭�� ������� ���� ������ min������ �������� ��Ÿ���� �� ���� min���� �ִ´�
		}
		if(max<arr[i])
		{
			max=arr[i]; //�迭�� ������� ���� ������ max������ ū���� ��Ÿ���� �� ���� max�� �ִ´�
		}
		sum+=arr[i]; // �� ������ ���ϸ鼭 sum�� �ִ´�
		mul*=arr[i];
	}
	

	cout<<"random numbers : "; //�������� ���� ���� 5���� ���
	for(i=0;i<5;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	cout<<"minimum : "<<min<<endl; // �ּ� �ִ� �� �� ���
	cout<<"maximum : "<<max<<endl;
	cout<<"sum : "<<sum<<endl;
	cout<<"multiplication : "<<mul<<endl;

	return 0;
}