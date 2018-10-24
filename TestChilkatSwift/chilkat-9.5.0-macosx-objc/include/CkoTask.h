// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Task
// Wrapped Chilkat C++ class name =  CkTask



@interface CkoTask : NSObject {

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
@property (nonatomic) BOOL KeepProgressLog;
@property (nonatomic, readonly, copy) NSString *LastErrorHtml;
@property (nonatomic, readonly, copy) NSString *LastErrorText;
@property (nonatomic, readonly, copy) NSString *LastErrorXml;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly) BOOL Live;
@property (nonatomic, readonly, copy) NSNumber *PercentDone;
@property (nonatomic, readonly, copy) NSNumber *ProgressLogSize;
@property (nonatomic, readonly, copy) NSString *ResultErrorText;
@property (nonatomic, readonly, copy) NSString *ResultType;
@property (nonatomic, readonly, copy) NSString *Status;
@property (nonatomic, readonly, copy) NSNumber *StatusInt;
@property (nonatomic, readonly, copy) NSNumber *TaskId;
@property (nonatomic, readonly) BOOL TaskSuccess;
@property (nonatomic, copy) NSString *UserData;
@property (nonatomic) BOOL VerboseLogging;
@property (nonatomic, readonly, copy) NSString *Version;
// method: Cancel
- (BOOL)Cancel;
// method: ClearProgressLog
- (void)ClearProgressLog;
// method: CopyResultBytes
- (NSData *)CopyResultBytes;
// method: GetResultBool
- (BOOL)GetResultBool;
// method: GetResultBytes
- (NSData *)GetResultBytes;
// method: GetResultInt
- (NSNumber *)GetResultInt;
// method: GetResultString
- (NSString *)GetResultString;
// method: ProgressInfoName
- (NSString *)ProgressInfoName: (NSNumber *)index;
// method: ProgressInfoValue
- (NSString *)ProgressInfoValue: (NSNumber *)index;
// method: RemoveProgressInfo
- (void)RemoveProgressInfo: (NSNumber *)index;
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
