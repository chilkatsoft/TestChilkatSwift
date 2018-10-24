// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  ZipEntry
// Wrapped Chilkat C++ class name =  CkZipEntry

@class CkoTask;
@class CkoDateTime;
@class CkoBinData;
@class CkoStringBuilder;
@class CkoStream;


@class CkoBaseProgress;

@interface CkoZipEntry : NSObject {

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

@property (nonatomic, copy) NSString *Comment;
@property (nonatomic, readonly, copy) NSNumber *CompressedLength;
@property (nonatomic, readonly, copy) NSString *CompressedLengthStr;
@property (nonatomic, copy) NSNumber *CompressionLevel;
@property (nonatomic, copy) NSNumber *CompressionMethod;
@property (nonatomic, readonly, copy) NSNumber *Crc;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSNumber *EncryptionKeyLen;
@property (nonatomic, readonly, copy) NSNumber *EntryID;
@property (nonatomic, readonly, copy) NSNumber *EntryType;
@property (nonatomic, copy) NSDate *FileDateTime;
@property (nonatomic, copy) NSString *FileDateTimeStr;
@property (nonatomic, copy) NSString *FileName;
@property (nonatomic, readonly, copy) NSString *FileNameHex;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, readonly) BOOL IsAesEncrypted;
@property (nonatomic, readonly) BOOL IsDirectory;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL TextFlag;
@property (nonatomic, readonly, copy) NSNumber *UncompressedLength;
@property (nonatomic, readonly, copy) NSString *UncompressedLengthStr;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AppendData
- (BOOL)AppendData: (NSData *)bdata;
// method: AppendDataAsync
- (CkoTask *)AppendDataAsync: (NSData *)bdata;
// method: AppendString
- (BOOL)AppendString: (NSString *)inStr 
	charset: (NSString *)charset;
// method: AppendStringAsync
- (CkoTask *)AppendStringAsync: (NSString *)inStr 
	charset: (NSString *)charset;
// method: Copy
- (NSData *)Copy;
// method: CopyToBase64
- (NSString *)CopyToBase64;
// method: CopyToHex
- (NSString *)CopyToHex;
// method: Extract
- (BOOL)Extract: (NSString *)dirPath;
// method: ExtractAsync
- (CkoTask *)ExtractAsync: (NSString *)dirPath;
// method: ExtractInto
- (BOOL)ExtractInto: (NSString *)dirPath;
// method: ExtractIntoAsync
- (CkoTask *)ExtractIntoAsync: (NSString *)dirPath;
// method: GetDt
- (CkoDateTime *)GetDt;
// method: Inflate
- (NSData *)Inflate;
// method: InflateAsync
- (CkoTask *)InflateAsync;
// method: NextEntry
- (CkoZipEntry *)NextEntry;
// method: NextMatchingEntry
- (CkoZipEntry *)NextMatchingEntry: (NSString *)matchStr;
// method: ReplaceData
- (BOOL)ReplaceData: (NSData *)bdata;
// method: ReplaceString
- (BOOL)ReplaceString: (NSString *)inStr 
	charset: (NSString *)charset;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SetDt
- (void)SetDt: (CkoDateTime *)dt;
// method: UnzipToBd
- (BOOL)UnzipToBd: (CkoBinData *)binData;
// method: UnzipToBdAsync
- (CkoTask *)UnzipToBdAsync: (CkoBinData *)binData;
// method: UnzipToSb
- (BOOL)UnzipToSb: (NSNumber *)lineEndingBehavior 
	srcCharset: (NSString *)srcCharset 
	sb: (CkoStringBuilder *)sb;
// method: UnzipToSbAsync
- (CkoTask *)UnzipToSbAsync: (NSNumber *)lineEndingBehavior 
	srcCharset: (NSString *)srcCharset 
	sb: (CkoStringBuilder *)sb;
// method: UnzipToStream
- (BOOL)UnzipToStream: (CkoStream *)toStream;
// method: UnzipToStreamAsync
- (CkoTask *)UnzipToStreamAsync: (CkoStream *)toStream;
// method: UnzipToString
- (NSString *)UnzipToString: (NSNumber *)lineEndingBehavior 
	srcCharset: (NSString *)srcCharset;
// method: UnzipToStringAsync
- (CkoTask *)UnzipToStringAsync: (NSNumber *)lineEndingBehavior 
	srcCharset: (NSString *)srcCharset;

@end
