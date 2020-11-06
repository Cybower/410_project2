/*
 * tester.cpp
 *
 * Created on: Nov 5, 2020
 * 		Author Adam Stillabower
 */
#include <mutex>
#include <string>
#include <thread>
#include <atomic>
#include "../tester.h"

using namespace std;

/*
 * starts cancelable threads (this means that each thread periodicaly checks to see if it should stop)
 * string s			-the string to print
 * numThreads 		-the number of threads to start
 * wp 				-which print statement should be used
 * numTimesToPrint 	-the number of PRINT statements each thread will call
 * millisecond_delay- how long (in milliseconds) to wait between prints
 */
void startThreads(std::string s, int numThreads, WHICH_PRINT wp, int numTimesToPrint, int millisecond_delay) {

}


/*
 * if bCanceled== true then causes all running threads to print USER_CHOSE_TO_CANCEL and then exit
 * if false then just reset logic used to cancel threads.  The body of this function should contain 1 line
 * of code.
 */
void setCancelThreads(bool bCancel) {

}

/*
 * waits for all threads to complete.  If you store references to your threads in a vector
 * remeber to clear that vector after joining its threads.  Otherwise if you call this
 * function twice your application will crash.
 */
void joinThreads() {


}