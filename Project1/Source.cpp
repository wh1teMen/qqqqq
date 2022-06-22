#include <iostream>
#include<functional>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;
//void f00() {
//
//}
//struct Coord{
//	int x;
//	int y;
//	/*bool operator < (Coord& other) {
//		return true;
//	}*/
//};
//bool f01(Coord& a, Coord& b) {
//	return a.x < b.x;
//}
//class Functor {
//public:
//	bool operator()(Coord& a, Coord& b){
//		return a.x < b.x;
//	}
//	/*template<typename T,typename...Args>
//	T operator()(Args...args) {
//		return T();
//	}*/
//};
class Fish {
public:
	
	int age_;
	int size_;
	string name_;
	friend ostream& operator<<(ostream& out, const Fish& obj) {
		out << obj.name_ << " ";
		out << "age: " << obj.age_ << " ";
		out << "size: " << obj.size_ << " \n";
		return out;
	}

};
void fish() {

}
bool lessAge(Fish& a, Fish& b) {
	
	return a.age_ < b.age_;
}


 
int main() {
	system("chcp 1251>nul");
	//vector<Coord>coll{ {1,2},{3,1},{1,32},{6,8} };
	//vector<int>numbers{ 1,4,645,6,456,66,78,34,75,98,9 };
	//void(*p)(void)= f00;
	//function<void(void)>funtor = f00;
	//Functor funct;
	//sort(numbers.begin(), numbers.end());
	//sort(coll.begin(), coll.end(),funct);


	
	//vector<int>age{ 4,7,9,22,3 };
	//vector<int>size{ 1,6,8,43,40 };
	//vector<string>name{"aaa", "ccc", "bbb", "ddd", "eee"};
	

	/*sort(age.begin(), age.end());
	sort(size.begin(), size.end());
	sort(name.begin(), name.end());*/
	
	/*for (size_t i = 0; i < 5; i++) {
		cout<<coll_fish[i]<<" ";
	}*/
	/*
	cout << endl;
	for (size_t i = 0; i < 5; i++) {
		cout << size[i] << " ";
	}
	cout << endl;
	for (size_t i = 0; i < 5; i++) {
		cout << name[i] << " ";
	}*/

	
	vector<Fish>coll_fish{ {135,4,"AAA"},{99,6,"CCC"},{77,12,"BBB"} };
	for (const auto& Fish : coll_fish) {
		cout << Fish;
	}
	//возраст
	sort(coll_fish.begin(), coll_fish.end(), lessAge);
	cout << endl;
	for (const auto& Fish : coll_fish) {
		cout << Fish;
	}
	//длина
	auto lam = [](Fish& a, Fish& b) {return a.size_ < b.size_; };
	sort(coll_fish.begin(), coll_fish.end(), lam);
	cout << endl;
	for (const auto& Fish : coll_fish) {
		cout << Fish;
	}
	
	
	
	
	
	[/*захват контекста*/](/*аргументы*/) {/*тело функции*/};
	[](Fish& a, Fish& b) {return a.size_ < b.size_;};
	/*[](Fish& a, Fish& b)->bool {
		if (false) {
			return"";
		}
		else {
			return a.size_ < b.size_;
		}
	};*/


	system("pause>nul");
	return 0;
}