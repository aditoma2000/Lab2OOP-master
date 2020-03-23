#include<iostream>
using namespace std;

int add_rational(float &result)
{
    //(n1/d1 + n2/d2)
    int n1, n2, d1, d2;
    float numerator, denominator;
    cout << "The numerator of the first fraction:";
    cin >> n1;
    cout << "The denominator of the first fraction:";
    cin >> d1;
    cout << "The numerator of the second fraction:";
    cin >> n2;
    cout << "The denominator of the second fraction:";
    cin >> d2;
   
    if (d1 != 0 && d2 != 0)
    {
        numerator = float((n1 * d2) + (n2 * d1));
        denominator = float(d1 * d2);

        result = float(numerator / denominator);
        return result;
    }
    return 0;

}






int main1()
{
	
	return 0;
}