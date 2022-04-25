#include "KeywordThis.h"
#include "Default.h"

//Lesson: Keyword this.

class KeywordThis
{
private:
	int x = 0;
	int y = 0;
public:
	KeywordThis(int x)
	{
		this->x = x;
		cout << "int x: " << this->x << endl;//Outputs a value object x:
	}
};

void LaunchKeywordThis()
{
	KeywordThis kewordThis(10);
}
