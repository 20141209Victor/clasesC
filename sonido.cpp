#include <windows.h>
#include <mmsystem.h>
# pragma comment(lib,"winmm.lib") 


int main()
{
    sndPlaySound("prueba.wav", SND_ASYNC | SND_FILENAME | SND_LOOP);
    system("PAUSE");
    return 0;
}
