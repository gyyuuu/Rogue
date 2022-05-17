#include "Message.hpp"

namespace rogue{
Message::Message(std::string message){
    m_position = {0,0};
    m_message = message;
}

Message::~Message(){}
}
