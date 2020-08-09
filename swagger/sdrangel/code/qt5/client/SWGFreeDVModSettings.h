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
 * SWGFreeDVModSettings.h
 *
 * FreeDVMod
 */

#ifndef SWGFreeDVModSettings_H_
#define SWGFreeDVModSettings_H_

#include <QJsonObject>


#include "SWGCWKeyerSettings.h"
#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGFreeDVModSettings: public SWGObject {
public:
    SWGFreeDVModSettings();
    SWGFreeDVModSettings(QString* json);
    virtual ~SWGFreeDVModSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGFreeDVModSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    float getToneFrequency();
    void setToneFrequency(float tone_frequency);

    float getVolumeFactor();
    void setVolumeFactor(float volume_factor);

    qint32 getSpanLog2();
    void setSpanLog2(qint32 span_log2);

    qint32 getAudioMute();
    void setAudioMute(qint32 audio_mute);

    qint32 getPlayLoop();
    void setPlayLoop(qint32 play_loop);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

    QString* getAudioDeviceName();
    void setAudioDeviceName(QString* audio_device_name);

    qint32 getFreeDvMode();
    void setFreeDvMode(qint32 free_dv_mode);

    qint32 getModAfInput();
    void setModAfInput(qint32 mod_af_input);

    qint32 getGaugeInputElseModem();
    void setGaugeInputElseModem(qint32 gauge_input_else_modem);

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

    SWGCWKeyerSettings* getCwKeyer();
    void setCwKeyer(SWGCWKeyerSettings* cw_keyer);


    virtual bool isSet() override;

private:
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    float tone_frequency;
    bool m_tone_frequency_isSet;

    float volume_factor;
    bool m_volume_factor_isSet;

    qint32 span_log2;
    bool m_span_log2_isSet;

    qint32 audio_mute;
    bool m_audio_mute_isSet;

    qint32 play_loop;
    bool m_play_loop_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

    QString* audio_device_name;
    bool m_audio_device_name_isSet;

    qint32 free_dv_mode;
    bool m_free_dv_mode_isSet;

    qint32 mod_af_input;
    bool m_mod_af_input_isSet;

    qint32 gauge_input_else_modem;
    bool m_gauge_input_else_modem_isSet;

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

    SWGCWKeyerSettings* cw_keyer;
    bool m_cw_keyer_isSet;

};

}

#endif /* SWGFreeDVModSettings_H_ */
