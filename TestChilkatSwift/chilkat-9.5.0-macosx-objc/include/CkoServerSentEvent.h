// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  ServerSentEvent
// Wrapped Chilkat C++ class name =  CkServerSentEvent



@interface CkoServerSentEvent : NSObject {

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

@property (nonatomic, readonly, copy) NSString *Data;
@property (nonatomic, readonly, copy) NSString *EventName;
@property (nonatomic, readonly, copy) NSString *LastEventId;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSNumber *Retry;
// method: LoadEvent
- (BOOL)LoadEvent: (NSString *)eventText;

@end
