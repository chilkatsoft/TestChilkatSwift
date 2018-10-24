// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  SecureString
// Wrapped Chilkat C++ class name =  CkSecureString

@class CkoStringBuilder;


@interface CkoSecureString : NSObject {

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

@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, copy) NSString *MaintainHash;
@property (nonatomic) BOOL ReadOnly;
// method: Access
- (NSString *)Access;
// method: Append
- (BOOL)Append: (NSString *)str;
// method: AppendSb
- (BOOL)AppendSb: (CkoStringBuilder *)sb;
// method: AppendSecure
- (BOOL)AppendSecure: (CkoSecureString *)secStr;
// method: HashVal
- (NSString *)HashVal: (NSString *)encoding;
// method: LoadFile
- (BOOL)LoadFile: (NSString *)path 
	charset: (NSString *)charset;
// method: SecStrEquals
- (BOOL)SecStrEquals: (CkoSecureString *)secStr;
// method: VerifyHash
- (BOOL)VerifyHash: (NSString *)hashVal 
	encoding: (NSString *)encoding;

@end
