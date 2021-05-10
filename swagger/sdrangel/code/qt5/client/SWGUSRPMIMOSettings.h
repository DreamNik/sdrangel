/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGUSRPMIMOSettings.h
 *
 * USRP
 */

#ifndef SWGUSRPMIMOSettings_H_
#define SWGUSRPMIMOSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGUSRPMIMOSettings: public SWGObject {
public:
    SWGUSRPMIMOSettings();
    SWGUSRPMIMOSettings(QString* json);
    virtual ~SWGUSRPMIMOSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGUSRPMIMOSettings* fromJson(QString &jsonString) override;

    qint32 getDevSampleRate();
    void setDevSampleRate(qint32 dev_sample_rate);

    QString* getClockSource();
    void setClockSource(QString* clock_source);

    qint64 getRxCenterFrequency();
    void setRxCenterFrequency(qint64 rx_center_frequency);

    qint32 getDcBlock();
    void setDcBlock(qint32 dc_block);

    qint32 getIqCorrection();
    void setIqCorrection(qint32 iq_correction);

    qint32 getLog2SoftDecim();
    void setLog2SoftDecim(qint32 log2_soft_decim);

    qint32 getFcPosRx();
    void setFcPosRx(qint32 fc_pos_rx);

    qint32 getRxTransverterMode();
    void setRxTransverterMode(qint32 rx_transverter_mode);

    qint64 getRxTransverterDeltaFrequency();
    void setRxTransverterDeltaFrequency(qint64 rx_transverter_delta_frequency);

    qint32 getIqOrder();
    void setIqOrder(qint32 iq_order);

    qint32 getRx0LoOffset();
    void setRx0LoOffset(qint32 rx0_lo_offset);

    qint32 getRx0LpfBw();
    void setRx0LpfBw(qint32 rx0_lpf_bw);

    QString* getRx0AntennaPath();
    void setRx0AntennaPath(QString* rx0_antenna_path);

    qint32 getRx0Gain();
    void setRx0Gain(qint32 rx0_gain);

    qint32 getRx0GainMode();
    void setRx0GainMode(qint32 rx0_gain_mode);

    qint32 getRx1LoOffset();
    void setRx1LoOffset(qint32 rx1_lo_offset);

    qint32 getRx1LpfBw();
    void setRx1LpfBw(qint32 rx1_lpf_bw);

    QString* getRx1AntennaPath();
    void setRx1AntennaPath(QString* rx1_antenna_path);

    qint32 getRx1Gain();
    void setRx1Gain(qint32 rx1_gain);

    qint32 getRx1GainMode();
    void setRx1GainMode(qint32 rx1_gain_mode);

    qint64 getTxCenterFrequency();
    void setTxCenterFrequency(qint64 tx_center_frequency);

    qint32 getLog2SoftInterp();
    void setLog2SoftInterp(qint32 log2_soft_interp);

    qint32 getFcPosTx();
    void setFcPosTx(qint32 fc_pos_tx);

    qint32 getTxTransverterMode();
    void setTxTransverterMode(qint32 tx_transverter_mode);

    qint64 getTxTransverterDeltaFrequency();
    void setTxTransverterDeltaFrequency(qint64 tx_transverter_delta_frequency);

    qint32 getTx0LoOffset();
    void setTx0LoOffset(qint32 tx0_lo_offset);

    qint32 getTx0LpfBw();
    void setTx0LpfBw(qint32 tx0_lpf_bw);

    qint32 getTx0Gain();
    void setTx0Gain(qint32 tx0_gain);

    QString* getTx0AntennaPath();
    void setTx0AntennaPath(QString* tx0_antenna_path);

    qint32 getTx1LoOffset();
    void setTx1LoOffset(qint32 tx1_lo_offset);

    qint32 getTx1LpfBw();
    void setTx1LpfBw(qint32 tx1_lpf_bw);

    qint32 getTx1Gain();
    void setTx1Gain(qint32 tx1_gain);

    QString* getTx1AntennaPath();
    void setTx1AntennaPath(QString* tx1_antenna_path);

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
    qint32 dev_sample_rate;
    bool m_dev_sample_rate_isSet;

    QString* clock_source;
    bool m_clock_source_isSet;

    qint64 rx_center_frequency;
    bool m_rx_center_frequency_isSet;

    qint32 dc_block;
    bool m_dc_block_isSet;

    qint32 iq_correction;
    bool m_iq_correction_isSet;

    qint32 log2_soft_decim;
    bool m_log2_soft_decim_isSet;

    qint32 fc_pos_rx;
    bool m_fc_pos_rx_isSet;

    qint32 rx_transverter_mode;
    bool m_rx_transverter_mode_isSet;

    qint64 rx_transverter_delta_frequency;
    bool m_rx_transverter_delta_frequency_isSet;

    qint32 iq_order;
    bool m_iq_order_isSet;

    qint32 rx0_lo_offset;
    bool m_rx0_lo_offset_isSet;

    qint32 rx0_lpf_bw;
    bool m_rx0_lpf_bw_isSet;

    QString* rx0_antenna_path;
    bool m_rx0_antenna_path_isSet;

    qint32 rx0_gain;
    bool m_rx0_gain_isSet;

    qint32 rx0_gain_mode;
    bool m_rx0_gain_mode_isSet;

    qint32 rx1_lo_offset;
    bool m_rx1_lo_offset_isSet;

    qint32 rx1_lpf_bw;
    bool m_rx1_lpf_bw_isSet;

    QString* rx1_antenna_path;
    bool m_rx1_antenna_path_isSet;

    qint32 rx1_gain;
    bool m_rx1_gain_isSet;

    qint32 rx1_gain_mode;
    bool m_rx1_gain_mode_isSet;

    qint64 tx_center_frequency;
    bool m_tx_center_frequency_isSet;

    qint32 log2_soft_interp;
    bool m_log2_soft_interp_isSet;

    qint32 fc_pos_tx;
    bool m_fc_pos_tx_isSet;

    qint32 tx_transverter_mode;
    bool m_tx_transverter_mode_isSet;

    qint64 tx_transverter_delta_frequency;
    bool m_tx_transverter_delta_frequency_isSet;

    qint32 tx0_lo_offset;
    bool m_tx0_lo_offset_isSet;

    qint32 tx0_lpf_bw;
    bool m_tx0_lpf_bw_isSet;

    qint32 tx0_gain;
    bool m_tx0_gain_isSet;

    QString* tx0_antenna_path;
    bool m_tx0_antenna_path_isSet;

    qint32 tx1_lo_offset;
    bool m_tx1_lo_offset_isSet;

    qint32 tx1_lpf_bw;
    bool m_tx1_lpf_bw_isSet;

    qint32 tx1_gain;
    bool m_tx1_gain_isSet;

    QString* tx1_antenna_path;
    bool m_tx1_antenna_path_isSet;

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

#endif /* SWGUSRPMIMOSettings_H_ */
