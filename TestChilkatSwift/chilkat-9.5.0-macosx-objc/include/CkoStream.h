// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Stream
// Wrapped Chilkat C++ class name =  CkStream

@class CkoBinData;
@class CkoTask;
@class CkoStringBuilder;


@class CkoBaseProgress;

@interface CkoStream : NSObject {

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

@property (nonatomic) BOOL AbortCurrent;
@property (nonatomic, readonly) BOOL CanRead;
@property (nonatomic, readonly) BOOL CanWrite;
@property (nonatomic, readonly) BOOL DataAvailable;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSNumber *DefaultChunkSize;
@property (nonatomic, readonly) BOOL EndOfStream;
@property (nonatomic, readonly) BOOL IsWriteClosed;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSNumber *Length;
@property (nonatomic, copy) NSNumber *Length32;
@property (nonatomic, readonly, copy) NSNumber *NumReceived;
@property (nonatomic, readonly, copy) NSNumber *NumSent;
@property (nonatomic, readonly, copy) NSNumber *ReadFailReason;
@property (nonatomic, copy) NSNumber *ReadTimeoutMs;
@property (nonatomic, copy) NSString *SinkFile;
@property (nonatomic, copy) NSString *SourceFile;
@property (nonatomic, copy) NSNumber *SourceFilePart;
@property (nonatomic, copy) NSNumber *SourceFilePartSize;
@property (nonatomic) BOOL StringBom;
@property (nonatomic, copy) NSString *StringCharset;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
@property (nonatomic, readonly, copy) NSNumber *WriteFailReason;
@property (nonatomic, copy) NSNumber *WriteTimeoutMs;
// method: ReadBd
- (BOOL)ReadBd: (CkoBinData *)binData;
// method: ReadBdAsync
- (CkoTask *)ReadBdAsync: (CkoBinData *)binData;
// method: ReadBytes
- (NSData *)ReadBytes;
// method: ReadBytesAsync
- (CkoTask *)ReadBytesAsync;
// method: ReadBytesENC
- (NSString *)ReadBytesENC: (NSString *)encoding;
// method: ReadBytesENCAsync
- (CkoTask *)ReadBytesENCAsync: (NSString *)encoding;
// method: ReadNBytes
- (NSData *)ReadNBytes: (NSNumber *)numBytes;
// method: ReadNBytesAsync
- (CkoTask *)ReadNBytesAsync: (NSNumber *)numBytes;
// method: ReadNBytesENC
- (NSString *)ReadNBytesENC: (NSNumber *)numBytes 
	encoding: (NSString *)encoding;
// method: ReadNBytesENCAsync
- (CkoTask *)ReadNBytesENCAsync: (NSNumber *)numBytes 
	encoding: (NSString *)encoding;
// method: ReadSb
- (BOOL)ReadSb: (CkoStringBuilder *)sb;
// method: ReadSbAsync
- (CkoTask *)ReadSbAsync: (CkoStringBuilder *)sb;
// method: ReadString
- (NSString *)ReadString;
// method: ReadStringAsync
- (CkoTask *)ReadStringAsync;
// method: ReadToCRLF
- (NSString *)ReadToCRLF;
// method: ReadToCRLFAsync
- (CkoTask *)ReadToCRLFAsync;
// method: ReadUntilMatch
- (NSString *)ReadUntilMatch: (NSString *)matchStr;
// method: ReadUntilMatchAsync
- (CkoTask *)ReadUntilMatchAsync: (NSString *)matchStr;
// method: Reset
- (void)Reset;
// method: RunStream
- (BOOL)RunStream;
// method: RunStreamAsync
- (CkoTask *)RunStreamAsync;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetSinkStream
- (BOOL)SetSinkStream: (CkoStream *)strm;
// method: SetSourceBytes
- (BOOL)SetSourceBytes: (NSData *)sourceData;
// method: SetSourceStream
- (BOOL)SetSourceStream: (CkoStream *)strm;
// method: SetSourceString
- (BOOL)SetSourceString: (NSString *)srcStr 
	charset: (NSString *)charset;
// method: WriteBd
- (BOOL)WriteBd: (CkoBinData *)binData;
// method: WriteBdAsync
- (CkoTask *)WriteBdAsync: (CkoBinData *)binData;
// method: WriteByte
- (BOOL)WriteByte: (NSNumber *)byteVal;
// method: WriteByteAsync
- (CkoTask *)WriteByteAsync: (NSNumber *)byteVal;
// method: WriteBytes
- (BOOL)WriteBytes: (NSData *)byteData;
// method: WriteBytesAsync
- (CkoTask *)WriteBytesAsync: (NSData *)byteData;
// method: WriteBytesENC
- (BOOL)WriteBytesENC: (NSString *)byteData 
	encoding: (NSString *)encoding;
// method: WriteBytesENCAsync
- (CkoTask *)WriteBytesENCAsync: (NSString *)byteData 
	encoding: (NSString *)encoding;
// method: WriteClose
- (BOOL)WriteClose;
// method: WriteSb
- (BOOL)WriteSb: (CkoStringBuilder *)sb;
// method: WriteSbAsync
- (CkoTask *)WriteSbAsync: (CkoStringBuilder *)sb;
// method: WriteString
- (BOOL)WriteString: (NSString *)str;
// method: WriteStringAsync
- (CkoTask *)WriteStringAsync: (NSString *)str;

@end
