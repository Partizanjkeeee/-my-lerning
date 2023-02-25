//#include <iostream>
//#include <string>

//using namespace std;

//int main() {
	//string word_1, word_2, word_3, word_4, word_5;
	//cin >> word_1 >> word_2 >> word_3 >> word_4 >> word_5;
	//char ch = word_1 [0];
	//char cc = word_2 [0];
	//char cv = word_3 [0];
	//char cb = word_4 [0];
	//char cn = word_5 [0];
	//cout << ch << cc << cv << cb << cn << endl;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
	//int a, b, sum, size_I, result;
	//string size_S;
	//cin >> a >> b; // считываем числа
	//sum = a + b; // сумма двух чисел
	//size_S = to_string(sum); // переводим сумму в строку
	//size_I = size_S.size(); // узнаем кол-во символов в строке
	//result = sum * size_I; // умножаем сумма на количество символов
	//cout << result;
//}

                                                              // Супер простая начатая поисковая система!!!!
//#include <iostream>
//#include <string>
//using namespace std;

//int main() {

	//int document_count;
	//string documents;
	//string c;
	//string result;
	//cin >> document_count; // считываем число
	//c = to_string(document_count); // переводим сумму в строку
	//result = c + " documents found"s; // складываем string c и строку string с результатом string
	//if (document_count == 0) {
		//cout << "No documents found" << endl;
		//return 0;
	//}
	//if (document_count == 1) {
		//cout << "One document found" << endl;
		//return 0;
	//}
	//cout << result << endl;
	//return 0;
//}

                                                            // Лайтовая программа вычисления скидок
//#include <iostream>
//#include <string>

//using namespace std;

//int main() {
	//double n, a, b, x, y;  // Если n меньше a и b выводим n
	//cin >> n >> a >> b >> x >> y; //115 * 5 / 100 = процент от 115 = 5,75. Потом 115 - 5,75 = 109,25. Ответ
	//if (a < b) {

		//if (n < a && n < b) {
			//cout << n << endl;
			//return 0;
		//}

		//else if (n > a && n <= b) {
			//n = n - ((n * x) / 100);
		//}
		//else if (n > b) {
			//n = n - ((n * y) / 100);
		//}
	//}
	//cout << n << endl;
	//return 0;
//}



                    // В общем, программа которая считывает номера домов и их цвет и выдает правильные значения, нужно разобраться в этом и в bool!!!!!!!!!!!!!!!!!!!!1
//#include <iostream>
//#include <string>
//using namespace std;

//int main() {
	//string color1, color2, color3, color;
	//int floors1, floors2, floors3, floors;

	//cin >> color1 >> floors1;
	//cin >> color2 >> floors2;
	//cin >> color3 >> floors3;

	//cin >> color >> floors;

	//bool ignore_color = color == "?"s;
	//bool ignore_floor = floors == -1;

	//if ((ignore_color || color == color1) && (ignore_floor || floors == floors1)) {
		//cout << 1 << endl;
	//}
	//if ((ignore_color || color == color2) && (ignore_floor || floors == floors2)) {
		//cout << 2 << endl;
	//}
	//if ((ignore_color || color == color3) && (ignore_floor || floors == floors3)) {
		//cout << 3 << endl;
	//}
//}



                                   //По суте дело тоже самое, только в разы проще функционал
//#include <iostream>
//#include <string>
//using namespace std;

//int main() {
	//string color1, color2, color3, color_target;
	//cin >> color1 >> color2 >> color3 >> color_target;
	//if (color_target == color1) {
		//cout << "Enter the house " << 1 << endl;
	//}
	//else if (color_target == color2) {
		//cout << "Enter the house " << 2 << endl;
	//}
	//else if (color_target == color3) {
		//cout << "Enter the house " << 3 << endl;
	//}
	//else {
		//cout << "Seek somewhere else" << endl;
	//}
//}



                                    //Программа, которая проверяет умение пользователя складывать целые числа 
//#include <iostream>
//using namespace std;

//int main() {
	//int a, b, sum, all;     // назначаем 4 переменные
	//cin >> a >> b >> sum;     // вводим 3 числа ( два числа и сумму, которая должна получится при их сложении)
	//all = a + b; // Эта переменная складывает 
	//if (all != sum) {      // тут мы сравниваем, если сумма не равна вводимой сумме, значит GG WP 
		//cout << "Error. The sum of " << a << " and " << b << " is " << all << endl;
	//}
	//return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	double a, b, c;
