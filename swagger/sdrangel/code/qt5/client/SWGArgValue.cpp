/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.9.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGArgValue.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGArgValue::SWGArgValue(QString* json) {
    init();
    this->fromJson(*json);
}

SWGArgValue::SWGArgValue() {
    key = nullptr;
    m_key_isSet = false;
    value_type = nullptr;
    m_value_type_isSet = false;
    value_string = nullptr;
    m_value_string_isSet = false;
}

SWGArgValue::~SWGArgValue() {
    this->cleanup();
}

void
SWGArgValue::init() {
    key = new QString("");
    m_key_isSet = false;
    value_type = new QString("");
    m_value_type_isSet = false;
    value_string = new QString("");
    m_value_string_isSet = false;
}

void
SWGArgValue::cleanup() {
    if(key != nullptr) { 
        delete key;
    }
    if(value_type != nullptr) { 
        delete value_type;
    }
    if(value_string != nullptr) { 
        delete value_string;
    }
}

SWGArgValue*
SWGArgValue::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGArgValue::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&key, pJson["key"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&value_type, pJson["valueType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&value_string, pJson["valueString"], "QString", "QString");
    
}

QString
SWGArgValue::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGArgValue::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(key != nullptr && *key != QString("")){
        toJsonValue(QString("key"), key, obj, QString("QString"));
    }
    if(value_type != nullptr && *value_type != QString("")){
        toJsonValue(QString("valueType"), value_type, obj, QString("QString"));
    }
    if(value_string != nullptr && *value_string != QString("")){
        toJsonValue(QString("valueString"), value_string, obj, QString("QString"));
    }

    return obj;
}

QString*
SWGArgValue::getKey() {
    return key;
}
void
SWGArgValue::setKey(QString* key) {
    this->key = key;
    this->m_key_isSet = true;
}

QString*
SWGArgValue::getValueType() {
    return value_type;
}
void
SWGArgValue::setValueType(QString* value_type) {
    this->value_type = value_type;
    this->m_value_type_isSet = true;
}

QString*
SWGArgValue::getValueString() {
    return value_string;
}
void
SWGArgValue::setValueString(QString* value_string) {
    this->value_string = value_string;
    this->m_value_string_isSet = true;
}


bool
SWGArgValue::isSet(){
    bool isObjectUpdated = false;
    do{
        if(key && *key != QString("")){
            isObjectUpdated = true; break;
        }
        if(value_type && *value_type != QString("")){
            isObjectUpdated = true; break;
        }
        if(value_string && *value_string != QString("")){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

