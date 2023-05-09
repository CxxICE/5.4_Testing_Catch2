#include "Doubly_linked_list.h"
#include <iostream>

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>


TEST_CASE("test Doubly_linked_list", "test1") 
{
	SECTION("Empty") {
		List l;
		CHECK(l.Empty() == true);
	}
	SECTION("Size") {
		List l;
		l.PushBack(4);
		l.PushBack(5);
		l.PushBack(6);
		CHECK(l.Size() == 3);
		l.PushFront(3);
		l.PushFront(2);
		l.PushFront(1);
		CHECK(l.Size() == 6);
		l.PopBack();
		CHECK(l.Size() == 5);
		l.PopFront();
		CHECK(l.Size() == 4);
	}
	SECTION("Clear") {
		List l;
		l.PushBack(4);
		l.PushBack(5);
		l.PushBack(6);
		l.Clear();
		CHECK(l.Size() == 0);
		CHECK(l.Empty() == true);
	}
}

int main(int argc, char **argv) {
	List l;
	
	
	return Catch::Session().run();
}


