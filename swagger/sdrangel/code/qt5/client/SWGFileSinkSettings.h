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
 * SWGFileSinkSettings.h
 *
 * FileSink
 */

#ifndef SWGFileSinkSettings_H_
#define SWGFileSinkSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGFileSinkSettings: public SWGObject {
public:
    SWGFileSinkSettings();
    SWGFileSinkSettings(QString* json);
    virtual ~SWGFileSinkSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGFileSinkSettings* fromJson(QString &jsonString) override;

    qint32 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint32 input_frequency_offset);

    QString* getFileRecordName();
    void setFileRecordName(QString* file_record_name);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    qint32 getLog2Decim();
    void setLog2Decim(qint32 log2_decim);

    qint32 getSpectrumSquelchMode();
    void setSpectrumSquelchMode(qint32 spectrum_squelch_mode);

    float getSpectrumSquelch();
    void setSpectrumSquelch(float spectrum_squelch);

    qint32 getPreRecordTime();
    void setPreRecordTime(qint32 pre_record_time);

    qint32 getSquelchPostRecordTime();
    void setSquelchPostRecordTime(qint32 squelch_post_record_time);

    qint32 getSquelchRecordingEnable();
    void setSquelchRecordingEnable(qint32 squelch_recording_enable);

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getUseReverseApi();
    void setUseReverseApi(qint32 use_reverse_api);

    QString* getReverseApiAddress();
    void setReverseApiAddress(QString* reverse_api_address);

    qint32 getReverseApiPort();
    void setReverseApiPort(qint32 reverse_api_port);

    qint32 getReverseApiDeviceIndex();
    void setReverseApiDeviceIndex(qint32 reverse_api_device_index);

    qint32 getReverseApiChannelIndex();
    void setReverseApiChannelIndex(qint32 reverse_api_channel_index);


    virtual bool isSet() override;

private:
    qint32 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    QString* file_record_name;
    bool m_file_record_name_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    qint32 log2_decim;
    bool m_log2_decim_isSet;

    qint32 spectrum_squelch_mode;
    bool m_spectrum_squelch_mode_isSet;

    float spectrum_squelch;
    bool m_spectrum_squelch_isSet;

    qint32 pre_record_time;
    bool m_pre_record_time_isSet;

    qint32 squelch_post_record_time;
    bool m_squelch_post_record_time_isSet;

    qint32 squelch_recording_enable;
    bool m_squelch_recording_enable_isSet;

    qint32 stream_index;
    bool m_stream_index_isSet;

    qint32 use_reverse_api;
    bool m_use_reverse_api_isSet;

    QString* reverse_api_address;
    bool m_reverse_api_address_isSet;

    qint32 reverse_api_port;
    bool m_reverse_api_port_isSet;

    qint32 reverse_api_device_index;
    bool m_reverse_api_device_index_isSet;

    qint32 reverse_api_channel_index;
    bool m_reverse_api_channel_index_isSet;

};

}

#endif /* SWGFileSinkSettings_H_ */
