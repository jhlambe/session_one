//////////////////////////////////////////////////////////////////////////

#include "AIE.h"
#include <string>
#include <cmath>
#include <time.h>
#include <assert.h>
#if !defined(__APPLE__)
#include <crtdbg.h>
#endif
#include <iostream>
#include <list>
#include <string>

int main( int argc, char* argv[] )
{
	
	
	Initialise( 1024, 720, false, "Pong!" );
    
    int myTexture = CreateSprite("./images/crate_sideup.png", 64, 64, true);
	
	do
	{
		ClearScreen();
		
        MoveSprite(myTexture, 100, 100);
        DrawSprite(myTexture);
		
		
	} while ( FrameworkUpdate() == false );
	
    
    DestroySprite(myTexture);
    

	Shutdown();
	
	return 0;
}
