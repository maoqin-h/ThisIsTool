// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� THISISTOOOL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// THISISTOOOL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef THISISTOOOL_EXPORTS
#define THISISTOOOL_API __declspec(dllexport)
#else
#define THISISTOOOL_API __declspec(dllimport)
#endif

// �����Ǵ� ThisIsToooL.dll ������
class THISISTOOOL_API CThisIsToooL {
public:
	CThisIsToooL(void);
	// TODO:  �ڴ�������ķ�����
};

extern THISISTOOOL_API int nThisIsToooL;

THISISTOOOL_API int fnThisIsToooL(void);
