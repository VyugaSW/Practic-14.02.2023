#include <string>
#include <iostream>
#include <Windows.h>

#include <vector>
#include <list>
#include <map>
using namespace std;

// Образный класс vector

//template <class T, class Allocator = Allocator<T>>
//class vector {
//public:
//	explicit vector(const Allocator& a = Allocator()); // Конструктор без параметров с выделением памяти
//
//	explicit vector(size_t num, const T &val = T(), const Allocator& a = Allocator()); // num - кол-во элементов
//																					   // val - значение
//	explicit vector(const vector<T, Allocator> &obj); // Контейнер с контейнером
//
//	template class <class InIter> vector(InIter start, InIter end, // Контейнер с диапозоном значений
//		const Allocator& a = Allocator());
//
//		// Методы
//
//	void assign(InIter start, InIter end); // Последовательность (от start до end)
//	void assign(size_t num, const T& val); // Помещение вектора num элементов со значением val
//
//    reference at(size_type i, );			  // Возращение ссылки на элемент,
//	const reference at(size_type i, ) const;  // заданным параметром i
//
//	reference back(size_type i, );             // Возращает ссылку на последний элемент
//	const reference back(size_type i, ) const; // в векторе
//
//	iterator begin();				// Возращает иттератор на
//	const iterator begin() const;	// первый элемент вектора
//
//	size_t capacity() const; // Возращает текущую ёмкость вектора (кол-во элементов в потенции)
//	
//	void clear();
//	bool empty() const;
//
//	iterator end();				// Возращает иттератор на
//	const iterator end() const; // последний элемент в векторе
//
//	iterator erase(iterator i);					  // Удаляет элемент по
//	iterator erase(iterator start, iterator end); // адресу i (иттератор на элемент после удаляемого)
//
//	reference front();			   // Возращает ссылку на 
//	const reference front() const; // первый элемент в векторе
//
//	allocator_type get_allocator() const; // Возращает распределитель векторов
//
//	iterator insert(iterator i, const T &val = T()); // Вставляет элемент перед i
//	iterator insert(iterator i, InIter start, InIter end); // Вставляет последовательность перед i 
//	iterator insert(iterator i, size_type num, const T &val = T()); // Вставляет кол-во num (копий val)
//
//	size_type max_size() const; // Возращает максимальное число элементов в потенции вектора
//
//	void pop_back(); // Удаляет последний элемент вектора
//	void push_back(); // Добавляет элемент в конец вектора
//
//	reverse_iterator rbegin(); // Возращает реверсивный иттератор для конца вектора
//	reverse_iterator rend(); // Возращает реверсивный иттератор для начала вектора
//
//	void resize(size_type num); // Устанавливает ёмкость вектора равной не менее num 
//	void resize(size_type num, const T &val = T()); // Добавление в конец со значением val 
//
//	size_t size(); // Текущее кол-во элементов в векторе
//
//	void swap(deque < T, Allocator> &obj); // Обмен элементами данного вектора и вектора obj
//	static void swap(reference i, reference j); // Переставляет биты параметрами i и j
//
//	void flip(); // Инверсия всех значений в векторе (1 на 0; 0 на 1)
//
//};


// Методы класса list (Имеет одинаковые методы с классом vector 

