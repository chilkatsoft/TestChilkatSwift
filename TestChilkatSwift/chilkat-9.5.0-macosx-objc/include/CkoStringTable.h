// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  StringTable
// Wrapped Chilkat C++ class name =  CkStringTable

@class CkoStringBuilder;


@interface CkoStringTable : NSObject {

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

@property (nonatomic, readonly, copy) NSNumber *Count;
@property (nonatomic, copy) NSString *DebugLogFilePath;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: Append
- (BOOL)Append: (NSString *)value;
// method: AppendFromFile
- (BOOL)AppendFromFile: (NSNumber *)maxLineLen 
	charset: (NSString *)charset 
	path: (NSString *)path;
// method: AppendFromSb
- (BOOL)AppendFromSb: (CkoStringBuilder *)sb;
// method: Clear
- (void)Clear;
// method: IntAt
- (NSNumber *)IntAt: (NSNumber *)index;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SaveToFile
- (BOOL)SaveToFile: (NSString *)charset 
	bCrlf: (BOOL)bCrlf 
	path: (NSString *)path;
// method: SplitAndAppend
- (BOOL)SplitAndAppend: (NSString *)inStr 
	delimiterChar: (NSString *)delimiterChar 
	exceptDoubleQuoted: (BOOL)exceptDoubleQuoted 
	exceptEscaped: (BOOL)exceptEscaped;
// method: StringAt
- (NSString *)StringAt: (NSNumber *)index;

@end
