#include <iostream>
#include <fstream>
#include "headers/main.hpp"
#include "sleepy_discord/websocketpp_websocket.h"


int main()
{

    ClientCLI::client client("Njc5MDQxNzYxMDIwMDg0MjM0.Xph-zg.Z_p7Lu8aPjqGWP-LMkP6UOCKmPw", 2);
    client.run();
}