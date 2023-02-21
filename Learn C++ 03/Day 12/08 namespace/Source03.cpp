namespace MFC {
	namespace FileServices {
		class CFile {};

		class CMemFile {};
	}

	namespace Exceptions {
		class CException {};

		class CDaoException {};

		class COleException {};
	}

	namespace Arrays {
		class CArray {};

		class CByteArray {};
	}
}

using namespace MFC::Arrays;
using namespace MFC::Exceptions;

int main() {
	CArray a;
	CDaoException b;
}

/*
- "using namespace" can be used to avoid typing fully qualified name of the symbol.
- Note ; 'using namespace' statement in case of multiple 'using namespace' statement, one dose not override the previous 'using namespace' statement.
*/