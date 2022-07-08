#include "FileWork.h"
//Lesson 133. File work.

void LaunchFileWork()
{
	//WriteToFile();
	//ReadFromToFile();
	//SaveObject();
	//ReadObject();
	FstreamReads();

}

//Lesson:133. Write to file.
void WriteToFile()
{
	ofstream fout; //Create object a class <ofstream>
	//cout << "Please, enter location the file. Thank you!\n";
	//string FileLocation = "";
	//cin >> FileLocation;
	string FileLocation = "MyFile.txt";//Create variable to save location a file.
	fout.open(FileLocation, ofstream::app);//Pointer on the text a file
	bool OpenResult = fout.is_open();//Check, was it possible is open the file.
	if (OpenResult)
	{
		cout << "File syccessfully opened\n";
		fout << "This your a data\n";
		fout << 555 << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << "Please, the enter a number: ";
			int number = 0;
			cin >> number;
			fout << "\n";
			fout << number;
		}
	}
	else
	{
		cout << "File is not open\n";
	}
	fout.close();//Closes the opened a object
}

//Lesson: 134. Read from a file
void ReadFromToFile()
{
	string FileLocation = "MyFile.txt";
	ifstream fin;//Read from a file
	fin.open(FileLocation);
	if (fin.is_open())
	{
		cout << "File successfully opened!";
		char ch = {};
		string str = "";
		while (!fin.eof())
		{
			//cout << ch;
			//fin >> str;
			getline(fin, str);//Read line by line
			cout << str << endl;
		}
	}
	else
	{
		cout << "File not opened!";
	}
	fin.close();
}

//Lesson: 135. Save object to file.
class Pointer
{
public:
	Pointer()
	{
		x, y, z = 0;
	}
	Pointer(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void PrintTheCordinats()
	{
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
	}
private:
	int x;
	int y;
	int z;
	friend ostream& operator <<(ostream& os, const Pointer& pointer);
	friend istream& operator >>(istream& is, Pointer& pointer);
};
void SaveObject()
{
	Pointer pointer(20, 40, 60);
	pointer.PrintTheCordinats();
	
	ofstream fout;
	string FileLocation = "MyFile.txt";
	fout.open(FileLocation, ofstream::app);
	
	if (fout.is_open())
	{
		cout << "File successfully is opened" << endl;
		fout.write((char*)&pointer, sizeof(pointer));
		fout << endl;
	}
	else
	{
		cout << "File no opened!" << endl;
	}
	fout.close();
}
void ReadObject()
{
	Pointer pointer;
	ifstream fin;
	string FileLocation = "MyFile.txt";
	fin.open(FileLocation);
	if (fin.is_open())
	{
		cout << "File successfully opened!\n";
		while (fin.read((char*)&pointer, sizeof(pointer)))
		{
			pointer.PrintTheCordinats();
		}
	}
	else
	{
		cout << "A file not opened!\n";
	}
	fin.close();
}

//Lesson: 136. fstream: Reads and write a data
void FstreamReads()
{
	Pointer pointer;
	fstream fs;
	string FileLocation = "MyFile.txt";
	fs.open(FileLocation, fstream::in | fstream::out | fstream::app);//Check, is opens a file. Parametr a pointers the on bits read and write. Working with a read, a write.
	if (fs.is_open())
	{
		setlocale(LC_ALL, "RU");
		int InputValue = 0;
		string MessageBuffer = "";
		cout << "A file successfully opened!\n";
		cout << "Please, the click: #1 for writes a message in a file\n";
		cout << "Please, the click: #2 for reads alled a message in a file\n";
		cin >> InputValue;
		fs << pointer << endl;
		if (InputValue == 1)
		{
			cout << "Введите Ваше соощение:\n";
			SetConsoleCP(1251);//Switching codings the console on the 1251.
			cin >> MessageBuffer;
			fs << MessageBuffer << endl;
			SetConsoleCP(866);//Return a codings the console in default.
		}
		if (InputValue == 2)
		{
			string OutputValue = "";
			while (true)
			{
				fs >> OutputValue;
				cout << OutputValue << endl;
				if (fs.eof())
				{
					break;
				}
			}
		}
	}
	else
	{
		cout << "A file not opened!\n";
	}
	fs.close();
}

//Lesson 137. Streaming input-output in a file. Overload the operator
ostream& operator<<(ostream& os, const Pointer& pointer)//Realisation overload the operator input-output.
{
	os << pointer.x << " " << pointer.y << " " << pointer.z;
	return os;
}
istream& operator >>(istream& is, Pointer& pointer)
{
	is >> pointer.x >> pointer.y >> pointer.z;
	return is;
}

void StreamingInputOutput()
{
	Pointer pointer(211, 234, 123);
	cout << pointer << endl;
}