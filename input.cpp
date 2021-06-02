#include "Func.h"
#include "CRat.h"
#include "CVectRat.h"

CVectRat input(int size) {
	
	int vecType = -1;
	std::cout << "Input 0 for horizontal vector and 1 for vertical:\n";
	std::cin >> vecType;
	if (vecType !=0 && vecType != 1) {
		std::cerr << "Error! Wrong input!\n";
		exit(1);
	}

	CVectRat* m = (vecType == 0) ? dynamic_cast<CVectRat*>(new gorCVectRat(size)) : dynamic_cast<CVectRat*>(new vertCVectRat(size));
	unsigned den;
	unsigned num;
	//int num;
	for (int i = 0; i < size; i++) {
		cout << "Vvedite " << i + 1 << "-yu koordinatu (chisl i znamen)\t";
		cin >> num;
		cin >> den;
		CRat a(num, den);
		m->Set_arr(i, a);
	}
	cout << "Vy vveli vector\t\n\n";
	m->print();
	cout << endl;

	//delete m;

	return *m;
};
