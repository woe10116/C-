#include <iostream>
#include <math.h>
#include <cstdlib>
#include <conio.h>


using namespace std;


double x; 
double det, det1, det2, det3;
double a11, a12, a13, a21, a22, a23, a31, a32, a33;
double answer1, answer2, answer3;
double A11, A12, A13, A21, A22, A23, A31, A32, A33;
double x1, x2, x3; 
int a; 


int main () {
	setlocale(LC_ALL, "RUS");


		cout << " ВВедите коэфициенты матрицы(a11, a12, a13):";
		cin >> a11; cin >> a12; cin >> a13; 
		cout << " ВВедите коэфициенты матрицы(a21, a22, a23):";
		cin >> a21; cin >> a22; cin >> a23; 
		cout << " ВВедите коэфициенты матрицы(a31, a32, a33):";
		cin >> a31; cin >> a32; cin >> a33;

		cout << "Введите чему равны линейные уравнения:";
		cin >> answer1; cin >> answer2; cin >> answer3;

		cout << "Выберите способ решения. Введите 1, если хотите методом Крамера. Введите 2, если хотите методом обратной матрицы:";
			cin >> a;

		switch (a) {
		case 1: 
			cout << " Матрица имеет вид _________" << endl;

			cout << "|"; cout << a11; cout << "__"; cout << a12; cout << "__"; cout << a13; cout << "__"; cout << "="; cout << answer1;      cout << "|" << endl;
			cout << "|"; cout << a21; cout << "__"; cout << a22; cout << "__"; cout << a23; cout << "__";  cout << "="; cout << answer2;         cout << "|" << endl;
			cout << "|"; cout << a31; cout << "__"; cout << a32; cout << "__"; cout << a33; cout << "__"; cout << "="; cout << answer3;           cout << "|" << endl;

			cout << " 1 действие нахождение det:" << endl;

			det = (a11 * a22 * a33 + a31 * a12 * a23 + a13 * a21 * a32) - (a31 * a22 * a13 + a21 * a12 * a33 + a32 * a23 * a11);
			cout << "det ="; cout << det << endl;

			if (det == 0) {
				cout << " Данная матрица не имеет обратную, т.к det равен нулю" << endl;
				return 0;
			}
			else {
				cout << "2 действие" << endl;

				det1 = (answer1 * a22 * a33 + answer3 * a12 * a23 + a13 * answer2 * a32) - (answer3 * a22 * a13 + answer2 * a12 * a33 + a32 * a23 * answer1);
				det2 = (a11 * answer2 * a33 + a31 * answer1 * a23 + a13 * a21 * answer3) - (a31 * answer2 * a13 + a21 * answer1 * a33 + answer3 * a23 * a11);
				det3 = (a11 * a22 * answer3 + a31 * a12 * answer2 + answer1 * a21 * a32) - (a31 * a22 * answer1 + a21 * a12 * answer3 + a32 * answer2 * a11);

				cout << "det1 ="; cout << det1 << endl;
				cout << "det2 ="; cout << det2 << endl;
				cout << "det3 ="; cout << det3 << endl;


			}
			cout << "3 действие" << endl;
			x1 = det1 / det;
			x2 = det2 / det;
			x3 = det3 / det;

			cout << "x1 равен"; cout << x1 << endl;
			cout << "x2 равен"; cout << x2 << endl;
			cout << "x3 равен"; cout << x3 << endl;

			break; 



		case 2:  cout << " Матрица имеет вид _________" << endl;

			cout << "|"; cout << a11; cout << "__"; cout << a12; cout << "__"; cout << a13; cout << "__"; cout << "="; cout << answer1;      cout << "|" << endl;
			cout << "|"; cout << a21; cout << "__"; cout << a22; cout << "__"; cout << a23; cout << "__";  cout << "="; cout << answer2;         cout << "|" << endl;
			cout << "|"; cout << a31; cout << "__"; cout << a32; cout << "__"; cout << a33; cout << "__"; cout << "="; cout << answer3;           cout << "|" << endl;

			cout << " 1 действие нахождение det:" << endl;

			det = (a11 * a22 * a33 + a31 * a12 * a23 + a13 * a21 * a32) - (a31 * a22 * a13 + a21 * a12 * a33 + a32 * a23 * a11);
			cout << det << endl;
			if (det == 0) {
				cout << " Данная матрица не имеет обратную, т.к det равен нулю" << endl;
				return 0;
			}
			else {
				A11 = (a22 * a33) - (a23 * a32);
				A12 = -((a21 * a33) - (a23 * a31));
				A13 = (a21 * a32) - (a22 * a31);
				A21 = -((a12 * a33) - (a13 * a32));
				A22 = (a11 * a33) - (a13 * a31);
				A23 = -((a11 * a32) - (a12 * a31));
				A31 = (a12 * a23) - (a13 * a22);
				A32 = -((a11 * a23) - (a13 * a21));
				A33 = (a11 * a22) - (a12 * a21);

				cout << "2 действие" << endl;
				cout << "Вычислиим алгебраические дополенения:" << endl;
				cout << "A11="; cout << A11 << endl;
				cout << "A12="; cout << A12 << endl;
				cout << "A13="; cout << A13 << endl;
				cout << "A21="; cout << A21 << endl;
				cout << "A22="; cout << A22 << endl;
				cout << "A23="; cout << A23 << endl;
				cout << "A31="; cout << A31 << endl;
				cout << "A32="; cout << A32 << endl;
				cout << "A33="; cout << A33 << endl;



			}
			cout << "3 действие" << endl;
			cout << "изобразим обратную матрицу________" << endl;

			cout << "|"; cout << A11; cout << "__"; cout << A21; cout << "__"; cout << A31;      cout << "|" << endl;
			cout << "|"; cout << A12; cout << "__"; cout << A22; cout << "__"; cout << A32;         cout << "|" << endl;
			cout << "|"; cout << A13; cout << "__"; cout << A23; cout << "__"; cout << A33;          cout << "|" << endl;

			cout << "4 действие" << endl;
			cout << " Нахождение x(1, 2 , 3)" << endl;

			x1 = (A11 * answer1 + A21 * answer2 + A31 * answer3) * 1 / det;
			x2 = (A12 * answer1 + A22 * answer2 + A32 * answer3) * 1 / det;
			x3 = (A13 * answer1 + A23 * answer2 + A33 * answer3) * 1 / det;

			cout << "x1 равен"; cout << x1 << endl;
			cout << "x2 равен"; cout << x2 << endl;
			cout << "x3 равен"; cout << x3 << endl;
			break; 
		}
	return 0; 
}

