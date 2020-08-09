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


#include "SWGSigMFFileInputReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSigMFFileInputReport::SWGSigMFFileInputReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSigMFFileInputReport::SWGSigMFFileInputReport() {
    sample_size = 0;
    m_sample_size_isSet = false;
    sample_bytes = 0;
    m_sample_bytes_isSet = false;
    sample_format = 0;
    m_sample_format_isSet = false;
    sample_signed = 0;
    m_sample_signed_isSet = false;
    sample_swap_iq = 0;
    m_sample_swap_iq_isSet = false;
    crc_status = 0;
    m_crc_status_isSet = false;
    total_bytes_status = 0;
    m_total_bytes_status_isSet = false;
    captures = nullptr;
    m_captures_isSet = false;
    track_number = 0;
    m_track_number_isSet = false;
    absolute_time_ms = 0L;
    m_absolute_time_ms_isSet = false;
    elapsed_record_time_ms = 0L;
    m_elapsed_record_time_ms_isSet = false;
    record_samples_ratio = 0.0f;
    m_record_samples_ratio_isSet = false;
    elapsed_trackime_ms = 0L;
    m_elapsed_trackime_ms_isSet = false;
    track_samples_ratio = 0.0f;
    m_track_samples_ratio_isSet = false;
    record_duration_ms = 0L;
    m_record_duration_ms_isSet = false;
}

SWGSigMFFileInputReport::~SWGSigMFFileInputReport() {
    this->cleanup();
}

void
SWGSigMFFileInputReport::init() {
    sample_size = 0;
    m_sample_size_isSet = false;
    sample_bytes = 0;
    m_sample_bytes_isSet = false;
    sample_format = 0;
    m_sample_format_isSet = false;
    sample_signed = 0;
    m_sample_signed_isSet = false;
    sample_swap_iq = 0;
    m_sample_swap_iq_isSet = false;
    crc_status = 0;
    m_crc_status_isSet = false;
    total_bytes_status = 0;
    m_total_bytes_status_isSet = false;
    captures = new QList<SWGCapture*>();
    m_captures_isSet = false;
    track_number = 0;
    m_track_number_isSet = false;
    absolute_time_ms = 0L;
    m_absolute_time_ms_isSet = false;
    elapsed_record_time_ms = 0L;
    m_elapsed_record_time_ms_isSet = false;
    record_samples_ratio = 0.0f;
    m_record_samples_ratio_isSet = false;
    elapsed_trackime_ms = 0L;
    m_elapsed_trackime_ms_isSet = false;
    track_samples_ratio = 0.0f;
    m_track_samples_ratio_isSet = false;
    record_duration_ms = 0L;
    m_record_duration_ms_isSet = false;
}

void
SWGSigMFFileInputReport::cleanup() {







    if(captures != nullptr) { 
        auto arr = captures;
        for(auto o: *arr) { 
            delete o;
        }
        delete captures;
    }







}

