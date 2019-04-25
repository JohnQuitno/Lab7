
#include "TestSuite.h"
bool TestSuite::emptyListSizeTest()
{
  LinkedListOfInts testableList;
  if(testableList.size()==0){
    return true;
  }
  return false;
}
bool TestSuite::addBackSize()
{
  LinkedListOfInts testableList;
  testableList.addBack(5);
  testableList.addBack(5);
  if(testableList.size()==2)
  {
    return true;
  }
  return false;
}

bool TestSuite::addFrontSize()
{
  LinkedListOfInts testableList;
  testableList.addFront(5);
  testableList.addFront(5);
  if(testableList.size()==2)
  {
    return true;
  }
  return false;
}

bool TestSuite::removeBackOnEmpty()
{
  LinkedListOfInts testableList;
  return(!testableList.removeBack());
}

bool TestSuite::removeFrontOnEmpty()
{
  LinkedListOfInts testableList;
  return(!testableList.removeFront());
}

bool TestSuite::removeBackSize()
{
  LinkedListOfInts testableList;
  testableList.addBack(5);
  testableList.addBack(5);
  testableList.removeBack();
  if(testableList.size()==1){
    return true;
  }
  return false;

}
bool TestSuite::removeFrontSize()
{
  LinkedListOfInts testableList;
  testableList.addBack(5);
  testableList.removeFront();
  if(testableList.size()==0){
    return true;
  }
  return false;

}
bool TestSuite::isEmptyOnEmpty()
{
  LinkedListOfInts testableList;
  return(testableList.isEmpty());
}
bool TestSuite::isEmptyOnOne()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  return(!testableList.isEmpty());
}
bool TestSuite::searchOnEmpty()
{
  LinkedListOfInts testableList;
  return(!testableList.search(10));

}
bool TestSuite::searchOnOne()
{
  LinkedListOfInts testableList;
  testableList.addBack(10);
  return(testableList.search(10));

}
std::string TestSuite::boolToPassFail(bool pf)
{
  if(pf){
    return "Passed";
  }
  return "Failed";
}
bool TestSuite::destructor()
{
  LinkedListOfInts* testableList = new LinkedListOfInts();
  testableList->addBack(1);
  testableList->addFront(2);
  delete testableList;
  return true;
}
bool TestSuite::remFront()
{
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addFront(2);
  testableList.removeFront();
  std::vector<int> myVec = testableList.toVector();
  if(myVec[0]==1&(myVec.size()==1))
  {
    return true;
  }
  return false;
}
bool TestSuite::remBack()
{
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addFront(2);
  testableList.removeBack();
  std::vector<int> myVec = testableList.toVector();
  if(myVec[0]==2&(myVec.size()==1))
  {
    return true;
  }
  return false;
}
bool TestSuite::adFront()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.addFront(2);
  std::vector<int> myVec = testableList.toVector();
  if(myVec[0]==2&myVec[1]==1)
  {
    return true;
  }
  return false;
}
bool TestSuite::adBack()
{
  LinkedListOfInts testableList;
  testableList.addBack(1);
  testableList.addBack(2);
  std::vector<int> myVec = testableList.toVector();
  if(myVec[0]==1&myVec[1]==2)
  {
    return true;
  }
  return false;
}
TestSuite::TestSuite()
{
}
void TestSuite::runTests()
{
  std::cout<<std::endl;
  std::cout<<"Test 1: Size of empty list is zero:                   "<< boolToPassFail(emptyListSizeTest())<<std::endl;
  std::cout<<"Test 2: Size returns correct value after addBack:     "<< boolToPassFail(addBackSize())<<std::endl;
  std::cout<<"Test 3: Size returns correct value after addFront:    "<< boolToPassFail(addFrontSize())<<std::endl;
  std::cout<<"Test 4: remove back on empty returns false:           "<< boolToPassFail(removeBackOnEmpty())<<std::endl;
  std::cout<<"Test 5: remove front on empty returns false:          "<< boolToPassFail(removeFrontOnEmpty())<<std::endl;
  std::cout<<"Test 6: size returns correct value after removeBack:  "<< boolToPassFail(removeBackSize())<<std::endl;
  std::cout<<"Test 7: size returns correct value after removeFront: "<< boolToPassFail(removeFrontSize())<<std::endl;
  std::cout<<"Test 8: isEmpty returns true on Empty:                "<< boolToPassFail(isEmptyOnEmpty())<<std::endl;
  std::cout<<"Test 9: isEmpty returns false with one element:       "<< boolToPassFail(isEmptyOnOne())<<std::endl;
  std::cout<<"Test 10: search on empty returns false:               "<< boolToPassFail(searchOnEmpty())<<std::endl;
  std::cout<<"Test 11: search with one element returns true:        "<< boolToPassFail(searchOnOne())<<std::endl;
  std::cout<<"Test 12: Destructor after addfront and back:          "<< boolToPassFail(destructor())<<std::endl;
  std::cout<<"Test 13: removeBack removes on the back:              "<< boolToPassFail(remBack())<<std::endl;
  std::cout<<"Test 14: removeFront removes on the Front:            "<< boolToPassFail(remFront())<<std::endl;
  std::cout<<"Test 15: addBack adds on the back:                    "<< boolToPassFail(adBack())<<std::endl;
  std::cout<<"Test 16: addFront adds on the front:                  "<< boolToPassFail(adFront())<<std::endl;
}
