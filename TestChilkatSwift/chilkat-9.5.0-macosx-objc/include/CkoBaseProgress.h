// Base class for event callbacks.
// Applications can create a class that derives from this class.

#import "CkoProgress.h"

@class CkoTask;

@interface CkoBaseProgress : CkoProgress {

}

- (id)init;
- (void)dealloc;
- (void)dispose;

- (void)AbortCheck: (BOOL *)abort;
- (void)PercentDone: (NSNumber *)pctDone
	abort: (BOOL *)abort;
- (void)ProgressInfo: (NSString *)name
	value: (NSString *)value;
- (void)TaskCompleted: (CkoTask *)task;
- (void)TextData: (NSString *)data;
- (void)BinaryData: (NSData *)data;


@end
