void exitOnFail(signed int status, signed int successStatus){
if(status != successStatus){
exit((int)status);
}
}
typedef struct {
uint8_t id[4]; /** should always contain "RIFF" */
uint32_t totallength; /** total file length minus 8 */
uint8_t wavefmt[8]; /** should be "WAVEfmt "*/
uint32_t format; /** Sample format. 16 for PCM format. */
uint16_t pcm; /** 1 for PCM format */
uint16_t channels; /** Channels */
uint32_t frequency; /** sampling frequency */
uint32_t bytes_per_second; /** Bytes per second */
uint16_t bytes_per_capture; /** Bytes per capture */
uint16_t bits_per_sample; /** Bits per sample */
uint8_t data[4]; /** should always contain "data" */
uint32_t bytes_in_data; /** No. bytes in data */
} WAV_Header_TypeDef;
/** Wav header. Global as it is used in callbacks. */