// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  SFtpDir
// Wrapped Chilkat C++ class name =  CkSFtpDir

@class CkoSFtpFile;
@class CkoTask;


@interface CkoSFtpDir : NSObject {

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
@property (nonatomic, readonly, copy) NSNumber *NumFilesAndDirs;
@property (nonatomic, readonly, copy) NSString *OriginalPath;
// method: GetFilename
- (NSString *)GetFilename: (NSNumber *)index;
// method: GetFileObject
- (CkoSFtpFile *)GetFileObject: (NSNumber *)index;
// method: LoadTaskResult
- (BOOL)LoadTaskResult: (CkoTask *)task;

@end
