#include <thread>
main()
{
	while(1)new std::thread([](){while(1)new int;});
}