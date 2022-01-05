#ifndef _NVC_DATA_CONTROLLER

#define _NVC_CONTROLLER

#include "main.h"
#include "nvc/api.h"

namespace nvc {
  template<class T, class U = T>
  class Controller {
  private:
    // Behavioral variables
    T target;
    bool settled;
    bool stopOnSettle;
    // Computational variables
    T current;
    int dt;
    PIDGains gains;
    SettleThresholds thresholds;
    // Strictly private
    bool LOOP_SWITCH;
  public:
    // Controller functions
    virtual T error() {
      return target - current;
    }
    virtual double scalarError() {
      return 0;
    }
    virtual void input() = 0;
    virtual void output(U) = 0;
    // Thread control functions
    void start();
    void stop();
    // Accessor functions
    T getTarget();
    void setTarget(T);
    bool getSettled();
    bool getStopOnSettle();
    void setStopOnSettle(bool);
    //
    T getCurrent();
    int getDt();
    void setDt(int);
    PIDGains getGains();
    void setGains(PIDGains);
    SettleThresholds getThresholds();
    void setThresholds();
  };
}

#endif // _NVC_CONTROLLER
