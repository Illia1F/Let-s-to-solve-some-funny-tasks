#include <iostream> // cout
#include <string>   // string
using namespace std;

class TowerBilder
{
    int nFloors; // amount of floors
public:
    TowerBilder(const int nFloors) : nFloors(nFloors)
    {}
    void bildTower()const; // output the tower on console 
    inline void reset(const int num) { nFloors = num; }
};

int main()
{
    TowerBilder t(10);
    t.bildTower();
    t.reset(5);
    t.bildTower();

    return 0;
}

void TowerBilder::bildTower()const
{
    // check the number of floors in order to been greater than 0
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
