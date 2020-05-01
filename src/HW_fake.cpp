/*
 * This is needed only because HAL ha virtual non pure methods
 *
 * DO NOT IMPLEMENT THIS, USE HW4 instead
 *
 *      Author: AngeloGargantini
 */

#include "hw.h"

bool HW::Init() {
}
bool HW::I2CWrite(t_i2cdevices device, uint8_t *wbuffer, int wlength, bool stop) {
//	throw std::runtime_error("not implemented!");
}
bool HW::I2CRead(t_i2cdevices device, uint8_t *wbuffer, int wlength,
		uint8_t *rbuffer, int rlength, bool stop) {
//	throw std::runtime_error("not implemented!");
}
bool HW::I2CRead(t_i2cdevices device, uint8_t *rbuffer, int rlength,
		bool stop) {
}
bool HW::PWMSet(hw_pwm id, float value) {
}
bool HW::IOSet(hw_gpio id, bool value) {
}
bool HW::IOGet(hw_gpio id, bool *value) {
}
void HW::__delay_blocking_ms(uint32_t ms) {
}
void HW::PrintDebugConsole(String s) {
	throw std::runtime_error("HW::PrintDebugConsole not implemented!");
}
void HW::PrintLineDebugConsole(String s) {
	throw std::runtime_error("HW::PrintLineDebugConsole not implemented!");
}
void HW::Tick() {
//	throw std::runtime_error("not implemented!");
}
uint64_t HW::GetMillis() {
}
int64_t HW::Get_dT_millis(uint64_t ms) {
}
bool HW::DataAvailableOnUART0() {
}
String HW::ReadUART0UntilEOL() {
}
bool HW::WriteUART0(String s) {
}
void HW::GetPowerStatus(bool *batteryPowered, float *charge) {
}
float HW::GetPIN() {
}
float HW::GetBoardTemperature() {
}
uint16_t HW::GetSupervisorAlarms() {
}

