
class thunderborg {
private:
  uint8_t boardAddress;
public:
  thunderborg(uint8_t addr, uint8_t SDApin, uint8_t SCLpin);

  void setDutyCycle(uint8_t dutyCycle);
  void forwards();
  void backwards();
  
  float readBatteryVoltage();
  void setLED(uint8_t R, uint8_t G, uint8_t B);
};




class wormDrive {
  
};