#include <string>

#if defined(COMPILING_DLL)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

namespace core::database {

void DLLEXPORT printString(const std::string& someString);

int DLLEXPORT returnNumberTwo();

} // core::database