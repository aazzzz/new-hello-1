#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

#define MAX_SIZE 500
#define MAX_LEN 500 
// TEST = 1 是整型测试，TEST = 2是字符串测试 
#define TEST 2 

// ********************************请在下方实现你的代码 ************* 

int int_cmp(const void *a,const void *b)
{
	// 请在下方实现你的代码
	return 1; 
}

int str_cmp(const void *a,const void *b)
{
	// 请在下方实现你的代码
	return 1; 
}

void sort(void *base, size_t num, size_t size, int (*comparator)(const void *, const void * ) )
{
	// 请在下方实现你的代码
	 
} 

// ********************************main供你自己测试使用*************** 
int main()
{
	//NOTE:你可以在这里进行测试 
	
	return 0;	
}

// NOTE: 以下注释片段是整型数据排序的测试代码，请勿修改，若修改后，助教测试出现错误， 后果自负 

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


