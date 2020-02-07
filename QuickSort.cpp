#include "QuickSort.h"

int main()
{
	int arr[] = { 5,4,8,11,25,63,2,18 };
	std::string str;
	std::cout << "insert your sms \n";
	std::cin >> str;

	quickSort(str, 0, str.size() - 1);
	std::cout << str << "\n";
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "ansorted\n";
	print(arr, size);
	std::cout << std::endl;
	std::cout << "Sorted";
	quickSort(arr, 0, 7);
	std::cout << std::endl;
	print(arr, size);
	//system("pause");

}