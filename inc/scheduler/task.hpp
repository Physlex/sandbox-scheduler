/**
 * @file task.hpp
 * @brief TODO: DOCS
 */

#ifndef SCHEDULER_TASK_HPP_
#define SCHEDULER_TASK_HPP_


/*** CLASSES ****************************************************************************/

/** @class Task
 *  @brief TODO: DOCS
 */
class Task
{
  public:
    //! @brief Default constructor.
    Task() = default;
};


/** @class IOTask
 *  @brief TODO: DOCS
 */
class IOTask : public Task
{
};


/** @class PeriodicTask
 *  @brief TODO: DOCS
 */
class PeriodicTask : public Task
{
};


#endif  // SCHEDULER_TASK_HPP_
