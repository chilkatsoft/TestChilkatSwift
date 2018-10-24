// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  ZipCrc
// Wrapped Chilkat C++ class name =  CkZipCrc

@class CkoBinData;
@class CkoStringBuilder;
@class CkoTask;


@class CkoBaseProgress;

@interface CkoZipCrc : NSObject {

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

@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: BeginStream
- (void)BeginStream;
// method: CalculateCrc
- (NSNumber *)CalculateCrc: (NSData *)data;
// method: CrcBd
- (NSNumber *)CrcBd: (CkoBinData *)bd;
// method: CrcSb
- (NSNumber *)CrcSb: (CkoStringBuilder *)sb 
	charset: (NSString *)charset;
// method: CrcString
- (NSNumber *)CrcString: (NSString *)str 
	charset: (NSString *)charset;
// method: EndStream
- (NSNumber *)EndStream;
// method: FileCrc
- (NSNumber *)FileCrc: (NSString *)path;
// method: FileCrcAsync
- (CkoTask *)FileCrcAsync: (NSString *)path;
// method: MoreData
- (void)MoreData: (NSData *)data;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: ToHex
- (NSString *)ToHex: (NSNumber *)crc;

@end
