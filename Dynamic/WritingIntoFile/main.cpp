#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Writing into a file:" << endl;
    ofstream ofs("My.txt", ios::trunc);
    ofs << "John" << endl;
    ofs << 25 << endl;
    ofs << "cs" << endl;

    ofs.close();
    return 0;
}
