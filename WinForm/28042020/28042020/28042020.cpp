#include <Windows.h>
#include <stdio.h>

INT WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	INT nCmdShow)
{


	/*int rez = MessageBox(
		NULL,
		TEXT("�� ������?"),
		TEXT("�����������"),
		MB_YESNO |
		MB_ICONQUESTION |
		MB_DEFBUTTON2
	);*/
	int t = 159;
	
	wchar_t buf[100]{ 0 };
	// 13 ->  L"13"
	wsprintf(buf, TEXT("��������� = %d "), t);

	int rez = MessageBox(
		NULL,
		buf,
		TEXT("�����������"), MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2
	);
	double dd = t / 24.0;
	swprintf_s  (buf, TEXT("��������� = %10.2lf\n��������� = %10d  "), dd,t);

	rez = MessageBox(
		NULL,
		buf,
		TEXT("�����������"), MB_YESNO | 	MB_ICONQUESTION | MB_DEFBUTTON2
	);

	if (rez == IDYES)
		MessageBox(NULL, TEXT("�� ��������� ���"), TEXT("����������"),
			MB_OK | MB_ICONINFORMATION);
	if (rez == IDNO)
		MessageBox(NULL, TEXT("�� ��������� Ͳ"), TEXT("����������"),
			MB_OK | MB_ICONINFORMATION);






		return 0;
}
