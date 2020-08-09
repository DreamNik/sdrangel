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
 * SWGChirpChatDemodSettings.h
 *
 * ChirpChatDemod
 */

#ifndef SWGChirpChatDemodSettings_H_
#define SWGChirpChatDemodSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGChirpChatDemodSettings: public SWGObject {
public:
    SWGChirpChatDemodSettings();
    SWGChirpChatDemodSettings(QString* json);
    virtual ~SWGChirpChatDemodSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGChirpChatDemodSettings* fromJson(QString &jsonString) override;

    qint64 getInputFrequencyOffset();
    void setInputFrequencyOffset(qint64 input_frequency_offset);

    qint32 getBandwidthIndex();
    void setBandwidthIndex(qint32 bandwidth_index);

    qint32 getSpreadFactor();
    void setSpreadFactor(qint32 spread_factor);

    qint32 getDeBits();
    void setDeBits(qint32 de_bits);

    qint32 getFftWindow();
    void setFftWindow(qint32 fft_window);

    qint32 getCodingScheme();
    void setCodingScheme(qint32 coding_scheme);

    qint32 getDecodeActive();
    void setDecodeActive(qint32 decode_active);

    qint32 getEomSquelchTenths();
    void setEomSquelchTenths(qint32 eom_squelch_tenths);

    qint32 getNbSymbolsMax();
    void setNbSymbolsMax(qint32 nb_symbols_max);

    qint32 getAutoNbSymbolsMax();
    void setAutoNbSymbolsMax(qint32 auto_nb_symbols_max);

    qint32 getPreambleChirps();
    void setPreambleChirps(qint32 preamble_chirps);

    qint32 getNbParityBits();
    void setNbParityBits(qint32 nb_parity_bits);

    qint32 getPacketLength();
    void setPacketLength(qint32 packet_length);

    qint32 getHasCrc();
    void setHasCrc(qint32 has_crc);

    qint32 getHasHeader();
    void setHasHeader(qint32 has_header);

    qint32 getSendViaUdp();
    void setSendViaUdp(qint32 send_via_udp);

    QString* getUdpAddress();
    void setUdpAddress(QString* udp_address);

    qint32 getUdpPort();
    void setUdpPort(qint32 udp_port);

    qint32 getRgbColor();
    void setRgbColor(qint32 rgb_color);

    QString* getTitle();
    void setTitle(QString* title);

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
    qint64 input_frequency_offset;
    bool m_input_frequency_offset_isSet;

    qint32 bandwidth_index;
    bool m_bandwidth_index_isSet;

    qint32 spread_factor;
    bool m_spread_factor_isSet;

    qint32 de_bits;
    bool m_de_bits_isSet;

    qint32 fft_window;
    bool m_fft_window_isSet;

    qint32 coding_scheme;
    bool m_coding_scheme_isSet;

    qint32 decode_active;
    bool m_decode_active_isSet;

    qint32 eom_squelch_tenths;
    bool m_eom_squelch_tenths_isSet;

    qint32 nb_symbols_max;
    bool m_nb_symbols_max_isSet;

    qint32 auto_nb_symbols_max;
    bool m_auto_nb_symbols_max_isSet;

    qint32 preamble_chirps;
    bool m_preamble_chirps_isSet;

    qint32 nb_parity_bits;
    bool m_nb_parity_bits_isSet;

    qint32 packet_length;
    bool m_packet_length_isSet;

    qint32 has_crc;
    bool m_has_crc_isSet;

    qint32 has_header;
    bool m_has_header_isSet;

    qint32 send_via_udp;
    bool m_send_via_udp_isSet;

    QString* udp_address;
    bool m_udp_address_isSet;

    qint32 udp_port;
    bool m_udp_port_isSet;

    qint32 rgb_color;
    bool m_rgb_color_isSet;

    QString* title;
    bool m_title_isSet;

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

#endif /* SWGChirpChatDemodSettings_H_ */
