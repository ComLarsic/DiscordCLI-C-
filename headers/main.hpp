#include <iostream>
#include "sleepy_discord/websocketpp_websocket.h"

namespace ClientCLI
{
    class client : public SleepyDiscord::DiscordClient
    {
        public:

            std::string message;

            using SleepyDiscord::DiscordClient::DiscordClient;

            void onMessage(SleepyDiscord::Message message) override
            {
                //Hello command
                if(message.startsWith("!Hello"))
                {
                    sendMessage(message.channelID ,"Hello " + message.author.username);
                }

                //checks if message not sent by self
                if(message.author.username != "[Your bot name here]")
                {
                    std::cout<<message.content<<std::endl;
                    ClientMessenger();
                }
            }

            void ClientMessenger()
            {
                std::cout<<"Respose: ";
                std::getline(std::cin, message); 
                sendMessage(679041248086065167, message);
            }
    };
}