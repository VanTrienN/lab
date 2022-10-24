#include<bits/stdc++.h>
using namespace std;
void nhap1(int **b,int m, int n)
{
	for(int i=0;i<n;i++)
		b[i]=new int[m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>b[i][j];
		}
}
void xuat1(int **b, int m, int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			k +=1;
			cout<<b[i][j]<<"\t";
			if(k%m==0)
			{
				cout<<"\n";
				k=0;	
			}
		}
	}
}
void nhap2(int **a,int c, int d)
{
	for(int i=0;i<d;i++)
		a[i]=new int[c];
	for(int i=0;i<d;i++)
		for(int j=0;j<c;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
}
void xuat2(int **a, int c, int d)
{
	int k=0;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<c;j++)
		{
			k +=1;
			cout<<a[i][j]<<"\t";
			if(k%c==0)
			{
				cout<<"\n";
				k=0;	
			}
		}
	}
}

int main()
{
	int n,m,c,d;
	int ma[100][100];
	int **a;
	int **b;
	b=new int*[n];
	a=new int*[d];
	cout<<"nhap ma tran 1"<<endl;
	cout<<"nhap so hang ma tran: ";cin>>n;
	cout<<"nhap so cot ma tran: ";cin>>m;
	nhap1(b,m,n);
	xuat1(b,m,n);
	cout<<"nhap ma tran 2"<<endl;
	cout<<"nhap so hang ma tran: ";cin>>c;
	cout<<"nhap so cot ma tran: ";cin>>d;
	nhap2(a,c,d);
	xuat2(a,c,d);
//	tong(b,m,n,a,c,d);
	return 0;
}

