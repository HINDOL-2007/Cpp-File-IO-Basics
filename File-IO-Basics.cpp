#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string output = "Authority Name :- Nischinda Gram Panchayat\nLocation :- Liluah, Howrah\nHazard :- Overflowing waste management facility";
    ofstream out("complaint_log.txt");
    out << output;
    out.close();

    ifstream in("complaint_log.txt");
    string fileLine;
    cout << "--- READING FILE FROM HARD DRIVE ---" << endl;
    while (getline(in, fileLine))
    {
        cout << fileLine << endl;
    }
    in.close();
    return 0;
}
