#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaArrayTest, "Beluga.Array", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaArrayTest::RunTest(const FString& Parameters)
{
	TArray<int32> arr = { 1, 2, 3 };

	arr.Add(11);

	arr.RemoveAtSwap(0);

	TestTrue("arr is success", *(arr.begin()) == 11);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMapTest, "Beluga.Map", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaMapTest::RunTest(const FString& Parameters)
{
	TMap<FName, FString> map = { {TEXT("A"), TEXT("Apple")}, { TEXT("B"), TEXT("Banana") }, { TEXT("C"), TEXT("Cherry") } };

	map.Remove(TEXT("A")); // A키값을 가진 요소를 제거해주고

	map.Shrink(); // 메모리 재할당

	TestTrue("map is success", map.Num() == 2);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSetTest, "Beluga.Set", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
	bool FBelugaSetTest::RunTest(const FString& Parameters)
{

	TSet<int32> set = { 1, 2, 3 };

	set.Add(1);

	set.Add(2);

	set.Add(3);


	TestTrue("set is success", set.Num() == 3); //Tset은 중복 허용 x

	return true;


} //TestTrue(TEXT(""),조건식이 참일 경우 TEXT 출력);
 // TestEqual(TEXT(""),서로 변수가 같을 경우 TEXT 출력);