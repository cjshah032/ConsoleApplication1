#include <iostream> 
#include <conio.h>
#include <set>
#include <string>
#include <xlocale>

using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll unsigned long long
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define vi  vector<int>
#define vii vector<pair<int, int>>
#define vs  vector<string>
#define qi queue<int>
#define MAX 1000000000000000007

enum unit {
	CENTIMETER = 1,
	DECIMETER = 10,
	METER = 100,
	DECAMETER = 1000,
	KILOMETER = 100000
};

class Distance {
	float currentDistance;
	unit u;
	
public:
	Distance(float distance, unit u) {
		currentDistance = distance;
		this->u = u;
	}

	float getDistance(unit e) {
		return currentDistance * ((float)u / (float)e);
	}

	float convert(float distance, unit currentUnit, unit expectedUnit) {
		return distance * ((float)currentUnit / (float)expectedUnit);
	}
};

int main()
{
	Distance d(1.0f, METER);
	cout << d.getDistance(KILOMETER) << endl;
	_getch();
}