#import <Foundation/Foundation.h>

@interface iOSTuts : NSObject

-(void)LoginDone:(void (^)(void))execute;
-(void)FlarumAuth;


-(NSString *)getUsername;
-(NSString *)getUserToken;
-(NSInteger)getUserID;
- (NSString *)getAvatarUrl;
-(void)logout;

@end
