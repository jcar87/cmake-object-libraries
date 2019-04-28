#include <string>

#if COMPILING_DLL
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

namespace core::io {

	void DLLEXPORT printString(const std::string& someString);

	int DLLEXPORT returnNumberFour();

} // core::database