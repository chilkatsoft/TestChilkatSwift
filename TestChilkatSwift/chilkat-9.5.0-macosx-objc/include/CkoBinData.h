// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  BinData
// Wrapped Chilkat C++ class name =  CkBinData

@class CkoStringBuilder;


@interface CkoBinData : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumBytes;
// method: AppendBd
- (BOOL)AppendBd: (CkoBinData *)binData;
// method: AppendBinary
- (BOOL)AppendBinary: (NSData *)data;
// method: AppendBom
- (BOOL)AppendBom: (NSString *)charset;
// method: AppendEncoded
- (BOOL)AppendEncoded: (NSString *)encData 
	encoding: (NSString *)encoding;
// method: AppendEncodedSb
- (BOOL)AppendEncodedSb: (CkoStringBuilder *)sb 
	encoding: (NSString *)encoding;
// method: AppendSb
- (BOOL)AppendSb: (CkoStringBuilder *)sb 
	charset: (NSString *)charset;
// method: AppendString
- (BOOL)AppendString: (NSString *)str 
	charset: (NSString *)charset;
// method: Clear
- (BOOL)Clear;
// method: ContentsEqual
- (BOOL)ContentsEqual: (CkoBinData *)binData;
// method: GetBinary
- (NSData *)GetBinary;
// method: GetBinaryChunk
- (NSData *)GetBinaryChunk: (NSNumber *)offset 
	numBytes: (NSNumber *)numBytes;
// method: GetEncoded
- (NSString *)GetEncoded: (NSString *)encoding;
// method: GetEncodedChunk
- (NSString *)GetEncodedChunk: (NSNumber *)offset 
	numBytes: (NSNumber *)numBytes 
	encoding: (NSString *)encoding;
// method: GetEncodedSb
- (BOOL)GetEncodedSb: (NSString *)encoding 
	sb: (CkoStringBuilder *)sb;
// method: GetString
- (NSString *)GetString: (NSString *)charset;
// method: LoadBinary
- (BOOL)LoadBinary: (NSData *)data;
// method: LoadEncoded
- (BOOL)LoadEncoded: (NSString *)encData 
	encoding: (NSString *)encoding;
// method: LoadFile
- (BOOL)LoadFile: (NSString *)path;
// method: RemoveChunk
- (BOOL)RemoveChunk: (NSNumber *)offset 
	numBytes: (NSNumber *)numBytes;
// method: SecureClear
- (BOOL)SecureClear;
// method: WriteFile
- (BOOL)WriteFile: (NSString *)path;

@end
