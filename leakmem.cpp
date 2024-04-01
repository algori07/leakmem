#include <thread>
main()
{
	for(int i=0;i<std::thread::hardware_concurrency()-1;i++) new std::thread([](){while(1)new int;});
	while(1)new int;
}