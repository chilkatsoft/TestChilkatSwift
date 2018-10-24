// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  UnixCompress
// Wrapped Chilkat C++ class name =  CkUnixCompress

@class CkoTask;


@class CkoBaseProgress;

@interface CkoUnixCompress : NSObject {

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
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: CompressFile
- (BOOL)CompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: CompressFileAsync
- (CkoTask *)CompressFileAsync: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: CompressFileToMem
- (NSData *)CompressFileToMem: (NSString *)srcPath;
// method: CompressFileToMemAsync
- (CkoTask *)CompressFileToMemAsync: (NSString *)srcPath;
// method: CompressMemory
- (NSData *)CompressMemory: (NSData *)dbIn;
// method: CompressMemToFile
- (BOOL)CompressMemToFile: (NSData *)db 
	destPath: (NSString *)destPath;
// method: CompressString
- (NSData *)CompressString: (NSString *)inStr 
	charset: (NSString *)charset;
// method: CompressStringToFile
- (BOOL)CompressStringToFile: (NSString *)inStr 
	charset: (NSString *)charset 
	destPath: (NSString *)destPath;
// method: IsUnlocked
- (BOOL)IsUnlocked;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: UncompressFile
- (BOOL)UncompressFile: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: UncompressFileAsync
- (CkoTask *)UncompressFileAsync: (NSString *)srcPath 
	destPath: (NSString *)destPath;
// method: UncompressFileToMem
- (NSData *)UncompressFileToMem: (NSString *)srcPath;
// method: UncompressFileToMemAsync
- (CkoTask *)UncompressFileToMemAsync: (NSString *)srcPath;
// method: UncompressFileToString
- (NSString *)UncompressFileToString: (NSString *)srcPath 
	inCharset: (NSString *)inCharset;
// method: UncompressFileToStringAsync
- (CkoTask *)UncompressFileToStringAsync: (NSString *)srcPath 
	inCharset: (NSString *)inCharset;
// method: UncompressMemory
- (NSData *)UncompressMemory: (NSData *)dbIn;
// method: UncompressMemToFile
- (BOOL)UncompressMemToFile: (NSData *)db 
	destPath: (NSString *)destPath;
// method: UncompressString
- (NSString *)UncompressString: (NSData *)inData 
	inCharset: (NSString *)inCharset;
// method: UnlockComponent
- (BOOL)UnlockComponent: (NSString *)unlockCode;
// method: UnTarZ
- (BOOL)UnTarZ: (NSString *)zPath 
	destDir: (NSString *)destDir 
	bNoAbsolute: (BOOL)bNoAbsolute;
// method: UnTarZAsync
- (CkoTask *)UnTarZAsync: (NSString *)zPath 
	destDir: (NSString *)destDir 
	bNoAbsolute: (BOOL)bNoAbsolute;

@end
