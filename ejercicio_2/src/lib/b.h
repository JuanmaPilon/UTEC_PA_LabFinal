 ////////////////////////////////////////////////////////////////

#ifndef B_H
#define B_H

////////////////////////////////////////////////////////////////

#include "./header.h"

////////////////////////////////////////////////////////////////

class B
{
	public:
		B  ();
		B  ( B const& );
		~B ();

		void Print ();

	private:
		A* a;
		C* c;
};

////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////
