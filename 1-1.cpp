#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int arr[5]; // 배열 선언
	int min,max; // 최소 최대값 변수 선언
	int sum=0; // 합 변수 0으로 선언
	int mul=1; // 곱 변수 1로 선언
	int i;
	srand((unsigned int)time(NULL)); //난수 중복안되게 선언

	for(i=0;i<5;i++)
	{
		arr[i] = rand()%41+10; // 10~50까지의 난수를 arr[0]~[4] 순서대로 입력값으로 넣는다 
	}
	min=max=arr[0];//배열간 비교를 위해 arr[0] 값을 넣는다
	
	for(i=0;i<5;i++) 
	{
		if(min>arr[i])
		{	
			min=arr[i]; //배열을 순서대로 돌려 현재의 min값보다 작은수가 나타나면 그 수를 min으로 넣는다
		}
		if(max<arr[i])
		{
			max=arr[i]; //배열을 순서대로 돌려 현재의 max값보다 큰수가 나타나면 그 수를 max로 넣는다
		}
		sum+=arr[i]; // 각 수들을 더하면서 sum에 넣는다
		mul*=arr[i];
	}
	

	cout<<"random numbers : "; //랜덤으로 뽑은 숫자 5개를 출력
	for(i=0;i<5;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	cout<<"minimum : "<<min<<endl; // 최소 최대 합 곱 출력
	cout<<"maximum : "<<max<<endl;
	cout<<"sum : "<<sum<<endl;
	cout<<"multiplication : "<<mul<<endl;

	return 0;
}