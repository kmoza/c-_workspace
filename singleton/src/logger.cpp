#include <stddef.h>  // defines NULL
#include "logger.h"

// Global static pointer used to ensure a single instance of the class.
Logger Logger::m_pInstance;

/** This function is called to create an instance of the class.
    Calling the constructor publicly is not allowed. The constructor
    is private and is only called by this Instance function.
*/

Logger Logger::Instance()
{
   if (!m_pInstance)   // Only allow one instance of class to be generated.
   {
      m_pInstance = new Logger;
      cout<<"Singleton Created\n";
   }

   return m_pInstance;
}
