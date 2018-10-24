// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Compression
// Wrapped Chilkat C++ class name =  CkCompression

@class CkoTask;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoStream;


@class CkoBaseProgress;

@interface CkoCompression : NSObject {

	@private
		void *m_eventCallback;
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

// property setter: EventCallbackObject
- (void)setEventCallbackObject: (CkoBaseProgress *)eventObj;

@property (nonatomic, copy) NSString *Algorithm;
@property (nonatomic, copy) NSString *Charset;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSNumber *DeflateLevel;
@property (nonatomic, copy) NSString *EncodingMode;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: BeginCompressBytes
- (NSData *)BeginCompressBytes: (NSData *)bData;
// method: BeginCompressBytesAsync
- (CkoTask *)BeginCompressBytesAsync: (NSData *)bData;
// method: BeginCompressBytesENC
- (NSString *)BeginCompressBytesENC: (NSData *)bData;
// method: BeginCompressBytesENCAsync
- (CkoTask *)BeginCompressBytesENCAsync: (NSData *)bData;
// method: BeginCompressString
- (NSData *)BeginCompressString: (NSString *)str;
// method: BeginCompressStringAsync
- (CkoTask *)BeginCompressStringAsync: (NSString *)str;
// method: BeginCompressStringENC
- (NSString *)BeginCompressStringENC: (NSString *)str;
// method: BeginCompressStringENCAsync
- (CkoTask *)BeginCompressStringENCAsync: (NSString *)str;
// method: BeginDecompressBytes
- (NSData *)BeginDecompressBytes: (NSData *)bData;
// method: BeginDecompressBytesAsync
- (CkoTask *)BeginDecompressBytesAsync: (NSData *)bData;
// method: BeginDecompressBytesENC
- (NSData *)BeginDecompressBytesENC: (NSString *)str;
// method: BeginDecompressBytesENCAsync
- (CkoTask *)BeginDecompressBytesENCAsync: (NSString *)str;
// method: BeginDecompressString
- (NSString *)BeginDecompressString: (NSData *)bData;
// method: BeginDecompressStringAsync
- (CkoTask *)BeginDecompressStringAsync: (NSData *)bData;
// method: BeginDecompressStringENC
- (NSString *)BeginDecompressStringENC: (NSString *)str;
// method: BeginDecompressStringENCAsync
- (CkoTask *)BeginDecompressStringENCAsync: (NSString *)str;
// method: CompressBd
- (BOOL)CompressBd: (CkoBinData *)binData;
// method: CompressBdAsync
- (CkoTask *)CompressBdAsync: (CkoBinData *)binData;
// method: CompressBytes
- (NSData *)CompressBytes: (NSData *)bData;
// method: CompressBytesAsync
- (CkoTask *)CompressBytesAsync: (NSData *)bData;
// method: CompressBytesENC
- (NSString *)CompressBytesENC: (NSData *)bData;
// method: CompressBytesENCAsync
- (CkoTask *)CompressBytesENCAsync: (NSData *)bData;
// method: CompressFile
- (BOOL)CompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: CompressFileAsync
- (CkoTask *)CompressFileAsync: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: CompressSb
- (BOOL)CompressSb: (CkoStringBuilder *)sb 
	binData: (CkoBinData *)binData;
// method: CompressSbAsync
- (CkoTask *)CompressSbAsync: (CkoStringBuilder *)sb 
	binData: (CkoBinData *)binData;
// method: CompressStream
- (BOOL)CompressStream: (CkoStream *)strm;
// method: CompressStreamAsync
- (CkoTask *)CompressStreamAsync: (CkoStream *)strm;
// method: CompressString
- (NSData *)CompressString: (NSString *)str;
// method: CompressStringAsync
- (CkoTask *)CompressStringAsync: (NSString *)str;
// method: CompressStringENC
- (NSString *)CompressStringENC: (NSString *)str;
// method: CompressStringENCAsync
- (CkoTask *)CompressStringENCAsync: (NSString *)str;
// method: DecompressBd
- (BOOL)DecompressBd: (CkoBinData *)binData;
// method: DecompressBdAsync
- (CkoTask *)DecompressBdAsync: (CkoBinData *)binData;
// method: DecompressBytes
- (NSData *)DecompressBytes: (NSData *)bData;
// method: DecompressBytesAsync
- (CkoTask *)DecompressBytesAsync: (NSData *)bData;
// method: DecompressBytesENC
- (NSData *)DecompressBytesENC: (NSString *)str;
// method: DecompressBytesENCAsync
- (CkoTask *)DecompressBytesENCAsync: (NSString *)str;
// method: DecompressFile
- (BOOL)DecompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: DecompressFileAsync
- (CkoTask *)DecompressFileAsync: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: DecompressSb
- (BOOL)DecompressSb: (CkoBinData *)binData 
	sb: (CkoStringBuilder *)sb;
// method: DecompressSbAsync
- (CkoTask *)DecompressSbAsync: (CkoBinData *)binData 
	sb: (CkoStringBuilder *)sb;
// method: DecompressStream
- (BOOL)DecompressStream: (CkoStream *)strm;
// method: DecompressStreamAsync
- (CkoTask *)DecompressStreamAsync: (CkoStream *)strm;
// method: DecompressString
- (NSString *)DecompressString: (NSData *)bData;
// method: DecompressStringAsync
- (CkoTask *)DecompressStringAsync: (NSData *)bData;
// method: DecompressStringENC
- (NSString *)DecompressStringENC: (NSString *)str;
// method: DecompressStringENCAsync
- (CkoTask *)DecompressStringENCAsync: (NSString *)str;
// method: EndCompressBytes
- (NSData *)EndCompressBytes;
// method: EndCompressBytesAsync
- (CkoTask *)EndCompressBytesAsync;
// method: EndCompressBytesENC
- (NSString *)EndCompressBytesENC;
// method: EndCompressBytesENCAsync
- (CkoTask *)EndCompressBytesENCAsync;
// method: EndCompressString
- (NSData *)EndCompressString;
// method: EndCompressStringAsync
- (CkoTask *)EndCompressStringAsync;
// method: EndCompressStringENC
- (NSString *)EndCompressStringENC;
// method: EndCompressStringENCAsync
- (CkoTask *)EndCompressStringENCAsync;
// method: EndDecompressBytes
- (NSData *)EndDecompressBytes;
// method: EndDecompressBytesAsync
- (CkoTask *)EndDecompressBytesAsync;
// method: EndDecompressBytesENC
- (NSData *)EndDecompressBytesENC;
// method: EndDecompressBytesENCAsync
- (CkoTask *)EndDecompressBytesENCAsync;
// method: EndDecompressString
- (NSString *)EndDecompressString;
// method: EndDecompressStringAsync
- (CkoTask *)EndDecompressStringAsync;
// method: EndDecompressStringENC
- (NSString *)EndDecompressStringENC;
// method: EndDecompressStringENCAsync
- (CkoTask *)EndDecompressStringENCAsync;
// method: MoreCompressBytes
- (NSData *)MoreCompressBytes: (NSData *)bData;
// method: MoreCompressBytesAsync
- (CkoTask *)MoreCompressBytesAsync: (NSData *)bData;
// method: MoreCompressBytesENC
- (NSString *)MoreCompressBytesENC: (NSData *)bData;
// method: MoreCompressBytesENCAsync
- (CkoTask *)MoreCompressBytesENCAsync: (NSData *)bData;
// method: MoreCompressString
- (NSData *)MoreCompressString: (NSString *)str;
// method: MoreCompressStringAsync
- (CkoTask *)MoreCompressStringAsync: (NSString *)str;
// method: MoreCompressStringENC
- (NSString *)MoreCompressStringENC: (NSString *)str;
// method: MoreCompressStringENCAsync
- (CkoTask *)MoreCompressStringENCAsync: (NSString *)str;
// method: MoreDecompressBytes
- (NSData *)MoreDecompressBytes: (NSData *)bData;
// method: MoreDecompressBytesAsync
- (CkoTask *)MoreDecompressBytesAsync: (NSData *)bData;
// method: MoreDecompressBytesENC
- (NSData *)MoreDecompressBytesENC: (NSString *)str;
// method: MoreDecompressBytesENCAsync
- (CkoTask *)MoreDecompressBytesENCAsync: (NSString *)str;
// method: MoreDecompressString
- (NSString *)MoreDecompressString: (NSData *)bData;
// method: MoreDecompressStringAsync
- (CkoTask *)MoreDecompressStringAsync: (NSData *)bData;
// method: MoreDecompressStringENC
- (NSString *)MoreDecompressStringENC: (NSString *)str;
// method: MoreDecompressStringENCAsync
- (CkoTask *)MoreDecompressStringENCAsync: (NSString *)str;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;

@end
