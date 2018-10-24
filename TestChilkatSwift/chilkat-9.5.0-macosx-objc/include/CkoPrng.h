// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Prng
// Wrapped Chilkat C++ class name =  CkPrng

@class CkoBinData;


@interface CkoPrng : NSObject {

	@private
		void *m_obj;

}

- (id)init;
- (void)dealloc;
- (void)dispose;
- (NSString *)stringWithUtf8: (const char *)s;
- (void *)CppImplObj;
- (void)setCppImplObj: (void *)pObj;

- (void)clearCppImplObj;

@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *PrngName;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: AddEntropy
- (BOOL)AddEntropy: (NSString *)entropy 
	encoding: (NSString *)encoding;
// method: AddEntropyBytes
- (BOOL)AddEntropyBytes: (NSData *)entropy;
// method: ExportEntropy
- (NSString *)ExportEntropy;
// method: FirebasePushId
- (NSString *)FirebasePushId;
// method: GenRandom
- (NSString *)GenRandom: (NSNumber *)numBytes 
	encoding: (NSString *)encoding;
// method: GenRandomBd
- (BOOL)GenRandomBd: (NSNumber *)numBytes 
	bd: (CkoBinData *)bd;
// method: GenRandomBytes
- (NSData *)GenRandomBytes: (NSNumber *)numBytes;
// method: GetEntropy
- (NSString *)GetEntropy: (NSNumber *)numBytes 
	encoding: (NSString *)encoding;
// method: GetEntropyBytes
- (NSData *)GetEntropyBytes: (NSNumber *)numBytes;
// method: ImportEntropy
- (BOOL)ImportEntropy: (NSString *)entropy;
// method: RandomInt
- (NSNumber *)RandomInt: (NSNumber *)low 
	high: (NSNumber *)high;
// method: RandomPassword
- (NSString *)RandomPassword: (NSNumber *)length 
	mustIncludeDigit: (BOOL)mustIncludeDigit 
	upperAndLowercase: (BOOL)upperAndLowercase 
	mustHaveOneOf: (NSString *)mustHaveOneOf 
	excludeChars: (NSString *)excludeChars;
// method: RandomString
- (NSString *)RandomString: (NSNumber *)length 
	bDigits: (BOOL)bDigits 
	bLower: (BOOL)bLower 
	bUpper: (BOOL)bUpper;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;

@end
