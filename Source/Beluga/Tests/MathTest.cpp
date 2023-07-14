#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaVectorTest, "Beluga.Vector", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaVectorTest::RunTest(const FString& Parameters)
{
	FVector vec = FVector(0.0f,0.0f,0.0f);

	FVector vec2 = FVector(1.0f, 1.0f, 1.0f);

	FVector vec3 = vec + vec2;

	float VectorSize = vec3.Size();

	UE_LOG(LogTemp, Display, TEXT("Vector Size: %f"), VectorSize);

	TestTrue(TEXT("VectorSize is not correct."), VectorSize == 1.0f);

	return true;

}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMatrixTest, "Beluga.Matrix", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaMatrixTest::RunTest(const FString& Parameters)
{
	FMatrix mat;
	FVector vec(2.f, 3.f, 4.f);
	FVector TransformedVector = mat.TransformPosition(vec);
	UE_LOG(LogTemp, Display, TEXT("Transformed Vector: %s"), *TransformedVector.ToString());

	TestTrue(TEXT("TransformedVector is not correct."), TransformedVector == FVector(1.0f, 1.0f, 1.0f));


	return true;

}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaTransformTest, "Beluga.Transform", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaTransformTest::RunTest(const FString& Parameters)
{
	FTransform trans;
	FVector Location = trans.GetLocation();
	UE_LOG(LogTemp, Display, TEXT("Location: %s"), *Location.ToString());
	TestTrue(TEXT("Location is not correct."), Location == FVector(1.0f, 1.0f, 1.0f));
	return true;

}


IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaRotatorTest, "Beluga.Rotator", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaRotatorTest::RunTest(const FString& Parameters)
{
	FRotator rot(45.f, 180.f, 0.f);
	FRotator NormalizedRotator = rot.GetNormalized();
	UE_LOG(LogTemp, Display, TEXT("NormalizedRotator: %s"), *NormalizedRotator.ToString());
	TestTrue(TEXT("TestTrue is not correct."), NormalizedRotator == FRotator(1.0f, 1.0f, 1.0f));
	return true;

}


IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaQuatTest, "Beluga.Quat", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
bool FBelugaQuatTest::RunTest(const FString & Parameters)
{

FQuat quat = FQuat::Identity;

UE_LOG(LogTemp, Display, TEXT("Quat : %s"), *quat.ToString());
TestTrue("quat is not correct.", FQuat(0.0f, 0.0f, 0.0f, 1.0f) == quat);

return true;

}
