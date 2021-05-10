#include "SomeDataType.h"
#include "MyHelper.h"
#include "Fruit.h"
#include <ExerciseLib/SomeDataHelper.h>

int main()
{
   SomeDataType data;

   MyHelper helper;
   helper.SomeMethod();

   SomeDataHelper someDataHelper;
   auto testme = someDataHelper.HelperMethod();

   auto testme2 = helper.TestMethod( Fruit::Pineapple );
}
