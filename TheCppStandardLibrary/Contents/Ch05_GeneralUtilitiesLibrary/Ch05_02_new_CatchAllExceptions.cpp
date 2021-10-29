#include <iostream>
#include <new>
#include <string>

class Widget { double d[1024 * 1024 * 1024]; /* ... */ };



void Foo()
{
	Widget* ptr1 = new Widget;

	try
	{
		//...			// perform some operations
	}
	catch (/*...*/)		// for any exception
	{
		delete ptr1;	// clean up
		throw;			// rethrow the exception
	}

	delete ptr1;		// clean up on normal end
}



int main()
{
	try
	{
		// 如果分配失败，new抛出std::bad_alloc
		Widget* ptr1 = new Widget;
		
		try
		{
			//...			// perform some operations
		}
		catch (/* ... */)	// for any exception
		{
			delete ptr1;	// clean up
			throw;			// rethrow the exception
		}
		
		delete ptr1;		// clean up on normal end
	}
	catch (const std::bad_alloc& err)
	{
		std::cout << err.what() << std::endl;
	}




	return 0;




	// 如果分配失败，new返回一个空指针
	Widget* ptr2 = new (std::nothrow) Widget;
	// 这个if...else...的判断可能有效
	if (ptr2 == nullptr)
	{
		std::cout << "new false" << std::endl;
	}
	else
	{
		// ...
	}
	delete ptr2;


	return 0;
}
