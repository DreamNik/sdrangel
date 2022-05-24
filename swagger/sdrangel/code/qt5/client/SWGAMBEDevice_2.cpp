/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGAMBEDevice_2.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAMBEDevice_2::SWGAMBEDevice_2(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAMBEDevice_2::SWGAMBEDevice_2() {
    device_ref = nullptr;
    m_device_ref_isSet = false;
    _delete = 0;
    m__delete_isSet = false;
}

SWGAMBEDevice_2::~SWGAMBEDevice_2() {
    this->cleanup();
}

void
SWGAMBEDevice_2::init() {
    device_ref = new QString("");
    m_device_ref_isSet = false;
    _delete = 0;
    m__delete_isSet = false;
}

void
SWGAMBEDevice_2::cleanup() {
    if(device_ref != nullptr) { 
        delete device_ref;
    }

}

SWGAMBEDevice_2*
SWGAMBEDevice_2::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAMBEDevice_2::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_ref, pJson["deviceRef"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&_delete, pJson["delete"], "qint32", "");
    
}

QString
SWGAMBEDevice_2::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAMBEDevice_2::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(device_ref != nullptr && *device_ref != QString("")){
        toJsonValue(QString("deviceRef"), device_ref, obj, QString("QString"));
    }
    if(m__delete_isSet){
        obj->insert("delete", QJsonValue(_delete));
    }

    return obj;
}

QString*
SWGAMBEDevice_2::getDeviceRef() {
    return device_ref;
}
void
SWGAMBEDevice_2::setDeviceRef(QString* device_ref) {
    this->device_ref = device_ref;
    this->m_device_ref_isSet = true;
}

qint32
SWGAMBEDevice_2::getDelete() {
    return _delete;
}
void
SWGAMBEDevice_2::setDelete(qint32 _delete) {
    this->_delete = _delete;
    this->m__delete_isSet = true;
}


bool
SWGAMBEDevice_2::isSet(){
    bool isObjectUpdated = false;
    do{
        if(device_ref && *device_ref != QString("")){
            isObjectUpdated = true; break;
        }
        if(m__delete_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

