/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 5.6.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGATVDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGATVDemodSettings::SWGATVDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGATVDemodSettings::SWGATVDemodSettings() {
    line_time_factor = 0;
    m_line_time_factor_isSet = false;
    top_time_factor = 0;
    m_top_time_factor_isSet = false;
    fps_index = 0;
    m_fps_index_isSet = false;
    half_image = 0;
    m_half_image_isSet = false;
    rf_bandwidth_factor = 0;
    m_rf_bandwidth_factor_isSet = false;
    opp_bandwidth_factor = 0;
    m_opp_bandwidth_factor_isSet = false;
    nb_lines_index = 0;
    m_nb_lines_index_isSet = false;
    int_frequency_offset = 0;
    m_int_frequency_offset_isSet = false;
    enm_modulation = 0;
    m_enm_modulation_isSet = false;
    flt_rf_bandwidth = 0.0f;
    m_flt_rf_bandwidth_isSet = false;
    flt_rf_opp_bandwidth = 0.0f;
    m_flt_rf_opp_bandwidth_isSet = false;
    bln_fft_filtering = 0;
    m_bln_fft_filtering_isSet = false;
    blndecimator_enable = 0;
    m_blndecimator_enable_isSet = false;
    flt_bfo_frequency = 0.0f;
    m_flt_bfo_frequency_isSet = false;
    fm_deviation = 0.0f;
    m_fm_deviation_isSet = false;
    am_scaling_factor = 0;
    m_am_scaling_factor_isSet = false;
    am_offset_factor = 0;
    m_am_offset_factor_isSet = false;
    int_sample_rate = 0;
    m_int_sample_rate_isSet = false;
    enm_atv_standard = 0;
    m_enm_atv_standard_isSet = false;
    int_number_of_lines = 0;
    m_int_number_of_lines_isSet = false;
    flt_line_duration = 0.0f;
    m_flt_line_duration_isSet = false;
    flt_top_duration = 0.0f;
    m_flt_top_duration_isSet = false;
    flt_frame_per_s = 0.0f;
    m_flt_frame_per_s_isSet = false;
    flt_ratio_of_rows_to_display = 0.0f;
    m_flt_ratio_of_rows_to_display_isSet = false;
    flt_volt_level_synchro_top = 0.0f;
    m_flt_volt_level_synchro_top_isSet = false;
    flt_volt_level_synchro_black = 0.0f;
    m_flt_volt_level_synchro_black_isSet = false;
    bln_h_sync = 0;
    m_bln_h_sync_isSet = false;
    bln_v_sync = 0;
    m_bln_v_sync_isSet = false;
    bln_invert_video = 0;
    m_bln_invert_video_isSet = false;
    int_video_tab_index = 0;
    m_int_video_tab_index_isSet = false;
    int_tv_sample_rate = 0;
    m_int_tv_sample_rate_isSet = false;
    int_number_sample_per_line = 0;
    m_int_number_sample_per_line_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    udp_address = nullptr;
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
}

SWGATVDemodSettings::~SWGATVDemodSettings() {
    this->cleanup();
}

