#include "BelugaMinimal.h"

void StringTest() {
	//생성
		// char "asdf"
		// wchar L"asdf"
		// tchar TEXT("asdf")
	FString str0(("asdf"));
	FString str1(L("asdf"));
	FString str2(TEXT("asdf"));

	//ctrl + d 현재 줄 아래에 복사



	//Printf(Printf)
	{
		FString str(TEXT("asdf"));
		Printf(str);
	}

	//Format(String.Format)
	{
		FString str(TEXT("asdf"));
		FString.Format(str);
	}

	//FStringFormatNamedArguments
	//FStrngFormatOrderedArguments

//Replace
	{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));
		check(result == TEXT("adsf"));
	}

	//Insert(At)

	//clear
	{
		FString str(TEXT("asdf"));
		str.Clear();
		check(!str);
	}

	//shrink
	{
		FString str(TEXT("asdf"));
		str.Shrink();


	}

	//isEmpty
	{
		FString str;
		bool result = str.isEmpty();
		check(result);
	}

	//RemoveAt

	//find로 인덱스

	//Left
	{
		FString str(TEXT("ABCDEFGHIJKLMNOP"));
		FString result = str.Left(4); // 왼쪽에서 부터 4개의 문자를 추출하여 문자열로 반환.
		check(result == TEXT("ABCD"));

	}

	//Mid

	//Right

	{
		FString str(TEXT("ABCDEFGHIJKLMNOP"));
		FString result = str.Right(4); // 왼쪽에서 부터 4개의 문자를 추출하여 문자열로 반환.
		check(result == TEXT("PONM"));

	}

	//길이 구하기
	{
		FString strA(TEXT("strA"));
		int LenStrA = strA.Len();

		//변수명이나 괄호에 대고 alt+shift+< or alt+shift+> 를 입력하면, 같은 변수명을 해당되게 만듦.
		check(LenStrA == 0);


	}
	//TCHAR* 얻기

	//대입연산자 =

	//operator*

	//operator[]

	//대소 비교

	//대문자,소문자로 변환
	{
		FString str(TEXT("ABCD"));
		FString result = str.ToLower();
		check(result == TEXT("abcd"));
	}
	{
		FString str(TEXT("abcd"));
		FString result = str.ToUpper(str);
		check(result == TEXT("ABCD"));
	}



}