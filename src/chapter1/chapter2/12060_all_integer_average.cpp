//*************************************************************************************//
//        Problem  : 12060 - All Integer Average
//        Language : C++
//        Comment  : Ad hoc, gcd
// 		  	Status   : AC
//*************************************************************************************//
#include <iostream>
#include <cmath>
#include <iomanip>		
using namespace std;
typedef int L;
int intDigits( int x )
{
    return (int)log10( abs(x) ) + 1 ;
}
L gcd ( L a, L b )
{
  L c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

int main() {
	int n, sum, i, x, tcase=1, _gcd, rem, div, num, den;
	bool isNeg;
	while ( cin>>n, n)
	{
		sum = 0; isNeg = false;
		//cout<<endl;
		for ( i = 0; i < n; i++) {
			cin>>x;
			sum += x;
			//cout<<x;
		}
		//cout<<"n: "<<n<<"sum :"<<sum<<"rem: "<<sum%n<<endl;
		if ( sum < 0) isNeg = true;
		sum = abs (sum);
		cout<<"Case "<<tcase++<<":"<<endl;
		if ( sum % n == 0) // avg is integer
		{
			if( isNeg)
				cout<<"- "<<sum/n<<endl;
			else
				cout<<sum/n<<endl;
		}
		else // avg is not integer
		{

			div = sum / n;
			num = sum % n;
			den = n;
			_gcd = gcd( num, den );
			//cout<<"gcd: "<<_gcd<<endl;
			if (_gcd) {
				num /= _gcd;
				den /= _gcd;
			}
			if ( div >= 1 ) 
			{
				if( isNeg)
				{
					cout<<"  "<<setfill(' ')<<setw( intDigits(div) + intDigits(den) )<<num<<endl;
					cout<<"- "<<div;
					for ( i = 0; i < intDigits(den); i++)
						cout<<"-"; 
					cout<<endl;
					cout<<"  "; // space for -
					for ( i = 0; i < intDigits (div); i++ ) // space for div number
						cout<<" ";				
					cout<<den<<endl; 
				}
				else
				{
					cout<<setfill(' ')<<setw( intDigits(div) + intDigits(den) )<<num<<endl;
					cout<<div;
					for ( i = 0; i < intDigits(den); i++)
						cout<<"-"; 
					cout<<endl;
					for ( i = 0; i < intDigits (div); i++ ) // space for div number
						cout<<" ";				
					cout<<den<<endl; 
				}
			}
			else
			{
				if (isNeg)				
				{
					cout<<"  "<<setfill(' ')<<setw( intDigits(den) )<<num<<endl;
					cout<<"- ";
					for ( i = 0; i < intDigits(den); i++)
						cout<<"-"; 
					cout<<endl<<"  "<<den<<endl; 

				}
				else
				{
						cout<<setfill(' ')<<setw( intDigits(den) )<<num<<endl;						
						for ( i = 0; i < intDigits(den); i++)
							cout<<"-"; 
						cout<<endl<<den<<endl; 
				}

			}
		}
	}
	return 0;
}