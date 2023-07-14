#include "BelugaMinimal.h"
#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaStringTest::RunTest(const FString& Parameters) {

	FString str(TEXT("Apple"));

	FString str2 = str.ToLower();

	TestTrue(TEXT("apple failed"), str2 == TEXT("apple"));

	return true;

}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaNameTest, "Beluga.FName", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaNameTest::RunTest(const FString& Parameters) {

	FName str(TEXT("Banana"));

	FName str2(TEXT("Banana"));

	TestTrue(TEXT("Banana failed"), str.Compare(str2) == 0);

	return true;

}


IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTextTest, "Beluga.FText", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaTextTest::RunTest(const FString& Parameters) {

	FString str1 = TEXT("Kiwi");

	FText str = FText::FromString(str1);

	TestTrue(TEXT("Kiwi failed"), str1 == TEXT("Kiwi"));

	return true;

}




