#include "BelugaMinimal.h"

void StringTest() {
	//����
		// char "asdf"
		// wchar L"asdf"
		// tchar TEXT("asdf")
	FString str0(("asdf"));
	FString str1(L("asdf"));
	FString str2(TEXT("asdf"));

	//ctrl + d ���� �� �Ʒ��� ����



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

	//find�� �ε���

	//Left
	{
		FString str(TEXT("ABCDEFGHIJKLMNOP"));
		FString result = str.Left(4); // ���ʿ��� ���� 4���� ���ڸ� �����Ͽ� ���ڿ��� ��ȯ.
		check(result == TEXT("ABCD"));

	}

	//Mid

	//Right

	{
		FString str(TEXT("ABCDEFGHIJKLMNOP"));
		FString result = str.Right(4); // ���ʿ��� ���� 4���� ���ڸ� �����Ͽ� ���ڿ��� ��ȯ.
		check(result == TEXT("PONM"));

	}

	//���� ���ϱ�
	{
		FString strA(TEXT("strA"));
		int LenStrA = strA.Len();

		//�������̳� ��ȣ�� ��� alt+shift+< or alt+shift+> �� �Է��ϸ�, ���� �������� �ش�ǰ� ����.
		check(LenStrA == 0);


	}
	//TCHAR* ���

	//���Կ����� =

	//operator*

	//operator[]

	//��� ��

	//�빮��,�ҹ��ڷ� ��ȯ
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