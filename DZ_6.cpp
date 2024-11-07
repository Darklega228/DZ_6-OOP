#include <iostream>
#include <windows.h>
#include <vector>
#include <windows.h>
using namespace std;

class Desklamp {
	int* weights = nullptr;
	char* Brand = nullptr;
	int weight_count = 0;
	int Brightness;

public:
	void AddWeights(int* weights, int count) { }

	void AddWeights(int weight) {
		if (weight < 1 || weight > 12) throw "Incorrect value.";
		if (weight_count == 0) {
			weights = new int[1];
			weights[0] = weight;
		}
		else {
			int* temp = new int[weight_count + 1];
			for (int i = 0; i < weight_count; i++)
				temp[i] = weights[i];
			temp[weight_count] = weight;
			delete[] weights;
			weights = temp;
		}
		weight_count++;
	}

	vector<int> GetWeights() const {
		vector<int> temp;
		for (int i = 0; i < weight_count; i++)
		{
			temp.push_back(weights[i]);
		}
		return temp;
	}

	int GetRateByIndex(unsigned int index) {
		if (index >= weight_count) throw "Incorrect index!\n";
		return weights[index];
	}

	void SetBrand(const char* Brand) {
		if (this->Brand != nullptr) {
			delete[] this->Brand;
		}
		int length = strlen(Brand) + 1;
		this->Brand = new char[length];
		strcpy_s(this->Brand, length, Brand);
	}

	string GetName() const {
		return string(Brand);
	}

	explicit Desklamp(string Brand) : Desklamp(Brand.c_str(), 100) {}

	explicit Desklamp(int value) : Desklamp("Default", value) {}

	Desklamp() : Desklamp(35) {}

	explicit Desklamp(int* ar) : Desklamp("Alex", 35) {
		weights = ar;
		weight_count = _msize(ar) / sizeof(int); // 5
		cout << weight_count << "\n";
	}

	// main c-tor
	Desklamp(const char* Brand, int Brightness) {
		SetBrand(Brand);
		SetBrightness(Brightness);
	}

	void SetBrightness(int Brightness) {
		this->Brightness = Brightness;
	}

	int GetBrightness() const {
		return Brightness;
	}

	void Print() const {
		cout << Brand << ", " << Brightness << " яркость\n";
		for (int i = 0; i < weight_count; i++) {
			cout << weights[i] << ", ";
		}
		cout << "\n\n";
	}

	~Desklamp() {
		if (Brand != nullptr) {
			delete[] Brand;
			Brand = nullptr;
		}
		if (weights != nullptr) {
			delete[] weights;
			weights = nullptr;
		}
	}
};

class Laptop {
	int* weightsNout = nullptr;
	char* Brand = nullptr;
	int weightNout_count = 0;
	int hertz;

public:
	void AddWeights(int* weights, int count) { }

	void AddWeights(int weight) {
		if (weight < 1 || weight > 12) throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeights() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
		{
			temp.push_back(weightsNout[i]);
		}
		return temp;
	}

	int GetRateByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetBrand(const char* Brand) {
		if (this->Brand != nullptr) {
			delete[] this->Brand;
		}
		int length = strlen(Brand) + 1;
		this->Brand = new char[length];
		strcpy_s(this->Brand, length, Brand);
	}

	string GetName() const {
		return string(Brand);
	}

	explicit Laptop(string Brand) : Laptop(Brand.c_str(), 4) {}

	explicit Laptop(int value) : Laptop("Default", value) {}

	Laptop() : Laptop(35) {}

