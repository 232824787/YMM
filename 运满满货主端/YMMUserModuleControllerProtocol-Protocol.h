//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol YMMUserModuleControllerProtocol <NSObject>
- (void)pushToAuthViewController;
- (void)changeBtnClickEnable:(_Bool)arg1;
- (void)stopLoading;
- (void)startLoading:(NSString *)arg1;
- (void)startLoading;

@optional
- (void)registerConfirmAlert;
- (void)registerFailureAction:(NSError *)arg1;
- (void)registerSuccessAction;
- (void)loginFailureAction:(NSError *)arg1;
- (void)loginSuccessAction;
- (void)voiceCaptchaSuccessAction;
- (void)voiceCaptchaFailureAction:(NSError *)arg1;
- (void)textCaptchaFailureAction:(NSError *)arg1;
- (void)textCaptchaSuccessAction;
- (void)pushToNextViewController;
- (void)stopCountDown;
- (void)startCountDown;
- (void)startCountDown:(long long)arg1;
@end

