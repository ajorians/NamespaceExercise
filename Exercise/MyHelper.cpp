#include "MyHelper.h"
#include "Fruit.h"

void MyHelper::SomeMethod()
{

}

std::string MyHelper::TestMethod( Fruit fruit )
{
   switch ( fruit )
   {
      default:
      case Fruit::Orange:
         return "Yummy";
      case Fruit::Pineapple:
         return "Yummy";
      case Fruit::Banana:
         return "Great";
   }
}