	explicit Laptop(int* ar) : Laptop("Alex", 35) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int); // 5
		cout << weightNout_count << "\n";
	}

	// main c-tor
	Laptop(const char* Brand, int hertz) {
		SetBrand(Brand);
		SetHertz(hertz);
	}

	void SetHertz(int hertz) {
		this->hertz = hertz;
	}

	int GetBrightness() const {
		return hertz;
	}

	void Print() const {
		cout << Brand << ", " << hertz << " Гц\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~Laptop() {
		if (Brand != nullptr) {
			delete[] Brand;
			Brand = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

class Flashlight {
	int* weightsNout = nullptr;
	char* Brand = nullptr;
	int weightNout_count = 0;
	int distance;

public:
	void AddWeights(int* weights, int count) { }

	void AddWeights(int weight) {
		if (weight < 1 || weight > 12) throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeights() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
		{
			temp.push_back(weightsNout[i]);
		}
		return temp;
	}

	int GetRateByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetBrand(const char* Brand) {
		if (this->Brand != nullptr) {
			delete[] this->Brand;
		}
		int length = strlen(Brand) + 1;
		this->Brand = new char[length];
		strcpy_s(this->Brand, length, Brand);
	}

	string GetName() const {
		return string(Brand);
	}

	explicit Flashlight(string Brand) : Flashlight(Brand.c_str(), 4) {}

	explicit Flashlight(int value) : Flashlight("Default", value) {}

	Flashlight() : Flashlight(35) {}

	explicit Flashlight(int* ar) : Flashlight("Alex", 35) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int); // 5
		cout << weightNout_count << "\n";
	}

	// main c-tor
	Flashlight(const char* Brand, int distance) {
		SetBrand(Brand);
		SetHertz(distance);
	}

	void SetHertz(int distance) {
		this->distance = distance;
	}

	int GetBrightness() const {
		return distance;
	}

	void Print() const {
		cout << Brand << ", " << distance << " дистанция\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~Flashlight() {
		if (Brand != nullptr) {
			delete[] Brand;
			Brand = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

class Ps3 {
	int* weightsNout = nullptr;
	char* ModelP = nullptr;
	int weightNout_count = 0;
	int games;

public:
	void AddWeights(int* weights, int count) { }

	void AddWeights(int weight) {
		if (weight < 1 || weight > 12) throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeights() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
		{
			temp.push_back(weightsNout[i]);
		}
		return temp;
	}

	int GetRateByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetBrand(const char* ModelP) {
		if (this->ModelP != nullptr) {
			delete[] this->ModelP;
		}
		int length = strlen(ModelP) + 1;
		this->ModelP = new char[length];
		strcpy_s(this->ModelP, length, ModelP);
	}

	string GetName() const {
		return string(ModelP);
	}

	explicit Ps3(string ModelP) : Ps3(ModelP.c_str(), 4) {}

	explicit Ps3(int value) : Ps3("Default", value) {}

	Ps3() : Ps3(35) {}

	explicit Ps3(int* ar) : Ps3("Alex", 35) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int); // 5
		cout << weightNout_count << "\n";
	}

	// main c-tor
	Ps3(const char* ModelP, int games) {
		SetBrand(ModelP);
		SetHertz(games);
	}

	void SetHertz(int games) {
		this->games = games;
	}

	int GetBrightness() const {
		return games;
	}

	void Print() const {
		cout << ModelP << ", " << games << " игры\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~Ps3() {
		if (ModelP != nullptr) {
			delete[] ModelP;
			ModelP = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

class GrannyGame {
	int* weightsNout = nullptr;
	char* Name = nullptr;
	int weightNout_count = 0;
	int years;

public:
	void AddWeights(int* weights, int count) { }

	void AddWeights(int weight) {
		if (weight < 1 || weight > 12) throw "Incorrect value.";
		if (weightNout_count == 0) {
			weightsNout = new int[1];
			weightsNout[0] = weight;
		}
		else {
			int* temp = new int[weightNout_count + 1];
			for (int i = 0; i < weightNout_count; i++)
				temp[i] = weightsNout[i];
			temp[weightNout_count] = weight;
			delete[] weightsNout;
			weightsNout = temp;
		}
		weightNout_count++;
	}

	vector<int> GetWeights() const {
		vector<int> temp;
		for (int i = 0; i < weightNout_count; i++)
		{
			temp.push_back(weightsNout[i]);
		}
		return temp;
	}

	int GetRateByIndex(unsigned int index) {
		if (index >= weightNout_count) throw "Incorrect index!\n";
		return weightsNout[index];
	}

	void SetBrand(const char* Name) {
		if (this->Name != nullptr) {
			delete[] this->Name;
		}
		int length = strlen(Name) + 1;
		this->Name = new char[length];
		strcpy_s(this->Name, length, Name);
	}

	string GetName() const {
		return string(Name);
	}

	explicit GrannyGame(string Name) : GrannyGame(Name.c_str(), 70) {}

	explicit GrannyGame(int value) : GrannyGame("Default", value) {}

	GrannyGame() : GrannyGame(35) {}

	explicit GrannyGame(int* ar) : GrannyGame("Alex", 35) {
		weightsNout = ar;
		weightNout_count = _msize(ar) / sizeof(int); // 5
		cout << weightNout_count << "\n";
	}

	// main c-tor
	GrannyGame(const char* Name, int years) {
		SetBrand(Name);
		SetHertz(years);
	}

	void SetHertz(int years) {
		this->years = years;
	}

	int GetBrightness() const {
		return years;
	}

	void Print() const {
		cout << Name << ", " << years << " лет\n";
		for (int i = 0; i < weightNout_count; i++) {
			cout << weightsNout[i] << ", ";
		}
		cout << "\n\n";
	}

	~GrannyGame() {
		if (Name != nullptr) {
			delete[] Name;
			Name = nullptr;
		}
		if (weightsNout != nullptr) {
			delete[] weightsNout;
			weightsNout = nullptr;
		}
	}
};

int main()
{
	setlocale(0, "");
	/*string name = "Philips";
	Desklamp d = (Desklamp)name;
	d.Print();*/

	/*string name = "hp";
	Laptop l = (Laptop)name;
	l.Print();*/

	/*string name = "Yajia";
	Flashlight f = (Flashlight)name;
	f.Print();*/

	/*string name = "Slim";
	Ps3 p = (Ps3)name;
	p.Print();*/

	string name = "Zina";
	GrannyGame g = (GrannyGame)name;
	g.Print();
}
