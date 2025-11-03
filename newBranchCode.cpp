#include <iostream>

using namespace std;

int main()
{
    double hour;
    cout << "How many hours have passed?" << endl;
    cin >> hour;

    double indoor = 19.0;
    double outdoor = 22.0;
    
    indoor = (indoor + (0.6 * hour)) - (0.4 * hour);
    outdoor = (outdoor + (0.3 * hour)) - (0.1 * hour);
    
    cout << "The indoor pool has " << indoor << " inches of water, and the outdoor pool has " << outdoor << " inches of water." << endl;
}