void
SWGATVDemodSettings::init() {
    line_time_factor = 0;
    m_line_time_factor_isSet = false;
    top_time_factor = 0;
    m_top_time_factor_isSet = false;
    fps_index = 0;
    m_fps_index_isSet = false;
    half_image = 0;
    m_half_image_isSet = false;
    rf_bandwidth_factor = 0;
    m_rf_bandwidth_factor_isSet = false;
    opp_bandwidth_factor = 0;
    m_opp_bandwidth_factor_isSet = false;
    nb_lines_index = 0;
    m_nb_lines_index_isSet = false;
    int_frequency_offset = 0;
    m_int_frequency_offset_isSet = false;
    enm_modulation = 0;
    m_enm_modulation_isSet = false;
    flt_rf_bandwidth = 0.0f;
    m_flt_rf_bandwidth_isSet = false;
    flt_rf_opp_bandwidth = 0.0f;
    m_flt_rf_opp_bandwidth_isSet = false;
    bln_fft_filtering = 0;
    m_bln_fft_filtering_isSet = false;
    blndecimator_enable = 0;
    m_blndecimator_enable_isSet = false;
    flt_bfo_frequency = 0.0f;
    m_flt_bfo_frequency_isSet = false;
    fm_deviation = 0.0f;
    m_fm_deviation_isSet = false;
    am_scaling_factor = 0;
    m_am_scaling_factor_isSet = false;
    am_offset_factor = 0;
    m_am_offset_factor_isSet = false;
    int_sample_rate = 0;
    m_int_sample_rate_isSet = false;
    enm_atv_standard = 0;
    m_enm_atv_standard_isSet = false;
    int_number_of_lines = 0;
    m_int_number_of_lines_isSet = false;
    flt_line_duration = 0.0f;
    m_flt_line_duration_isSet = false;
    flt_top_duration = 0.0f;
    m_flt_top_duration_isSet = false;
    flt_frame_per_s = 0.0f;
    m_flt_frame_per_s_isSet = false;
    flt_ratio_of_rows_to_display = 0.0f;
    m_flt_ratio_of_rows_to_display_isSet = false;
    flt_volt_level_synchro_top = 0.0f;
    m_flt_volt_level_synchro_top_isSet = false;
    flt_volt_level_synchro_black = 0.0f;
    m_flt_volt_level_synchro_black_isSet = false;
    bln_h_sync = 0;
    m_bln_h_sync_isSet = false;
    bln_v_sync = 0;
    m_bln_v_sync_isSet = false;
    bln_invert_video = 0;
    m_bln_invert_video_isSet = false;
    int_video_tab_index = 0;
    m_int_video_tab_index_isSet = false;
    int_tv_sample_rate = 0;
    m_int_tv_sample_rate_isSet = false;
    int_number_sample_per_line = 0;
    m_int_number_sample_per_line_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    udp_address = new QString("");
    m_udp_address_isSet = false;
    udp_port = 0;
    m_udp_port_isSet = false;
}

void
SWGATVDemodSettings::cleanup() {

































    if(title != nullptr) { 
        delete title;
    }
    if(udp_address != nullptr) { 
        delete udp_address;
    }

}

