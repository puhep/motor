// To control the Motor 

#ifndef MOTOR
#define MOTOR

class Motor
{

public:
    Motor();

    void Init();
    // void Write(const char * string);
    // void Command(const char * commandString);
    // void ShutDown();

protected:
    int port;
};

#endif

