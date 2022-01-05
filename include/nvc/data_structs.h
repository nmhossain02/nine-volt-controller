#ifndef _NVC_DATA_STRUCTS
#define __NVC_DATA_STRUCTS

namespace nvc {
  struct PIDGains {
    double kP = 0.5;
    double kI = 0;
    double kD = 0;
    double bias = 0;
  };
  struct SettleThresholds {
    double position = 2;
    double velocity = 0;
    int pTime = 0;
    bool pTimeout = false;
    int vTime = 0;
    bool vTimeout = false;
  };
}

#endif
