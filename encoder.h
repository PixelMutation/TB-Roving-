
class absoluteEncoder {
    private:
    uint8_t bits; // how many bits there are in a reading
    uint16_t previousAngle;
    uint16_t previousSpeed;
    uint32_t previousTime;
    public:
    absoluteEncoder();

    virtual uint16_t readRaw(); // returns the raw value from the encoder
    uint16_t angle(); // raw angle shifted to 16 bits so all the same regarless of sensor model
    uint16_t angleChange(); // change in angle since last call
    uint16_t Speed(); // speed using change in angle and time
    uint16_t speedChange(); // change in speed since last call
    uint16_t accel(); // acceleration from change in speed and time
};

class AS5048a_SPI : encoder {
private:
    uint8_t numEncoders;
    std::vector<uint16_t> rawValues;
    AS5048a_SPI();

    void readAll();
    uint16_t readEncoders
};