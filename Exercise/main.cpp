#include "SomeDataType.h"
#include "MyHelper.h"
#include <ExerciseLib/SomeDataHelper.h>

int main()
{
   SomeDataType data;

   MyHelper helper;
   helper.SomeMethod();

   SomeDataHelper someDataHelper;
   auto testme = someDataHelper.HelperMethod();
}
