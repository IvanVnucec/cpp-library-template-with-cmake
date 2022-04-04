#include "MyLibrary/MyLibrary.h"
#include "private.h"


bool MyLibrary::public_func()
{
    return private_func();
}
