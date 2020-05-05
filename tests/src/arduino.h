#ifndef ARDUINO_H_
#define ARDUINO_H_

#include <WString.h>
#include <DebugIface.h>
#include <hw.h>
#include <math.h>

#include <catch.hpp>
#include <catch2/trompeloeil.hpp>

#define PLOOP_MODEL DS_01
#define PPATIENT_MODEL DS_01
#define PVENTURI DS_01

class MockHW : public HW {
 public:
  MAKE_MOCK0(Init, bool(), override);
  MAKE_MOCK4(I2CWrite, bool(t_i2cdevices, unsigned char*, int, bool), override);
  MAKE_MOCK6(I2CRead,
             bool(t_i2cdevices, unsigned char*, int, unsigned char*, int, bool),
             override);
  MAKE_MOCK4(I2CRead, bool(t_i2cdevices, unsigned char*, int, bool), override);
  MAKE_MOCK2(PWMSet, bool(hw_pwm, float), override);
  MAKE_MOCK2(IOSet, bool(hw_gpio, bool), override);
  MAKE_MOCK2(IOGet, bool(hw_gpio, bool*), override);
  MAKE_MOCK1(__delay_blocking_ms, void(uint32_t), override);
  MAKE_MOCK1(PrintDebugConsole, void(String), override);
  MAKE_MOCK1(PrintLineDebugConsole, void(String), override);
  MAKE_MOCK0(Tick, void(), override);
  MAKE_MOCK0(GetMillis, uint64_t(), override);
  MAKE_MOCK1(Get_dT_millis, int64_t(uint64_t), override);
  MAKE_MOCK0(DataAvailableOnUART0, bool(), override);
  MAKE_MOCK0(ReadUART0UntilEOL, String(), override);
  MAKE_MOCK1(WriteUART0, bool(String), override);
  MAKE_MOCK2(GetPowerStatus, void(bool*, float*), override);
  MAKE_MOCK0(GetPIN, float(), override);
  MAKE_MOCK0(GetBoardTemperature, float(), override);
  MAKE_MOCK0(GetSupervisorAlarms, uint16_t(), override);
};

class ArduinoMock {
 public:
  MAKE_MOCK0(millis, int64_t());
  MAKE_MOCK1(delay, void(uint32_t));
};

extern ArduinoMock arduino_mock;

extern "C" {
int64_t millis();
void delay(uint32_t ms);
}

#endif  // ARDUINO_H_
