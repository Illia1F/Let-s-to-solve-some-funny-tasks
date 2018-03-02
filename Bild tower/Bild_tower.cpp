#include <iostream> // cout
#include <string>   // string
using namespace std;

class TowerBilder
{
    int nFloors;
public:
    TowerBilder(int nFloors) : nFloors(nFloors)
    {}
    void bildTower();
    inline void reset(int num) { nFloors = num; }
};

int main()
{
    TowerBilder t(10);
    t.bildTower();
    t.reset(5);
    t.bildTower();

    return 0;
}

void TowerBilder::bildTower()
{
    // check up the number of floors in order to been greater than 0
    if(nFloors < 0)
        throw out_of_range("Error: out of range");

    cout << "[\n\n";

    for(int i=1; i<=nFloors; i++){
        cout << "\'"
        // space
        << string(nFloors-i, ' ')
        // write the stars
        << string(i+i-1, '*')
        // space
        << string(nFloors-i, ' ')
        << ((i==nFloors)?("\'\n"):("\',\n"));
    }

    cout << "\n]\n";
}
