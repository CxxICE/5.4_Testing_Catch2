#include "Doubly_linked_list.h"
#include <iostream>

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>


TEST_CASE("test Doubly_linked_list", "test1") 
{
	SECTION("PUSH_POP") {
		List l;
		l.PushBack(4);
		l.PushBack(5);
		l.PushBack(6);
		CHECK(l.Size() == 3);
		l.PushFront(3);
		l.PushFront(2);
		l.PushFront(1);
		CHECK(l.Size() == 6);
		CHECK(l.PopBack() == 6);
		CHECK(l.PopBack() == 5);
		CHECK(l.Size() == 4);
		CHECK(l.PopFront() == 1);
		CHECK(l.PopFront() == 2);
		CHECK(l.Size() == 2);		
	}	
	
	SECTION("Pop_Back_Empty") 
	{
		List l;
		bool run_err = false;
		try
		{
			l.PopBack();
		}
		catch (std::runtime_error)
		{
			run_err = true;
		}
		INFO("PopBack не выдал исключение");
		CHECK(run_err);
	}
	
	SECTION("Pop_Front_Empty") 
	{
		List l;
		bool run_err = false;
		//l.PushBack(4);
		//l.PushBack(5);
		try
		{
			l.PopFront();
		}
		catch (std::runtime_error)
		{
			run_err = true;
		}
		INFO("PopFront не выдал исключение");
		CHECK(run_err);
	}
	
	
}

int main(int argc, char **argv) {
	List l;
	setlocale(LC_ALL, "RU");
	Catch::Session().run();
	return 0;
}


