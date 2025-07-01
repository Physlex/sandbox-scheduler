/**
 * @file scheduler.hpp
 * @brief This file defines the `Scheduler` class.
 * 
 *        TODO: DOCS
 */

#include <stdint.h>


/** @struct Cooperative
 *  @brief Cooperative type specifier for Scheduler class.
 */
struct Cooperative {};


/** @struct Preemptive
 *  @brief Preemptive type specifier for Scheduler class.
 */
struct Preemptive  {};


template<class SchedulerT>
class Scheduler
{
  public:
    //! @brief Default constructor
    Scheduler();
};