// assing(), end(), begin(), erase(), front(), clear() и т.д.
//void merge( list<T, Allocator> &obj); // Объединяет упорядоченный список obj's, obj становится empty
//void merge( list<T, Allocator> &obj, Comp cmpfn); // Второй параметр есть функция сравнения 
//
//void pop_back();
//void pop_front();
//
//void push_back();
//void push_front();
//
//void remove(const T& val); // Удаляет из списка все элементы значением val
//void remove_if(UnPred pr); // Удаляет элементы, для которых pr = true
//
//void sort(); // Сортировка списка
//void sort(Comp cmpfn); // Сортировка списка с функцией сравнения
//
//void splice(iterator i, list<T, Allocator>& obj); // Вставляет содержимое 
//												  //obj's указанным итератором i
//void splice(iterator i, list<T, Allocator>& obj, iterator el); // Вставляет из списка obj's
//															   // адресуемый el в позиции итератора i
//void splice(iterator i, list<T, Allocator>& obj, iterator start, iterator end);
//
//void unique(); // Удаляет элементы дубликаты
typedef list<int> ourList;
void Show_list(ourList& l1, ourList& l2) {
	ourList::iterator iter;

	cout << "list 1: ";
	for (iter = l1.begin(); iter != l1.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	cout << "list 2: ";
	for (iter = l2.begin(); iter != l2.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

}

// Методы класса map (Есть схожие методы)

//size_t count(const key_type& k) const; // Возращает число вхождение ключа k 
// pair<iterator, iterator>  equal_range(const key_type& k); // Возращает пару итераторов,
//														  // указывающих на первый и последний 
//														  // элементы отображения c ключом k
// iterator fined(const key_type& k); // Возращает итератор для заданного ключа 
// key_compare key_comp() const; // Возращает объект функцию, которая сравнивает ключи
// iterator lower_bound(const key_type& k); // Возращает итератор для первого элемента в отображении, ключ которого >= k
//
void Test_map() {
	map<int, int> our_map;
	vector<int> our_vector;

	cout << "Max size of map - " << our_map.max_size() / sizeof(int) << endl;
	cout << "Max size of vector - " << our_vector.max_size() / sizeof(int) << endl;

	int val, key;
	cin >> val >> key;

	pair<int, int> element(key, val);
	our_map.insert(element);
	cout << "Count of elements in map - " << our_map.size() << "\n\n";

	pair <map<int, int>::iterator, bool> err = our_map.insert(make_pair(key, val));
	if (err.second == false)
		cout << "ERROR\n";

	cout << "Count of elements in map - " << our_map.size() << "\n";

	map<int, int>::iterator iter = our_map.begin();
	for (; iter != our_map.end(); iter++) {
		cout << "Key - " << iter->first << "\n";
		cout << "Value - " << iter->second << "\n\n";
	}
}

// multimap (ключ не уникален)


void ShowMulti(multimap<string,int> col) {
	for (multimap<string, int>::iterator i = col.begin(); i != col.end(); i++)
	{
		cout << i->first << " " << i->second << endl;
	}
	cout << endl;
}

void ShowMap(map<string, int> col) {
	for (map<string, int>::iterator i = col.begin(); i != col.end(); i++)
	{
		cout << i->first << " " << i->second << endl;
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "");

	//vector
	/*vector<int> vect;
	cout << "Кол-во элементов в потенции, без выделения доп. памяти - " << vect.capacity() << endl;
	cout << "Кол-во элементов хранится в векторе - " << vect.size() << endl;
	vect.resize(4, 0);
	cout << "!ИЗМЕНЕНИЕ РАЗМЕРА!\n";
	cout << "Кол-во элементов хранится в векторе - " << vect.size() << endl;

	cout << "Vector: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;

	cout << "Максимальный размер вектора - " << vect.max_size() << endl;
	vect.push_back(1);

	cout << "Vector: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;

	vector<int>::reverse_iterator i_riterator = vect.rbegin();

	cout << "Vector with reverse_iterator: ";
	for (int i = 0; i < vect.size(); i++) {
		cout << *(i_riterator + i) << " ";
	}
	cout << endl;

	vector<int>::iterator i_iterator = vect.end();

	vect.insert(i_iterator - 1, 9);

	cout << "Vector with iterator: ";
	for (i_iterator = vect.begin(); i_iterator != vect.end(); i_iterator++) {
		cout << *i_iterator << " ";
	}
	cout << endl;

	i_iterator = vect.end();
	vect.insert(i_iterator - 1, 2, 4);

	cout << "Vector with iterator: ";
	for (i_iterator = vect.begin(); i_iterator != vect.end(); i_iterator++) {
		cout << *i_iterator << " ";
	}
	cout << endl;*/

	//list
	/*ourList list1, list2;

	for (int i = 0; i < 6; i++) {
		list1.push_back(i);
		list2.push_back(i);
	}

	Show_list(list1, list2);

	list2.splice(list2.end(), list2, list2.begin());
	list1.reverse();

	cout << '\n';
	Show_list(list1, list2);

	list1.sort();
	list2.sort();

	cout << '\n';
	Show_list(list1, list2);

	list1.unique();

	cout << '\n';
	Show_list(list1, list2);*/

	//map
	//Test_map();
	
	//multimap

	map<string, int> cont;
	multimap<string, int> multicont;

	cont.insert(pair<string, int>("Ivanov", 20));
	cont.insert(pair<string, int>("Petrov", 30));
	cont["Sidorov"] = 50;
	cont["Ivanov"] = 50;

	ShowMap(cont);
	cont.insert(pair<string, int>("Ivanov", 20));
	ShowMap(cont);

	multicont.insert(pair<string, int>("Ivanov", 20));
	multicont.insert(pair<string, int>("Petrov", 30));
	multicont.insert(pair<string, int>("Sidorov", 40));
	ShowMulti(multicont);

	multimap<string, int>::iterator iter =
		multicont.find("Petrov");
	cout << iter->first << " " << iter->second << endl;

	multicont.insert(pair<string, int>("Ivanov", 20));
	cout << "Count Ivanov - " << multicont.count("Ivanov");

	iter = multicont.lower_bound("Ivanov");
	for (; iter != multicont.upper_bound("Ivanov"); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

}

