// LightController.h

#ifndef LIGHTCONTROLLER_H
#define LIGHTCONTROLLER_H

#include <iostream>

class LightController {
public:
    LightController() : brightness(100), isOn(false) {}

    // دالة لتشغيل المصباح
    void turnOn() {
        isOn = true;
        std::cout << "المصباح تم تشغيله" << std::endl;
    }

    // دالة لإيقاف المصباح
    void turnOff() {
        isOn = false;
        std::cout << "المصباح تم إيقافه" << std::endl;
    }

    // دالة لضبط درجة سطوع المصباح
    void setBrightness(int level) {
        if (level >= 0 && level <= 100) {
            brightness = level;
            std::cout << "درجة سطوع المصباح: " << brightness << "%" << std::endl;
        } else {
            std::cout << "الرجاء إدخال مستوى سطوع صحيح بين 0 و 100" << std::endl;
        }
    }

    // دالة للتبديل بين تشغيل وإيقاف المصباح
    void toggle() {
        if (isOn) {
            turnOff();
        } else {
            turnOn();
        }
    }

private:
    int brightness; // مستوى سطوع المصباح
    bool isOn; // حالة للمصباح (تشغيل/إيقاف)
};

#endif // LIGHTCONTROLLER_H