//	cin >> a >> b;
//	if (a > b) {
//		c = a - b;
//		cout << "Cut off " << c << " from the second part"s << endl;
//	}
//	else if (b > a) {
//		c = b - a;
//		cout << "Cut off " << c << " from the first part"s << endl;
//	}
//	else if (a == b) {
//		cout << "The orange is divided into two equal parts"s << endl;
//	}
//	return 0;
//}

                                                                            //WHILE и DO WHILE циклы!!!!
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a, b;
//	cin >> a >> b; // Числа a и b должны быть натуральными
//	while (b != 0) {
//		int c = b;
//		b = a % b;
//		a = c;
//	}
//	cout << a << endl; //наибольший общий делитель двух натуральных чисел a и b
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	cin >> number;
//	int sum = 0;
//	int i = 1;
//	while (i <= number) {
//		sum += i;
//		i++;
//	}
//	cout << "Summa chisel ot 1 do "<< number << " = " << sum << endl; // Выводит СУММУ чисел от одного до number. тпо 1 + 2 + 3 + 4 ... и т.д.
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(0, "");
//	int i = 0; // инициализируем счетчик цикла.
//	int sum = 0; // инициализируем счетчик суммы.
//	do {// выполняем цикл.
//		i++;
//		sum += i;
//	} while (i < 1000); // пока выполняется условие.
//	cout << "Сумма чисел от 1 до 1000 = " << sum << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int secret = 5; // Угадываемое число
//	int answer;     // Ответ пользователя
//	do {
//		cout << "Guess the number: "s << endl;
//		cin >> answer;
//	} while (answer != secret); // Пока answer НЕ РАВЕН secret - цикл повторяется с do. Как только он становится равен, цикл прерывается и уходит на cout ниже!!!!
//	cout << "You are right!"s << endl;
//}

																				// ЦИКЛ FOR
//#include <iostream>
//using namespace std;
//
//int main() {
//	for (int i = 0; i != 3; i += 1) {
//		cout << "Check the fridge"s << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int x, y;
//	cin >> x >> y;
//	if (y < x) {
//		for (int i = x; i >= y; --i)
//			cout << i << endl;
//	}
//	else
//	{
//		for (int i = x; i <= y; ++i)
//			cout << i << endl;
//	}
//}



//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string query;
//	getline(cin, query);
//	for (int i = 0; i < query.size(); ++i) {
//		if (query[i] == ' ') {
//			cout << i << endl;
//		}
//	}
//	cout << query.size() << endl;
//}
//
//
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	string str;
//	getline(cin, str);
//
//	stringstream s(str);
//
//	vector <string> v;
//	string word;
//
//	while (s >> word)
//		v.push_back(word);
//
//	for (int i = 0; i < v.size(); ++i)
//		cout << "[" << v[i] << "]" << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string str = "Drawing indices for fun and profit"s;
//	int num_iters = 0;
//	//Считываем с клавиатуры, сколько раз мы бы хотели повторить цикл
//	cin >> num_iters;
//
//	for (int i = 0; i < num_iters; ++i) {
//		int index1, index2;
//		//считываем индексы
//		cin >> index1 >> index2;
//		//Если index1 отрицательный или больше, чем длина нашей строки, то продолжать этот шаг цикла невозможно
//
//		if (index1 < 0 || index1 >= str.size()) {
//			//скомандовав continue, программист просит перейти на следующую итерацию, не заканчивая текущую
//			continue;
//		}
//
//		//аналогичная логика для второго цикла
//		if (index2 < 0 || index2 <= str.size()) {
//			continue;
//		}
//		//выведем результат сравнения символов строки по указанным индексам
//		cout << (str[index1] == str[index2]) << endl;
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string animal;
//	//считаем название животного
//	cin >> animal;
//
//	for (int i = 0; i < animal.size(); ++i) {
//		//если текущая буква строки - а,
//		if (animal[i] == 'a') {
//			//то выведем индекс i на экран и закончим цикл
//			cout << i << endl;
//			break;
//		}
//	}
//	cout << "Yes!"s << endl;
//}


																						// Задачки говна
//#include <iostream>
//using namespace std;
//
//int main() {
//	int result;
//	for (int i = 0; i < 10; ++i) {
//		cin >> result;
//		if (result == 0) {
//			cout << "No cake :(" << endl;
//			break;
//		}
//		cout << "Om-nom-nom :P" << endl;
//	}
//}
//
//
//
//#include <iostream>
//using namespace std;
//int main() {
//	int bill;
//	int sum = 0;
//	do {
//		cin >> bill;
//		if (bill > 0) {
//			cout << "Income: " << bill << endl;
//			sum += bill;
//		}
//	} while (bill != 0);
//	cout << "Total income: " << sum << endl;
//}