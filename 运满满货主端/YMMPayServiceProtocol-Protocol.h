//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "YMMServiceProtocol.h"

@class NSDictionary, NSString, NSURL, UIViewController;

@protocol YMMPayServiceProtocol <NSObject, YMMServiceProtocol>
- (void)HCBHandleWxPay:(_Bool)arg1;
- (void)alipayHandle:(NSURL *)arg1;
- (void)WeChatH5SchemeOperation:(NSString *)arg1 url:(NSURL *)arg2;
- (void)callPayMent:(NSDictionary *)arg1 currViewController:(UIViewController *)arg2 WithCallBack:(void (^)(id))arg3;
- (_Bool)useHCBWallet;
@end

