#include <cxxtest/TestSuite.h>
  int foo(int param)
    {
         if (param)
         {
             return 1;
         }
         else
        {
            return 0;
        }
    }
   
 class MyTestSuite : public CxxTest::TestSuite
 {
 public:
     void testAddition( void )
     {
//         TS_ASSERT( 1 + 1 > 1 );
         TS_ASSERT_EQUALS( foo(0),0  );
	 TS_ASSERT_EQUALS( foo(1),1  );
     }
 };
