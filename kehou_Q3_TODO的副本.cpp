#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

#define MAX_SIZE 500
#define MAX_LEN 500 
// TEST = 1 �����Ͳ��ԣ�TEST = 2���ַ������� 
#define TEST 2 

// ********************************�����·�ʵ����Ĵ��� ************* 

int int_cmp(const void *a,const void *b)
{
	// �����·�ʵ����Ĵ���
	return 1; 
}

int str_cmp(const void *a,const void *b)
{
	// �����·�ʵ����Ĵ���
	return 1; 
}

void sort(void *base, size_t num, size_t size, int (*comparator)(const void *, const void * ) )
{
	// �����·�ʵ����Ĵ���
	 
} 

// ********************************main�����Լ�����ʹ��*************** 
int main()
{
	//NOTE:�������������в��� 
	
	return 0;	
}

// NOTE: ����ע��Ƭ����������������Ĳ��Դ��룬�����޸ģ����޸ĺ����̲��Գ��ִ��� ����Ը� 

/*
#if TEST==1

int main()
{
	int data[MAX_SIZE] , n;
	cin>>n;
	for(int i = 0 ; i < n ; i++)
	{
		int m;
		puts("*****************");
		cin>>m;
		for(int j = 0 ; j < m ; j++)
			cin>>data[j]; 
		sort(data, m, sizeof(data[0]), int_cmp);
		puts("after sorting:");
		for(int j = 0 ; j < m ; j++)
		{
			cout<<data[j]<<" ";
		}
		puts("\n*****************");
	}
	
	return 0;	
}
#endif

#if TEST==2

int main()
{
	char str[500][MAX_LEN];
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++)
	{
		int m;
		cin>>m;
		for(int j = 0 ; j < m ; j++)
		{
			cin>>str[j];
		}
		sort(str, m, sizeof(str[0]), str_cmp);
		cout<<"*************"<<endl;
		for(int j = 0 ; j < m ; j++)
		{
			cout<<str[j]<<endl;
		}
		cout<<"*************"<<endl;
	}
	return 0;	
}
#endif 
*/


