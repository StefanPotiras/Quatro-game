#include "stdafx.h"
#include "CppUnitTest.h"

#include "Piece.h"

#include <sstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace QuartoTests
{		
	TEST_CLASS(PieceTests)
	{
	public:
		
		TEST_METHOD(DefaultConstructor)
		{
			Piece piece(Piece::Body::Hollow,Piece::Color::Dark,Piece::Height::Short,Piece::Shape::Round);
			Assert::IsTrue(piece.GetShape() == Piece::Shape::Round);


		}

		TEST_METHOD(Print)
		{

		}
	};
}