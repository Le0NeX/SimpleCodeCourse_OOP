#include "Pointers.h";

//Video: #130. Smart pointers.

template<class T>//Realisation smart pointer class
class SmartPointer
{
public:
	SmartPointer(T* ptr)
	{
		this->ptr = ptr;
		cout << "Constructor!\n";
	}
	~SmartPointer()
	{
		cout << "Destructor!\n";
		delete ptr;
	}
	T& operator*()
	{
		return *ptr;
	}
private:
	T* ptr;
};
//Video: #131. auto_ptr, unique_ptr, shared_ptr.

void LaunchPointers()
{
	//int* ptr = new int(5); //Create pointer for 5
	//cout << "ptr: " << *ptr << endl;
	//SmartPointer<int> smartPointer = new int(5);
	//*smartPointer = 5555;
	//cout << "smartPointer: " << *smartPointer << endl;
	//delete ptr;
	
	//Video: #131. auto_ptr, unique_ptr, shared_ptr.
	auto_ptr<int> ap1(new int(5));
	auto_ptr<int> ap2(ap1);

	unique_ptr<int> up1(new int(5));
	unique_ptr<int> up2;
	//up2 = move(up1);
	//up2.swap(up1);
	//int* p = up1.get();
	//int* p = new int(5);
	//unique_ptr<int> up1(p);
	//up1.release();//delete pointer
	//up1.reset();//value delete
	shared_ptr<int> sp1(new int(5));//shared_ptr is cool, countes pointers object
	shared_ptr<int> sp2(sp1);


}