SWGATVDemodSettings*
SWGATVDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGATVDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&line_time_factor, pJson["lineTimeFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&top_time_factor, pJson["topTimeFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fps_index, pJson["fpsIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&half_image, pJson["halfImage"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth_factor, pJson["RFBandwidthFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&opp_bandwidth_factor, pJson["OppBandwidthFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&nb_lines_index, pJson["nbLinesIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&int_frequency_offset, pJson["intFrequencyOffset"], "qint32", "");
    
    ::SWGSDRangel::setValue(&enm_modulation, pJson["enmModulation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&flt_rf_bandwidth, pJson["fltRFBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&flt_rf_opp_bandwidth, pJson["fltRFOppBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&bln_fft_filtering, pJson["blnFFTFiltering"], "qint32", "");
    
    ::SWGSDRangel::setValue(&blndecimator_enable, pJson["blndecimatorEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&flt_bfo_frequency, pJson["fltBFOFrequency"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "float", "");
    
    ::SWGSDRangel::setValue(&am_scaling_factor, pJson["amScalingFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&am_offset_factor, pJson["amOffsetFactor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&int_sample_rate, pJson["intSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&enm_atv_standard, pJson["enmATVStandard"], "qint32", "");
    
    ::SWGSDRangel::setValue(&int_number_of_lines, pJson["intNumberOfLines"], "qint32", "");
    
    ::SWGSDRangel::setValue(&flt_line_duration, pJson["fltLineDuration"], "float", "");
    
    ::SWGSDRangel::setValue(&flt_top_duration, pJson["fltTopDuration"], "float", "");
    
    ::SWGSDRangel::setValue(&flt_frame_per_s, pJson["fltFramePerS"], "float", "");
    
    ::SWGSDRangel::setValue(&flt_ratio_of_rows_to_display, pJson["fltRatioOfRowsToDisplay"], "float", "");
    
    ::SWGSDRangel::setValue(&flt_volt_level_synchro_top, pJson["fltVoltLevelSynchroTop"], "float", "");
    
    ::SWGSDRangel::setValue(&flt_volt_level_synchro_black, pJson["fltVoltLevelSynchroBlack"], "float", "");
    
    ::SWGSDRangel::setValue(&bln_h_sync, pJson["blnHSync"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bln_v_sync, pJson["blnVSync"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bln_invert_video, pJson["blnInvertVideo"], "qint32", "");
    
    ::SWGSDRangel::setValue(&int_video_tab_index, pJson["intVideoTabIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&int_tv_sample_rate, pJson["intTVSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&int_number_sample_per_line, pJson["intNumberSamplePerLine"], "qint32", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_address, pJson["udpAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_port, pJson["udpPort"], "qint32", "");
    
}

QString
SWGATVDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGATVDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_line_time_factor_isSet){
        obj->insert("lineTimeFactor", QJsonValue(line_time_factor));
    }
    if(m_top_time_factor_isSet){
        obj->insert("topTimeFactor", QJsonValue(top_time_factor));
    }
    if(m_fps_index_isSet){
        obj->insert("fpsIndex", QJsonValue(fps_index));
    }
    if(m_half_image_isSet){
        obj->insert("halfImage", QJsonValue(half_image));
    }
    if(m_rf_bandwidth_factor_isSet){
        obj->insert("RFBandwidthFactor", QJsonValue(rf_bandwidth_factor));
    }
    if(m_opp_bandwidth_factor_isSet){
        obj->insert("OppBandwidthFactor", QJsonValue(opp_bandwidth_factor));
    }
    if(m_nb_lines_index_isSet){
        obj->insert("nbLinesIndex", QJsonValue(nb_lines_index));
    }
    if(m_int_frequency_offset_isSet){
        obj->insert("intFrequencyOffset", QJsonValue(int_frequency_offset));
    }
    if(m_enm_modulation_isSet){
        obj->insert("enmModulation", QJsonValue(enm_modulation));
    }
    if(m_flt_rf_bandwidth_isSet){
        obj->insert("fltRFBandwidth", QJsonValue(flt_rf_bandwidth));
    }
    if(m_flt_rf_opp_bandwidth_isSet){
        obj->insert("fltRFOppBandwidth", QJsonValue(flt_rf_opp_bandwidth));
    }
    if(m_bln_fft_filtering_isSet){
        obj->insert("blnFFTFiltering", QJsonValue(bln_fft_filtering));
    }
    if(m_blndecimator_enable_isSet){
        obj->insert("blndecimatorEnable", QJsonValue(blndecimator_enable));
    }
    if(m_flt_bfo_frequency_isSet){
        obj->insert("fltBFOFrequency", QJsonValue(flt_bfo_frequency));
    }
    if(m_fm_deviation_isSet){
        obj->insert("fmDeviation", QJsonValue(fm_deviation));
    }
    if(m_am_scaling_factor_isSet){
        obj->insert("amScalingFactor", QJsonValue(am_scaling_factor));
    }
    if(m_am_offset_factor_isSet){
        obj->insert("amOffsetFactor", QJsonValue(am_offset_factor));
    }
    if(m_int_sample_rate_isSet){
        obj->insert("intSampleRate", QJsonValue(int_sample_rate));
    }
    if(m_enm_atv_standard_isSet){
        obj->insert("enmATVStandard", QJsonValue(enm_atv_standard));
    }
    if(m_int_number_of_lines_isSet){
        obj->insert("intNumberOfLines", QJsonValue(int_number_of_lines));
    }
    if(m_flt_line_duration_isSet){
        obj->insert("fltLineDuration", QJsonValue(flt_line_duration));
    }
    if(m_flt_top_duration_isSet){
        obj->insert("fltTopDuration", QJsonValue(flt_top_duration));
    }
    if(m_flt_frame_per_s_isSet){
        obj->insert("fltFramePerS", QJsonValue(flt_frame_per_s));
    }
    if(m_flt_ratio_of_rows_to_display_isSet){
        obj->insert("fltRatioOfRowsToDisplay", QJsonValue(flt_ratio_of_rows_to_display));
    }
    if(m_flt_volt_level_synchro_top_isSet){
        obj->insert("fltVoltLevelSynchroTop", QJsonValue(flt_volt_level_synchro_top));
    }
    if(m_flt_volt_level_synchro_black_isSet){
        obj->insert("fltVoltLevelSynchroBlack", QJsonValue(flt_volt_level_synchro_black));
    }
    if(m_bln_h_sync_isSet){
        obj->insert("blnHSync", QJsonValue(bln_h_sync));
    }
    if(m_bln_v_sync_isSet){
        obj->insert("blnVSync", QJsonValue(bln_v_sync));
    }
    if(m_bln_invert_video_isSet){
        obj->insert("blnInvertVideo", QJsonValue(bln_invert_video));
    }
    if(m_int_video_tab_index_isSet){
        obj->insert("intVideoTabIndex", QJsonValue(int_video_tab_index));
    }
    if(m_int_tv_sample_rate_isSet){
        obj->insert("intTVSampleRate", QJsonValue(int_tv_sample_rate));
    }
    if(m_int_number_sample_per_line_isSet){
        obj->insert("intNumberSamplePerLine", QJsonValue(int_number_sample_per_line));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(udp_address != nullptr && *udp_address != QString("")){
        toJsonValue(QString("udpAddress"), udp_address, obj, QString("QString"));
    }
    if(m_udp_port_isSet){
        obj->insert("udpPort", QJsonValue(udp_port));
    }

    return obj;
}

qint32
SWGATVDemodSettings::getLineTimeFactor() {
    return line_time_factor;
}
void
SWGATVDemodSettings::setLineTimeFactor(qint32 line_time_factor) {
    this->line_time_factor = line_time_factor;
    this->m_line_time_factor_isSet = true;
}

qint32
SWGATVDemodSettings::getTopTimeFactor() {
    return top_time_factor;
}
void
SWGATVDemodSettings::setTopTimeFactor(qint32 top_time_factor) {
    this->top_time_factor = top_time_factor;
    this->m_top_time_factor_isSet = true;
}

qint32
SWGATVDemodSettings::getFpsIndex() {
    return fps_index;
}
void
SWGATVDemodSettings::setFpsIndex(qint32 fps_index) {
    this->fps_index = fps_index;
    this->m_fps_index_isSet = true;
}

qint32
SWGATVDemodSettings::getHalfImage() {
    return half_image;
}
void
SWGATVDemodSettings::setHalfImage(qint32 half_image) {
    this->half_image = half_image;
    this->m_half_image_isSet = true;
}

qint32
SWGATVDemodSettings::getRfBandwidthFactor() {
    return rf_bandwidth_factor;
}
void
SWGATVDemodSettings::setRfBandwidthFactor(qint32 rf_bandwidth_factor) {
    this->rf_bandwidth_factor = rf_bandwidth_factor;
    this->m_rf_bandwidth_factor_isSet = true;
}

qint32
SWGATVDemodSettings::getOppBandwidthFactor() {
    return opp_bandwidth_factor;
}
void
SWGATVDemodSettings::setOppBandwidthFactor(qint32 opp_bandwidth_factor) {
    this->opp_bandwidth_factor = opp_bandwidth_factor;
    this->m_opp_bandwidth_factor_isSet = true;
}

qint32
SWGATVDemodSettings::getNbLinesIndex() {
    return nb_lines_index;
}
void
SWGATVDemodSettings::setNbLinesIndex(qint32 nb_lines_index) {
    this->nb_lines_index = nb_lines_index;
    this->m_nb_lines_index_isSet = true;
}

qint32
SWGATVDemodSettings::getIntFrequencyOffset() {
    return int_frequency_offset;
}
void
SWGATVDemodSettings::setIntFrequencyOffset(qint32 int_frequency_offset) {
    this->int_frequency_offset = int_frequency_offset;
    this->m_int_frequency_offset_isSet = true;
}

qint32
SWGATVDemodSettings::getEnmModulation() {
    return enm_modulation;
}
void
SWGATVDemodSettings::setEnmModulation(qint32 enm_modulation) {
    this->enm_modulation = enm_modulation;
    this->m_enm_modulation_isSet = true;
}

float
SWGATVDemodSettings::getFltRfBandwidth() {
    return flt_rf_bandwidth;
}
void
SWGATVDemodSettings::setFltRfBandwidth(float flt_rf_bandwidth) {
    this->flt_rf_bandwidth = flt_rf_bandwidth;
    this->m_flt_rf_bandwidth_isSet = true;
}

float
SWGATVDemodSettings::getFltRfOppBandwidth() {
    return flt_rf_opp_bandwidth;
}
void
SWGATVDemodSettings::setFltRfOppBandwidth(float flt_rf_opp_bandwidth) {
    this->flt_rf_opp_bandwidth = flt_rf_opp_bandwidth;
    this->m_flt_rf_opp_bandwidth_isSet = true;
}

qint32
SWGATVDemodSettings::getBlnFftFiltering() {
    return bln_fft_filtering;
}
void
SWGATVDemodSettings::setBlnFftFiltering(qint32 bln_fft_filtering) {
    this->bln_fft_filtering = bln_fft_filtering;
    this->m_bln_fft_filtering_isSet = true;
}

qint32
SWGATVDemodSettings::getBlndecimatorEnable() {
    return blndecimator_enable;
}
void
SWGATVDemodSettings::setBlndecimatorEnable(qint32 blndecimator_enable) {
    this->blndecimator_enable = blndecimator_enable;
    this->m_blndecimator_enable_isSet = true;
}

float
SWGATVDemodSettings::getFltBfoFrequency() {
    return flt_bfo_frequency;
}
void
SWGATVDemodSettings::setFltBfoFrequency(float flt_bfo_frequency) {
    this->flt_bfo_frequency = flt_bfo_frequency;
    this->m_flt_bfo_frequency_isSet = true;
}

float
SWGATVDemodSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGATVDemodSettings::setFmDeviation(float fm_deviation) {
    this->fm_deviation = fm_deviation;
    this->m_fm_deviation_isSet = true;
}

qint32
SWGATVDemodSettings::getAmScalingFactor() {
    return am_scaling_factor;
}
void
SWGATVDemodSettings::setAmScalingFactor(qint32 am_scaling_factor) {
    this->am_scaling_factor = am_scaling_factor;
    this->m_am_scaling_factor_isSet = true;
}

qint32
SWGATVDemodSettings::getAmOffsetFactor() {
    return am_offset_factor;
}
void
SWGATVDemodSettings::setAmOffsetFactor(qint32 am_offset_factor) {
    this->am_offset_factor = am_offset_factor;
    this->m_am_offset_factor_isSet = true;
}

qint32
SWGATVDemodSettings::getIntSampleRate() {
    return int_sample_rate;
}
void
SWGATVDemodSettings::setIntSampleRate(qint32 int_sample_rate) {
    this->int_sample_rate = int_sample_rate;
    this->m_int_sample_rate_isSet = true;
}

qint32
SWGATVDemodSettings::getEnmAtvStandard() {
    return enm_atv_standard;
}
void
SWGATVDemodSettings::setEnmAtvStandard(qint32 enm_atv_standard) {
    this->enm_atv_standard = enm_atv_standard;
    this->m_enm_atv_standard_isSet = true;
}

qint32
SWGATVDemodSettings::getIntNumberOfLines() {
    return int_number_of_lines;
}
void
SWGATVDemodSettings::setIntNumberOfLines(qint32 int_number_of_lines) {
    this->int_number_of_lines = int_number_of_lines;
    this->m_int_number_of_lines_isSet = true;
}

float
SWGATVDemodSettings::getFltLineDuration() {
    return flt_line_duration;
}
void
SWGATVDemodSettings::setFltLineDuration(float flt_line_duration) {
    this->flt_line_duration = flt_line_duration;
    this->m_flt_line_duration_isSet = true;
}

float
SWGATVDemodSettings::getFltTopDuration() {
    return flt_top_duration;
}
void
SWGATVDemodSettings::setFltTopDuration(float flt_top_duration) {
    this->flt_top_duration = flt_top_duration;
    this->m_flt_top_duration_isSet = true;
}

float
SWGATVDemodSettings::getFltFramePerS() {
    return flt_frame_per_s;
}
void
SWGATVDemodSettings::setFltFramePerS(float flt_frame_per_s) {
    this->flt_frame_per_s = flt_frame_per_s;
    this->m_flt_frame_per_s_isSet = true;
}

float
SWGATVDemodSettings::getFltRatioOfRowsToDisplay() {
    return flt_ratio_of_rows_to_display;
}
void
SWGATVDemodSettings::setFltRatioOfRowsToDisplay(float flt_ratio_of_rows_to_display) {
    this->flt_ratio_of_rows_to_display = flt_ratio_of_rows_to_display;
    this->m_flt_ratio_of_rows_to_display_isSet = true;
}

float
SWGATVDemodSettings::getFltVoltLevelSynchroTop() {
    return flt_volt_level_synchro_top;
}
void
SWGATVDemodSettings::setFltVoltLevelSynchroTop(float flt_volt_level_synchro_top) {
    this->flt_volt_level_synchro_top = flt_volt_level_synchro_top;
    this->m_flt_volt_level_synchro_top_isSet = true;
}

float
SWGATVDemodSettings::getFltVoltLevelSynchroBlack() {
    return flt_volt_level_synchro_black;
}
void
SWGATVDemodSettings::setFltVoltLevelSynchroBlack(float flt_volt_level_synchro_black) {
    this->flt_volt_level_synchro_black = flt_volt_level_synchro_black;
    this->m_flt_volt_level_synchro_black_isSet = true;
}

qint32
SWGATVDemodSettings::getBlnHSync() {
    return bln_h_sync;
}
void
SWGATVDemodSettings::setBlnHSync(qint32 bln_h_sync) {
    this->bln_h_sync = bln_h_sync;
    this->m_bln_h_sync_isSet = true;
}

qint32
SWGATVDemodSettings::getBlnVSync() {
    return bln_v_sync;
}
void
SWGATVDemodSettings::setBlnVSync(qint32 bln_v_sync) {
    this->bln_v_sync = bln_v_sync;
    this->m_bln_v_sync_isSet = true;
}

qint32
SWGATVDemodSettings::getBlnInvertVideo() {
    return bln_invert_video;
}
void
SWGATVDemodSettings::setBlnInvertVideo(qint32 bln_invert_video) {
    this->bln_invert_video = bln_invert_video;
    this->m_bln_invert_video_isSet = true;
}

qint32
SWGATVDemodSettings::getIntVideoTabIndex() {
    return int_video_tab_index;
}
void
SWGATVDemodSettings::setIntVideoTabIndex(qint32 int_video_tab_index) {
    this->int_video_tab_index = int_video_tab_index;
    this->m_int_video_tab_index_isSet = true;
}

qint32
SWGATVDemodSettings::getIntTvSampleRate() {
    return int_tv_sample_rate;
}
void
SWGATVDemodSettings::setIntTvSampleRate(qint32 int_tv_sample_rate) {
    this->int_tv_sample_rate = int_tv_sample_rate;
    this->m_int_tv_sample_rate_isSet = true;
}

qint32
SWGATVDemodSettings::getIntNumberSamplePerLine() {
    return int_number_sample_per_line;
}
void
SWGATVDemodSettings::setIntNumberSamplePerLine(qint32 int_number_sample_per_line) {
    this->int_number_sample_per_line = int_number_sample_per_line;
    this->m_int_number_sample_per_line_isSet = true;
}

qint32
SWGATVDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGATVDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGATVDemodSettings::getTitle() {
    return title;
}
void
SWGATVDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
SWGATVDemodSettings::getUdpAddress() {
    return udp_address;
}
void
SWGATVDemodSettings::setUdpAddress(QString* udp_address) {
    this->udp_address = udp_address;
    this->m_udp_address_isSet = true;
}

qint32
SWGATVDemodSettings::getUdpPort() {
    return udp_port;
}
void
SWGATVDemodSettings::setUdpPort(qint32 udp_port) {
    this->udp_port = udp_port;
    this->m_udp_port_isSet = true;
}


bool
SWGATVDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_line_time_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_top_time_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fps_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_half_image_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_opp_bandwidth_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_nb_lines_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_int_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_enm_modulation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_rf_opp_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bln_fft_filtering_isSet){
            isObjectUpdated = true; break;
        }
        if(m_blndecimator_enable_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_bfo_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fm_deviation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_am_scaling_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_am_offset_factor_isSet){
            isObjectUpdated = true; break;
        }
        if(m_int_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_enm_atv_standard_isSet){
            isObjectUpdated = true; break;
        }
        if(m_int_number_of_lines_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_line_duration_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_top_duration_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_frame_per_s_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_ratio_of_rows_to_display_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_volt_level_synchro_top_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flt_volt_level_synchro_black_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bln_h_sync_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bln_v_sync_isSet){
            isObjectUpdated = true; break;
        }
        if(m_bln_invert_video_isSet){
            isObjectUpdated = true; break;
        }
        if(m_int_video_tab_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_int_tv_sample_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_int_number_sample_per_line_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(udp_address && *udp_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_port_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

