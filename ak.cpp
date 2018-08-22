# include <iostream>
using namespace std;
int main()
{

float centimeter, meter, kilometer;
cout << "convert centimeter into meter and kilometer\n";
cout << "input the length in centimeter ";
cin >> centimeter;
meter = centimeter/100;
kilometer = centimeter/100000;
cout << "The length in meter is- "<< meter << endl;
cout << "The length in kilometer is- "<< kilometer << endl;
return 0;
}
