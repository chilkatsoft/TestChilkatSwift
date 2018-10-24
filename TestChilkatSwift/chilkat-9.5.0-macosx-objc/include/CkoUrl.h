// Chilkat Objective-C header.
// This is a generated header file for Chilkat version 9.5.0.76

// Generic/internal class name =  Url
// Wrapped Chilkat C++ class name =  CkUrl



@interface CkoUrl : NSObject {

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

@property (nonatomic, readonly, copy) NSString *Frag;
@property (nonatomic, readonly, copy) NSString *Host;
@property (nonatomic, readonly, copy) NSString *HostType;
@property (nonatomic) BOOL LastMethodSuccess;
@property (nonatomic, readonly, copy) NSString *Login;
@property (nonatomic, readonly, copy) NSString *Password;
@property (nonatomic, readonly, copy) NSString *Path;
@property (nonatomic, readonly, copy) NSString *PathWithQueryParams;
@property (nonatomic, readonly, copy) NSNumber *Port;
@property (nonatomic, readonly, copy) NSString *Query;
@property (nonatomic, readonly) BOOL Ssl;
// method: ParseUrl
- (BOOL)ParseUrl: (NSString *)url;

@end
