#include<iostream>
using namespace std;
float polynomial_function(float p)
{
	return (p*p - 3);
}
int main()
{
	float m = NULL, n = NULL, ans = NULL;
	int i = NULL;
	for (i = 0; i < 40; i++)
	{
		if (polynomial_function(i) < 0 && polynomial_function(i + 1) > 0)
		{
			cout << "The root is : =   [  " << i << " ,  " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_function(i) << " > 0" << endl;
			cout << "And f(" << '2' << ")" << "  = " << polynomial_function(i + 1) << " < 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
		if (polynomial_function(i) > 0 && polynomial_function(i + 1) < 0)
		{
			cout << "The root is : =   [ " << i << " , " << i + 1 << " ] " << endl;
			cout << "As  f(" << i << ")" << " =  " << polynomial_function(i) << " < 0" << endl;
			cout << "And f(" << i + 1 << ")" << "  = " << polynomial_function(i + 1) << " > 0" << endl;
			m = i;
			n = i + 1;
			break;
		}
	}
	i = 1;

	while (i < 40)
	{
		ans = (m + n) / 2;
		cout << "For the next approximation " << endl << i << " The number of iteration is  " << ans << endl;
		cout << "f(" << ans << ")" << " = " << polynomial_function(ans) << endl << endl;
		if (polynomial_function(ans) > 0)
		{
			n = ans;
		}
		else if (polynomial_function(ans) < 0)
			m = ans;
		else
			break;
		i += 1;
	}
	cout << "Hence final approximation is = " << ans << endl;
	system("pause");
}