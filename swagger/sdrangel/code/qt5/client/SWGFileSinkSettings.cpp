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


#include "SWGFileSinkSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGFileSinkSettings::SWGFileSinkSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGFileSinkSettings::SWGFileSinkSettings() {
    input_frequency_offset = 0;
    m_input_frequency_offset_isSet = false;
    file_record_name = nullptr;
    m_file_record_name_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    spectrum_squelch_mode = 0;
    m_spectrum_squelch_mode_isSet = false;
    spectrum_squelch = 0.0f;
    m_spectrum_squelch_isSet = false;
    pre_record_time = 0;
    m_pre_record_time_isSet = false;
    squelch_post_record_time = 0;
    m_squelch_post_record_time_isSet = false;
    squelch_recording_enable = 0;
    m_squelch_recording_enable_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

SWGFileSinkSettings::~SWGFileSinkSettings() {
    this->cleanup();
}

void
SWGFileSinkSettings::init() {
    input_frequency_offset = 0;
    m_input_frequency_offset_isSet = false;
    file_record_name = new QString("");
    m_file_record_name_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    spectrum_squelch_mode = 0;
    m_spectrum_squelch_mode_isSet = false;
    spectrum_squelch = 0.0f;
    m_spectrum_squelch_isSet = false;
    pre_record_time = 0;
    m_pre_record_time_isSet = false;
    squelch_post_record_time = 0;
    m_squelch_post_record_time_isSet = false;
    squelch_recording_enable = 0;
    m_squelch_recording_enable_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
}

void
SWGFileSinkSettings::cleanup() {

    if(file_record_name != nullptr) { 
        delete file_record_name;
    }

    if(title != nullptr) { 
        delete title;
    }








    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



}

SWGFileSinkSettings*
SWGFileSinkSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGFileSinkSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint32", "");
    
    ::SWGSDRangel::setValue(&file_record_name, pJson["fileRecordName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&spectrum_squelch_mode, pJson["spectrumSquelchMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&spectrum_squelch, pJson["spectrumSquelch"], "float", "");
    
    ::SWGSDRangel::setValue(&pre_record_time, pJson["preRecordTime"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch_post_record_time, pJson["squelchPostRecordTime"], "qint32", "");
    
    ::SWGSDRangel::setValue(&squelch_recording_enable, pJson["squelchRecordingEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
}

QString
SWGFileSinkSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGFileSinkSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(file_record_name != nullptr && *file_record_name != QString("")){
        toJsonValue(QString("fileRecordName"), file_record_name, obj, QString("QString"));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_spectrum_squelch_mode_isSet){
        obj->insert("spectrumSquelchMode", QJsonValue(spectrum_squelch_mode));
    }
    if(m_spectrum_squelch_isSet){
        obj->insert("spectrumSquelch", QJsonValue(spectrum_squelch));
    }
    if(m_pre_record_time_isSet){
        obj->insert("preRecordTime", QJsonValue(pre_record_time));
    }
    if(m_squelch_post_record_time_isSet){
        obj->insert("squelchPostRecordTime", QJsonValue(squelch_post_record_time));
    }
    if(m_squelch_recording_enable_isSet){
        obj->insert("squelchRecordingEnable", QJsonValue(squelch_recording_enable));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }

    return obj;
}

qint32
SWGFileSinkSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGFileSinkSettings::setInputFrequencyOffset(qint32 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

QString*
SWGFileSinkSettings::getFileRecordName() {
    return file_record_name;
}
void
SWGFileSinkSettings::setFileRecordName(QString* file_record_name) {
    this->file_record_name = file_record_name;
    this->m_file_record_name_isSet = true;
}

qint32
SWGFileSinkSettings::getRgbColor() {
    return rgb_color;
}
void
SWGFileSinkSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGFileSinkSettings::getTitle() {
    return title;
}
void
SWGFileSinkSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGFileSinkSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGFileSinkSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGFileSinkSettings::getSpectrumSquelchMode() {
    return spectrum_squelch_mode;
}
void
SWGFileSinkSettings::setSpectrumSquelchMode(qint32 spectrum_squelch_mode) {
    this->spectrum_squelch_mode = spectrum_squelch_mode;
    this->m_spectrum_squelch_mode_isSet = true;
}

float
SWGFileSinkSettings::getSpectrumSquelch() {
    return spectrum_squelch;
}
void
SWGFileSinkSettings::setSpectrumSquelch(float spectrum_squelch) {
    this->spectrum_squelch = spectrum_squelch;
    this->m_spectrum_squelch_isSet = true;
}

qint32
SWGFileSinkSettings::getPreRecordTime() {
    return pre_record_time;
}
void
SWGFileSinkSettings::setPreRecordTime(qint32 pre_record_time) {
    this->pre_record_time = pre_record_time;
    this->m_pre_record_time_isSet = true;
}

qint32
SWGFileSinkSettings::getSquelchPostRecordTime() {
    return squelch_post_record_time;
}
void
SWGFileSinkSettings::setSquelchPostRecordTime(qint32 squelch_post_record_time) {
    this->squelch_post_record_time = squelch_post_record_time;
    this->m_squelch_post_record_time_isSet = true;
}

qint32
SWGFileSinkSettings::getSquelchRecordingEnable() {
    return squelch_recording_enable;
}
void
SWGFileSinkSettings::setSquelchRecordingEnable(qint32 squelch_recording_enable) {
    this->squelch_recording_enable = squelch_recording_enable;
    this->m_squelch_recording_enable_isSet = true;
}

qint32
SWGFileSinkSettings::getStreamIndex() {
    return stream_index;
}
void
SWGFileSinkSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGFileSinkSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGFileSinkSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGFileSinkSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGFileSinkSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGFileSinkSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGFileSinkSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGFileSinkSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGFileSinkSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGFileSinkSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGFileSinkSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}


bool
SWGFileSinkSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(file_record_name && *file_record_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_log2_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_spectrum_squelch_mode_isSet){
            isObjectUpdated = true; break;
        }
        if(m_spectrum_squelch_isSet){
            isObjectUpdated = true; break;
        }
        if(m_pre_record_time_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_post_record_time_isSet){
            isObjectUpdated = true; break;
        }
        if(m_squelch_recording_enable_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

