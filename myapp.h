#ifndef MYAPP_H
#define MYAPP_H

#include<QObject>
#include <QCryptographicHash>
class Myapp
{
public:
    Myapp();
    static QString CurrentUserName;         //当前用户名
    static QString CurrentUserHashPwd;          //当前用户哈希密文密码
    static QString CurrentUserType;         //当前用户类型(管理员、客户)
    static QString hashPassword(QString password) ;
};

#endif // MYAPP_H
