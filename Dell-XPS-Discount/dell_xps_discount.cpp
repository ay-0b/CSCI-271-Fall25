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

    float discounted_price = dellxps - (dellxps * dis_rate);
    float final_price = discounted_price + (discounted_price * sales_tax);
    cout << final_price <<endl;





}
