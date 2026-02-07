// نظام المصادقة كلمة المرور
// يحتوي هذا الملف على أساليب المصادقة والتحقق من كلمة المرور

#include <string>

class Authentication {
public:
    // الدالة لتحقق من صحة كلمة المرور
    static bool verifyPassword(const std::string& userInput, const std::string& storedPassword) {
        return userInput == storedPassword;
    }

    // الدالة لتغيير كلمة المرور
    static bool changePassword(std::string& storedPassword, const std::string& newPassword) {
        // يجب أن تحتوي كلمة المرور الجديدة على 8 أحرف على الأقل
        if (newPassword.length() < 8) {
            return false; // فشل في تغيير كلمة المرور
        }
        storedPassword = newPassword; // تغيير كلمة المرور بنجاح
        return true;
    }
};