SWGSigMFFileInputReport*
SWGSigMFFileInputReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSigMFFileInputReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&sample_size, pJson["sampleSize"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_bytes, pJson["sampleBytes"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_format, pJson["sampleFormat"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_signed, pJson["sampleSigned"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sample_swap_iq, pJson["sampleSwapIQ"], "qint32", "");
    
    ::SWGSDRangel::setValue(&crc_status, pJson["crcStatus"], "qint32", "");
    
    ::SWGSDRangel::setValue(&total_bytes_status, pJson["totalBytesStatus"], "qint32", "");
    
    
    ::SWGSDRangel::setValue(&captures, pJson["captures"], "QList", "SWGCapture");
    ::SWGSDRangel::setValue(&track_number, pJson["trackNumber"], "qint32", "");
    
    ::SWGSDRangel::setValue(&absolute_time_ms, pJson["absoluteTimeMs"], "qint64", "");
    
    ::SWGSDRangel::setValue(&elapsed_record_time_ms, pJson["elapsedRecordTimeMs"], "qint64", "");
    
    ::SWGSDRangel::setValue(&record_samples_ratio, pJson["recordSamplesRatio"], "float", "");
    
    ::SWGSDRangel::setValue(&elapsed_trackime_ms, pJson["elapsedTrackimeMs"], "qint64", "");
    
    ::SWGSDRangel::setValue(&track_samples_ratio, pJson["trackSamplesRatio"], "float", "");
    
    ::SWGSDRangel::setValue(&record_duration_ms, pJson["recordDurationMs"], "qint64", "");
    
}

QString
SWGSigMFFileInputReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSigMFFileInputReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_sample_size_isSet){
        obj->insert("sampleSize", QJsonValue(sample_size));
    }
    if(m_sample_bytes_isSet){
        obj->insert("sampleBytes", QJsonValue(sample_bytes));
    }
    if(m_sample_format_isSet){
        obj->insert("sampleFormat", QJsonValue(sample_format));
    }
    if(m_sample_signed_isSet){
        obj->insert("sampleSigned", QJsonValue(sample_signed));
    }
    if(m_sample_swap_iq_isSet){
        obj->insert("sampleSwapIQ", QJsonValue(sample_swap_iq));
    }
    if(m_crc_status_isSet){
        obj->insert("crcStatus", QJsonValue(crc_status));
    }
    if(m_total_bytes_status_isSet){
        obj->insert("totalBytesStatus", QJsonValue(total_bytes_status));
    }
    if(captures && captures->size() > 0){
        toJsonArray((QList<void*>*)captures, obj, "captures", "SWGCapture");
    }
    if(m_track_number_isSet){
        obj->insert("trackNumber", QJsonValue(track_number));
    }
    if(m_absolute_time_ms_isSet){
        obj->insert("absoluteTimeMs", QJsonValue(absolute_time_ms));
    }
    if(m_elapsed_record_time_ms_isSet){
        obj->insert("elapsedRecordTimeMs", QJsonValue(elapsed_record_time_ms));
    }
    if(m_record_samples_ratio_isSet){
        obj->insert("recordSamplesRatio", QJsonValue(record_samples_ratio));
    }
    if(m_elapsed_trackime_ms_isSet){
        obj->insert("elapsedTrackimeMs", QJsonValue(elapsed_trackime_ms));
    }
    if(m_track_samples_ratio_isSet){
        obj->insert("trackSamplesRatio", QJsonValue(track_samples_ratio));
    }
    if(m_record_duration_ms_isSet){
        obj->insert("recordDurationMs", QJsonValue(record_duration_ms));
    }

    return obj;
}

qint32
SWGSigMFFileInputReport::getSampleSize() {
    return sample_size;
}
void
SWGSigMFFileInputReport::setSampleSize(qint32 sample_size) {
    this->sample_size = sample_size;
    this->m_sample_size_isSet = true;
}

qint32
SWGSigMFFileInputReport::getSampleBytes() {
    return sample_bytes;
}
void
SWGSigMFFileInputReport::setSampleBytes(qint32 sample_bytes) {
    this->sample_bytes = sample_bytes;
    this->m_sample_bytes_isSet = true;
}

qint32
SWGSigMFFileInputReport::getSampleFormat() {
    return sample_format;
}
void
SWGSigMFFileInputReport::setSampleFormat(qint32 sample_format) {
    this->sample_format = sample_format;
    this->m_sample_format_isSet = true;
}

qint32
SWGSigMFFileInputReport::getSampleSigned() {
    return sample_signed;
}
void
SWGSigMFFileInputReport::setSampleSigned(qint32 sample_signed) {
    this->sample_signed = sample_signed;
    this->m_sample_signed_isSet = true;
}

qint32
SWGSigMFFileInputReport::getSampleSwapIq() {
    return sample_swap_iq;
}
void
SWGSigMFFileInputReport::setSampleSwapIq(qint32 sample_swap_iq) {
    this->sample_swap_iq = sample_swap_iq;
    this->m_sample_swap_iq_isSet = true;
}

qint32
SWGSigMFFileInputReport::getCrcStatus() {
    return crc_status;
}
void
SWGSigMFFileInputReport::setCrcStatus(qint32 crc_status) {
    this->crc_status = crc_status;
    this->m_crc_status_isSet = true;
}

