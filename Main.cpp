#include "engine/Test.h"
#include "engine/GameEngine.h"

int main(){
    Test test("WAAAH");
    test.printOut();
    GameEngine engine;
    engine.gameLoop();
}