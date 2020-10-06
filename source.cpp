int USCLN(int a, int b)
{
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	return a;
}
void hello()
{
	
	cout<<"Hello"<<endl;
}
int tru(int a, int b)
{
	cout<<a-b;
	return a-b;
int cong(int a, int b)
{
	cout a+b;
	return a+b;
}
int nhan(int a, int b)
{
	return a*b;
}