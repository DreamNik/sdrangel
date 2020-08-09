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

/*
 * SWGBladeRF1InputSettings.h
 *
 * BladeRF1
 */

#ifndef SWGBladeRF1InputSettings_H_
#define SWGBladeRF1InputSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGBladeRF1InputSettings: public SWGObject {
public:
    SWGBladeRF1InputSettings();
    SWGBladeRF1InputSettings(QString* json);
    virtual ~SWGBladeRF1InputSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGBladeRF1InputSettings* fromJson(QString &jsonString) override;

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    qint32 getDevSampleRate();
    void setDevSampleRate(qint32 dev_sample_rate);

    qint32 getLnaGain();
    void setLnaGain(qint32 lna_gain);

    qint32 getVga1();
    void setVga1(qint32 vga1);

    qint32 getVga2();
    void setVga2(qint32 vga2);

    qint32 getBandwidth();
    void setBandwidth(qint32 bandwidth);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getFcPos();
    void setFcPos(qint32 fc_pos);

    qint32 getXb200();
    void setXb200(qint32 xb200);

    qint32 getXb200Path();
    void setXb200Path(qint32 xb200_path);

    qint32 getXb200Filter();
    void setXb200Filter(qint32 xb200_filter);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqCorrection();
    void setIqCorrection(qint32 iq_correction);

    qint32 getIqOrder();
    void setIqOrder(qint32 iq_order);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);


    virtual bool isSet() override;

private:
    qint64 center_frequency;
    bool m_center_frequency_isSet;

    qint32 dev_sample_rate;
    bool m_dev_sample_rate_isSet;

    qint32 lna_gain;
    bool m_lna_gain_isSet;

    qint32 vga1;
    bool m_vga1_isSet;

    qint32 vga2;
    bool m_vga2_isSet;

    qint32 bandwidth;
    bool m_bandwidth_isSet;

    qint32 log2_decim;
    bool m_log2_decim_isSet;

    qint32 fc_pos;
    bool m_fc_pos_isSet;

    qint32 xb200;
    bool m_xb200_isSet;

    qint32 xb200_path;
    bool m_xb200_path_isSet;

    qint32 xb200_filter;
    bool m_xb200_filter_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_correction;
    bool m_iq_correction_isSet;

    qint32 iq_order;
    bool m_iq_order_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

};

}

#endif /* SWGBladeRF1InputSettings_H_ */
