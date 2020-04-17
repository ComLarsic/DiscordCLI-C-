# Distributed under the OSI-approved MIT License.  See accompanying
# file LICENSE or https://github.com/Crascit/DownloadProject for details.

cmake_minimum_required(VERSION 2.8.2)

project(asio-download NONE)

include(ExternalProject)
ExternalProject_Add(asio-download
                    GIT_REPOSITORY;https://github.com/chriskohlhoff/asio.git;GIT_TAG;22afb86;UPDATE_DISCONNECTED;1
                    SOURCE_DIR          "/run/media/com/eef95668-7438-4f7a-bf0f-9f66f56e0459/Projects/C++/BotDiscord/source/DiscordCLI-Cpp/sleepy-discord/deps/asio"
                    BINARY_DIR          "/run/media/com/eef95668-7438-4f7a-bf0f-9f66f56e0459/Projects/C++/BotDiscord/source/DiscordCLI-Cpp/build/asio-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
)
