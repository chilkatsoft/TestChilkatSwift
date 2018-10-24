// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  TaskChain
// Wrapped Chilkat C++ class name =  CkTaskChain

@class CkoTask;


@interface CkoTaskChain : NSObject {

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
@property (nonatomic, readonly) BOOL Finished;
@property (nonatomic, copy) NSNumber *HeartbeatMs;
@property (nonatomic, readonly) BOOL Inert;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly) BOOL Live;
@property (nonatomic, readonly, copy) NSNumber *NumTasks;
@property (nonatomic, readonly, copy) NSString *Status;
@property (nonatomic, readonly, copy) NSNumber *StatusInt;
@property (nonatomic) BOOL StopOnFailedTask;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: Append
- (BOOL)Append: (CkoTask *)task;
// method: Cancel
- (BOOL)Cancel;
// method: GetTask
- (CkoTask *)GetTask: (NSNumber *)index;
// method: Run
- (BOOL)Run;
// method: RunSynchronously
- (BOOL)RunSynchronously;
// method: SaveLastError
- (BOOL)SaveLastError: (NSString *)path;
// method: SleepMs
- (void)SleepMs: (NSNumber *)numMs;
// method: Wait
- (BOOL)Wait: (NSNumber *)maxWaitMs;

@end
