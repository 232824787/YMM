//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMServiceProtocol.h"

@class NSDictionary, NSString, UIViewController, YMMUserProfileModel;

@protocol YMMUserServiceProtocol <YMMServiceProtocol>
@property(nonatomic) _Bool isNewRegisterUser;
@property(retain, nonatomic) YMMUserProfileModel *profileInfo;
@property(readonly, nonatomic) _Bool loginSuccess;
@property(readonly, copy, nonatomic) NSString *userId;
- (_Bool)canAutoLogin;
- (void)getPartnerTokenWithCompletionHandler:(void (^)(NSError *, id))arg1;
- (void)routeToLoginBussinessModuleWithTargetURL:(NSString *)arg1 targetParam:(NSDictionary *)arg2 errorBlock:(void (^)(NSError *))arg3;
- (UIViewController *)locationSMSViewController;
- (void)networkTaskForUserProfile:(void (^)(YMMUserProfileModel *, NSError *))arg1;
@end

