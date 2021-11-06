#define MaxSize 105

typedef struct {
    char ch[MaxSize];
    int length;
} SString;

/*
 * typedef struct{
 * char *ch;
 * int length;
 * }SString;//堆存储表示
 */

void StrAssign(SString& T, char s[], int len);
void StrCopy(SString& T, SString S);
bool StrEmpty(SString S);
int StrCompare(SString S, SString T);
int StrLength(SString S);
void SubString(SString& T, SString S, int pos, int len);
void Concat(SString& T, SString S1, SString S2);
int Index(SString S, SString T);
void ClearStr(SString& S);
void DestroyStr(SString& S);

int Index_Normal(SString S, SString T);