qint32
SWGSigMFFileInputReport::getTotalBytesStatus() {
    return total_bytes_status;
}
void
SWGSigMFFileInputReport::setTotalBytesStatus(qint32 total_bytes_status) {
    this->total_bytes_status = total_bytes_status;
    this->m_total_bytes_status_isSet = true;
}

QList<SWGCapture*>*
SWGSigMFFileInputReport::getCaptures() {
    return captures;
}
void
SWGSigMFFileInputReport::setCaptures(QList<SWGCapture*>* captures) {
    this->captures = captures;
    this->m_captures_isSet = true;
}

qint32
SWGSigMFFileInputReport::getTrackNumber() {
    return track_number;
}
void
SWGSigMFFileInputReport::setTrackNumber(qint32 track_number) {
    this->track_number = track_number;
    this->m_track_number_isSet = true;
}

qint64
SWGSigMFFileInputReport::getAbsoluteTimeMs() {
    return absolute_time_ms;
}
void
SWGSigMFFileInputReport::setAbsoluteTimeMs(qint64 absolute_time_ms) {
    this->absolute_time_ms = absolute_time_ms;
    this->m_absolute_time_ms_isSet = true;
}

qint64
SWGSigMFFileInputReport::getElapsedRecordTimeMs() {
    return elapsed_record_time_ms;
}
void
SWGSigMFFileInputReport::setElapsedRecordTimeMs(qint64 elapsed_record_time_ms) {
    this->elapsed_record_time_ms = elapsed_record_time_ms;
    this->m_elapsed_record_time_ms_isSet = true;
}

float
SWGSigMFFileInputReport::getRecordSamplesRatio() {
    return record_samples_ratio;
}
void
SWGSigMFFileInputReport::setRecordSamplesRatio(float record_samples_ratio) {
    this->record_samples_ratio = record_samples_ratio;
    this->m_record_samples_ratio_isSet = true;
}

qint64
SWGSigMFFileInputReport::getElapsedTrackimeMs() {
    return elapsed_trackime_ms;
}
void
SWGSigMFFileInputReport::setElapsedTrackimeMs(qint64 elapsed_trackime_ms) {
    this->elapsed_trackime_ms = elapsed_trackime_ms;
    this->m_elapsed_trackime_ms_isSet = true;
}

float
SWGSigMFFileInputReport::getTrackSamplesRatio() {
    return track_samples_ratio;
}
void
SWGSigMFFileInputReport::setTrackSamplesRatio(float track_samples_ratio) {
    this->track_samples_ratio = track_samples_ratio;
    this->m_track_samples_ratio_isSet = true;
}

qint64
SWGSigMFFileInputReport::getRecordDurationMs() {
    return record_duration_ms;
}
void
SWGSigMFFileInputReport::setRecordDurationMs(qint64 record_duration_ms) {
    this->record_duration_ms = record_duration_ms;
    this->m_record_duration_ms_isSet = true;
}


bool
SWGSigMFFileInputReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_sample_size_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sample_bytes_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sample_format_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sample_signed_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sample_swap_iq_isSet){
            isObjectUpdated = true; break;
        }
        if(m_crc_status_isSet){
            isObjectUpdated = true; break;
        }
        if(m_total_bytes_status_isSet){
            isObjectUpdated = true; break;
        }
        if(captures && (captures->size() > 0)){
            isObjectUpdated = true; break;
        }
        if(m_track_number_isSet){
            isObjectUpdated = true; break;
        }
        if(m_absolute_time_ms_isSet){
            isObjectUpdated = true; break;
        }
        if(m_elapsed_record_time_ms_isSet){
            isObjectUpdated = true; break;
        }
        if(m_record_samples_ratio_isSet){
            isObjectUpdated = true; break;
        }
        if(m_elapsed_trackime_ms_isSet){
            isObjectUpdated = true; break;
        }
        if(m_track_samples_ratio_isSet){
            isObjectUpdated = true; break;
        }
        if(m_record_duration_ms_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

