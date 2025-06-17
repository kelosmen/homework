#include "myapp.h"

Myapp::Myapp() {}
QString Myapp::CurrentUserName = "";
QString Myapp::CurrentUserHashPwd = "";
QString Myapp::CurrentUserType = "";
QString Myapp::hashPassword(QString password) {
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return QString(hash.toHex());
}
