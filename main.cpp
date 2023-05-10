#include<iostream>
#include<vector>
#include<random>
#include <cmath>
#include<string>
#include <fstream>
using namespace std;





int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	vector<int> vec = { 1, 2, 3, 4, 5 };
	
	
	for (int i = 0; i < 5; i++)
	{
		vec[i] = 1 + rand() % 10;
		std::cout << i+1 << "-й элемент вектора: " << vec[i] << endl;
	}
	std::cout<<"размер вектора: " << vec.size()<<"; капасити вектора: "<<vec.capacity()<<endl;
	

	std::cout << "\n";
	vec.pop_back();
	for (int i = 0; i < 5; i++)
	{
		std::cout<< vec[i] << endl;
	}


	/*std::cout << "\n"; да чеза фигня блин?? он выдает какуюто непонятную ошибку но не говорит что именно случилось!!!
	vec.push_back(228);
	vec.insert(vec.begin(), 777);
	for (int i = 0; i < 5; i++)
	{
		std::cout << vec[i] << endl;
	}*/


	return 0;
}



