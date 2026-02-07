// إدارة البلوتوث في التطبيق الذكي
// هذه الفئة تتعامل مع جميع وظائف البلوتوث

#ifndef BLUETOOTH_MANAGER_H
#define BLUETOOTH_MANAGER_H

#include <BluetoothSerial.h> // تضمين مكتبة البلوتوث

class BluetoothManager {
private:
    BluetoothSerial SerialBT; // كائن للتواصل عبر البلوتوث

public:
    // الدالة لإنشاء اتصال بلوتوث
    void begin() {
        SerialBT.begin("SmartHomeDevice"); // بدء الاتصال كجهاز "SmartHomeDevice"
        Serial.println("Bluetooth device is ready to pair.");
    }

    // الدالة لإرسال البيانات عبر البلوتوث
    void sendData(String data) {
        SerialBT.println(data); // إرسال البيانات كرسالة نصية
    }

    // الدالة للتحقق من وجود بيانات مستقبلة عبر البلوتوث
    void checkForData() {
        if (SerialBT.available()) {
            String receivedData = SerialBT.readString(); // قراءة البيانات المستلمة
            Serial.println(receivedData); // طباعة البيانات المستلمة على الشاشة التسلسلية
        }
    }
};

#endif // BLUETOOTH_MANAGER_H