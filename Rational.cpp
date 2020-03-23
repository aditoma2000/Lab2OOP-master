#include<iostream>
using namespace std;

int add_rational(int n1, int d1, int n2, int d2)
{
    //(n1/d1 + n2/d2)
    int numerator, denominator;

    if (d1 != 0 && d2 != 0)
    {
        numerator = (n1 * d2) + (n2 * d1);
        denominator = d1 * d2;

       float result = numerator / denominator;
        return result;
    }
    return 0;
}
int mul_rational(int n1, int d1, int n2, int d2)
{
        //(n1/d1) * (n2/d2)
    int numerator, denominator;
        if (d1 != 0 && d2 != 0)
        {
            numerator = n1 * n2;
            denominator = d1 * d2;

            float result = numerator / denominator;
            return result;
        }
        return 0;
 }
int div_rational(int n1, int d1, int n2, int d2)
{
    //(n1/d1) / (n2/d2)
    int numerator, denominator;
    if (d1 != 0 && d2 != 0)
    {
        numerator = float((n1 * d2));
        denominator = float(n2 * d1);

        float result = float(numerator / denominator);
        return result;
    }
    return 0;
}






int main()
{
    int n1, n2, d1, d2;
    int numerator, denominator;
    float result;
    cout << "The numerator of the first fraction:";
    cin >> n1;
    cout << "The denominator of the first fraction:";
    cin >> d1;
    cout << "The numerator of the second fraction:";
    cin >> n2;
    cout << "The denominator of the second fraction:";
    cin >> d2;

    cout <<"Rezultatul adunarii este: "<< add_rational(n1, d1, n2, d2);
    cout << "Rezultatul inmultirii este: " << mul_rational(n1, d1, n2, d2);
    cout << "Rezultatul impartirii este: " <<div_rational(n1, d1, n2, d2);
	
	return 0;
}