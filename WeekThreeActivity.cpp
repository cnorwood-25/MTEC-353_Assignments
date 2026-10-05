#include <iostream>
class MIDIMessage
{
protected:
    unsigned char channel;
    unsigned long timestamp; // Simple timing

public:
    MIDIMessage(unsigned char ch) : channel(ch), timestamp(0) {}

    void send()
    {
        std::cout << "Sending MIDI on channel " << int(channel) << std::endl;
    }

    unsigned char getChannel() { return channel; }
};

// class MIDINoteMessage : public MIDIMessage{
//     MIDINoteMessage(unsigned char c, unsigned char p, unsigned char v){
//     }
// public:
//     unsigned char getVelocity(v){
//     velocity = v ;
//     return velocity;
//     }
//     void setVelocity(unsigned char v){
//     velocity = v
//     }
// };

int main()
{
    MIDIMessage msg(1);
    msg.send();
    return 0;
}