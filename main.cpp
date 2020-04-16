#include <iostream>
#include <fstream>
#include "headers/main.hpp"
#include "sleepy_discord/websocketpp_websocket.h"


int main()
{

    ClientCLI::client client("Token", 2);
    client.run();
}
