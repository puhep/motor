#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <fcntl.h>

#include <iostream>

#include <string.h>  /* String function definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

#include "motor.hh"

Motor::Motor()
{
}

void Motor::Init()
{
  std::cout << "[Motor] Initialization." << std::endl;
}

int main(int argc, char** argv) {
  std::cout << "[Motor] This is main." << std::endl;
}

