#include <iostream>
using namespace std;

int main()
{
   int original_price;
   int discount_percentage;

   discount_percentage = 20;
   original_price = 100;

   int discount_amount;
    discount_amount = (original_price * discount_percentage) / 100;
   int final_price;
   final_price = original_price - discount_amount;
   cout<<final_price;

    return 0;
}
