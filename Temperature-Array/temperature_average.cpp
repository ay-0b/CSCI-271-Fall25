#include <iostream>
using namespace std;

int main() {
    const int days=7; //number of days
    float temperature[days]; //declared the array
    float total=0;
    cout <<"Put the temperatures for each day: "<<endl; //asked for the temperatures here
    for (int i = 0; i < days; i++) {
        cout << "Day " << (i + 1) <<": ";
        cin >> temperature[i];
        total += temperature[i]; //had trouble here until i put +=
    }
    float average_temp = total/days;
    cout <<"Average temperature: "<<average_temp<<endl;
    return 0;
}
