#include <iostream>
using namespace std;

int main()
{
    int dellxps;
    float dis_rate;
    float sales_tax;
    cout << "Enter the price of a Dell XPS 13" <<endl;
    cin >> dellxps;
    cout << "Enter the promotional discount rate:" <<endl;
    cin >> dis_rate;
    cout << "Enter the sales tax of CA" <<endl;
    cin >> sales_tax;

    dis_rate = dellxps * 0.10;
    int final_price;
    final_price = dellxps + (dellxps * dis_rate);
    cout << final_price <<endl;





}
