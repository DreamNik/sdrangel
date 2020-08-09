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


#include "SWGPerseusSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPerseusSettings::SWGPerseusSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPerseusSettings::SWGPerseusSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate_index = 0;
    m_dev_sample_rate_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    adc_dither = 0;
    m_adc_dither_isSet = false;
    adc_preamp = 0;
    m_adc_preamp_isSet = false;
    wide_band = 0;
    m_wide_band_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    iq_order = 0;
    m_iq_order_isSet = false;
    attenuator = 0;
    m_attenuator_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGPerseusSettings::~SWGPerseusSettings() {
    this->cleanup();
}

void
SWGPerseusSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    dev_sample_rate_index = 0;
    m_dev_sample_rate_index_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    adc_dither = 0;
    m_adc_dither_isSet = false;
    adc_preamp = 0;
    m_adc_preamp_isSet = false;
    wide_band = 0;
    m_wide_band_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    iq_order = 0;
    m_iq_order_isSet = false;
    attenuator = 0;
    m_attenuator_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGPerseusSettings::cleanup() {












    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGPerseusSettings*
SWGPerseusSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPerseusSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate_index, pJson["devSampleRateIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&adc_dither, pJson["adcDither"], "qint32", "");
    
    ::SWGSDRangel::setValue(&adc_preamp, pJson["adcPreamp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&wide_band, pJson["wideBand"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&iq_order, pJson["iqOrder"], "qint32", "");
    
    ::SWGSDRangel::setValue(&attenuator, pJson["attenuator"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGPerseusSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPerseusSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_dev_sample_rate_index_isSet){
        obj->insert("devSampleRateIndex", QJsonValue(dev_sample_rate_index));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_adc_dither_isSet){
        obj->insert("adcDither", QJsonValue(adc_dither));
    }
    if(m_adc_preamp_isSet){
        obj->insert("adcPreamp", QJsonValue(adc_preamp));
    }
    if(m_wide_band_isSet){
        obj->insert("wideBand", QJsonValue(wide_band));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(m_iq_order_isSet){
        obj->insert("iqOrder", QJsonValue(iq_order));
    }
    if(m_attenuator_isSet){
        obj->insert("attenuator", QJsonValue(attenuator));
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

    return obj;
}

qint64
SWGPerseusSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGPerseusSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGPerseusSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGPerseusSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGPerseusSettings::getDevSampleRateIndex() {
    return dev_sample_rate_index;
}
void
SWGPerseusSettings::setDevSampleRateIndex(qint32 dev_sample_rate_index) {
    this->dev_sample_rate_index = dev_sample_rate_index;
    this->m_dev_sample_rate_index_isSet = true;
}

qint32
SWGPerseusSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGPerseusSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGPerseusSettings::getAdcDither() {
    return adc_dither;
}
void
SWGPerseusSettings::setAdcDither(qint32 adc_dither) {
    this->adc_dither = adc_dither;
    this->m_adc_dither_isSet = true;
}

qint32
SWGPerseusSettings::getAdcPreamp() {
    return adc_preamp;
}
void
SWGPerseusSettings::setAdcPreamp(qint32 adc_preamp) {
    this->adc_preamp = adc_preamp;
    this->m_adc_preamp_isSet = true;
}

qint32
SWGPerseusSettings::getWideBand() {
    return wide_band;
}
void
SWGPerseusSettings::setWideBand(qint32 wide_band) {
    this->wide_band = wide_band;
    this->m_wide_band_isSet = true;
}

qint32
SWGPerseusSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGPerseusSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGPerseusSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGPerseusSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

qint32
SWGPerseusSettings::getIqOrder() {
    return iq_order;
}
void
SWGPerseusSettings::setIqOrder(qint32 iq_order) {
    this->iq_order = iq_order;
    this->m_iq_order_isSet = true;
}

qint32
SWGPerseusSettings::getAttenuator() {
    return attenuator;
}
void
SWGPerseusSettings::setAttenuator(qint32 attenuator) {
    this->attenuator = attenuator;
    this->m_attenuator_isSet = true;
}

qint32
SWGPerseusSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGPerseusSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGPerseusSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGPerseusSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGPerseusSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGPerseusSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGPerseusSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGPerseusSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGPerseusSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_l_oppm_tenths_isSet){
            isObjectUpdated = true; break;
        }
        if(m_dev_sample_rate_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_log2_decim_isSet){
            isObjectUpdated = true; break;
        }
        if(m_adc_dither_isSet){
            isObjectUpdated = true; break;
        }
        if(m_adc_preamp_isSet){
            isObjectUpdated = true; break;
        }
        if(m_wide_band_isSet){
            isObjectUpdated = true; break;
        }
        if(m_transverter_mode_isSet){
            isObjectUpdated = true; break;
        }
        if(m_transverter_delta_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_iq_order_isSet){
            isObjectUpdated = true; break;
        }
        if(m_attenuator_isSet){
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
    }while(false);
    return isObjectUpdated;
}
}

