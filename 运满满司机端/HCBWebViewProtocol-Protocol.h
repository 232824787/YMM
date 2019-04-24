//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, NSURLRequest, UIColor, WKNavigation;

@protocol HCBWebViewProtocol <NSObject>
+ (NSDictionary *)wlfileSavedData;
@property(readonly, nonatomic) NSURL *currentMainDocumentURL;
@property(readonly, nonatomic) NSURL *currentURL;
@property(readonly, nonatomic) _Bool useWLJS;
@property(nonatomic) long long webTimeOut;
@property(retain, nonatomic) UIColor *progressColor;
@property(nonatomic) _Bool showProgress;
- (_Bool)webIsLoading;
- (_Bool)webCanGoForward;
- (_Bool)webCanGoBack;
- (void)webGoBack;
- (WKNavigation *)webLoadRequest:(NSURLRequest *)arg1;
- (WKNavigation *)webLoadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)evaluateJS:(NSString *)arg1 completedHandler:(void (^)(id))arg2;
- (id)initWithUseWLJS:(_Bool)arg1;
@end

