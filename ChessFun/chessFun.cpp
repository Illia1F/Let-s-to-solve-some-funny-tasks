#include <iostream>
#include <string>
using namespace std;

bool chessBoardCellColor(std::string cell1, std::string cell2) {
  return (cell1[0] + cell1[1] + cell2[0] + cell2[1]) % 2 == 0;
}

int main()
{
    cout << chessBoardCellColor("A1", "C3") << endl;

    return 0;
}
