/*
 * main.cpp
 *
 *  Created on: 30-Jan-2014
 *      Author: kmoza
 */


#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

/*
class VTable
{
public:
	virtual void foo1()
	{

	}

	virtual void foo2()
	{

	}

	virtual ~ VTable()
	{

	}
};

int main()
{
	//system("clear");
	VTable vobj;
	cout<<"Size of class with 2 virtual functions = "<<sizeof(vobj);
	return 0;
}
*/



///////////   Boost Library testing
/*
#include <boost/thread.hpp>
#include <boost/thread/thread.hpp>
#include <iostream>
#include <boost/bind.hpp>

void wait(int seconds)
{
  boost::this_thread::sleep(boost::posix_time::seconds(seconds));
}

void thread()
{
  for (int i = 0; i < 5; ++i)
  {
    wait(1);
    std::cout << i << std::endl;
  }
}

int main()
{
  boost::thread t(thread);
  t.join();
}
*/

/*
#include <boost/thread/thread.hpp>
#include <boost/thread.hpp>
#include <iostream>
using namespace std;

void hello()
{
   cout<<"hello!"<<endl;
}

int main()
{
    boost::thread thrd(hello);
    cout<<"Just a test!"<<endl;
    thrd.join();
}
*/

/*
#include <boost/thread.hpp>
#include <iostream>

void wait(int seconds)
{
  boost::this_thread::sleep(boost::posix_time::seconds(seconds));
}

void thread()
{
  for (int i = 0; i < 5; ++i)
  {
    wait(1);
    std::cout << i << std::endl;
  }
}

int main()
{
  boost::thread t(thread);
  t.join();
}

*/

/*
#include <boost/thread.hpp>
#include <boost/thread/thread.hpp>
#include <iostream>

void wait(int seconds)
{
	boost::this_thread::sleep(boost::posix_time::seconds(seconds));
}


void thread()
{
	try
	{
		for(int i=0;i<5;i++)
		{
			wait(1);
			std::cout << i <<std::endl;
		}
	}
	catch(boost::thread_interrupted&)
	{

	}
}


int main()
{
	boost::thread t(thread);
	wait(3);
	t.interrupt();
	t.join();
	return 0;
}
*/

/*
#include <boost/thread.hpp>
#include <iostream>

int main()
{
	//std::cout << boost::this_thread::get_id()<<std::endl;
	//std::cout << boost::thread::hardware_concurrency()<<std::endl;

	std::cout << "In main thread\n";
	std::cout << "Making sleep to main thread\n";
	boost::this_thread::sleep(boost::posix_time::seconds(3));
	std::cout << "Main thread wake up after sleep and again he is going to sleep\n";
	boost::this_thread::sleep(boost::posix_time::seconds(2));
	std::cout << "The thread is finally woke up after 2nd nap and is finally exiting\n";
	return EXIT_SUCCESS;

	return EXIT_SUCCESS;
}
*/


#include <boost/thread.hpp>
#include <iostream>
#include <boost/proto/repeat.hpp>
#include <asm/socket.h>
#include <boost/shared_ptr.hpp>
#include <pthread.h>

void wait(int seconds)
{
	boost::this_thread::sleep(boost::posix_time::seconds(seconds));
}

//boost::mutex mutex;

void thread()
{
	for(int i =0;i<5;i++)
	{
		wait(1);
		//mutex.lock();
		std::cout<<"Thread = " <<boost::this_thread::get_id()<<" : " <<i<<std::endl;
		//mutex.unlock();
	}

}


int main()
{
	boost::thread t1(thread);
	boost::thread t2(thread);
	std::cout << "Main Thread id  = " << boost::this_thread::get_id() << std::endl;
	t1.join();
	t2.join();
	pthread_t thread1;
	//int rc = pthread_create(&thread1,NULL,thread,void*);
	pthread_mutex_t amutex;
	pthread_mutexattr_t a2mutex;
	//amutex.;
	boost::shared_ptr<int> iptr = new int(50);
	std::cout << iptr;

	return 0;
}
