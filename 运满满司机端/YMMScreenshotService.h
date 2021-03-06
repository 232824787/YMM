//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "YMMScreenshotProtocol.h"

@class NSMutableArray, NSString, UIButton, UIImage, YMMOSSUploadManager, YMMScreenShotResultModel, YMMScreenShotView;

@interface YMMScreenshotService : NSObject <YMMScreenshotProtocol, UIGestureRecognizerDelegate>
{
    _Bool _qaScreenShot;
    NSString *userInfo;
    NSString *appVer;
    NSString *appType;
    NSString *deviceType;
    NSString *pageCode;
    NSString *imageStream;
    NSString *suffixName;
    NSMutableArray *elementInfos;
    NSString *telephone;
    UIImage *pageScreenShot;
    YMMScreenShotResultModel *_config;
    YMMScreenShotView *_ssView;
    UIButton *_ssBtn;
    NSString *_idfv;
    YMMOSSUploadManager *_ossManager;
    NSString *_ossKey;
    struct CGPoint _startTouch;
}

+ (long long)appType;
+ (id)serviceWithTelephone:(id)arg1;
+ (id)serviceWithUserId:(id)arg1;
@property(nonatomic) _Bool qaScreenShot; // @synthesize qaScreenShot=_qaScreenShot;
@property(copy, nonatomic) NSString *ossKey; // @synthesize ossKey=_ossKey;
@property(retain, nonatomic) YMMOSSUploadManager *ossManager; // @synthesize ossManager=_ossManager;
@property(copy, nonatomic) NSString *idfv; // @synthesize idfv=_idfv;
@property(nonatomic) struct CGPoint startTouch; // @synthesize startTouch=_startTouch;
@property(retain, nonatomic) UIButton *ssBtn; // @synthesize ssBtn=_ssBtn;
@property(retain, nonatomic) YMMScreenShotView *ssView; // @synthesize ssView=_ssView;
@property(retain, nonatomic) YMMScreenShotResultModel *config; // @synthesize config=_config;
@property(retain, nonatomic) UIImage *pageScreenShot; // @synthesize pageScreenShot;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone;
@property(retain, nonatomic) NSMutableArray *elementInfos; // @synthesize elementInfos;
@property(copy, nonatomic) NSString *suffixName; // @synthesize suffixName;
@property(copy, nonatomic) NSString *imageStream; // @synthesize imageStream;
@property(copy, nonatomic) NSString *pageCode; // @synthesize pageCode;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType;
@property(copy, nonatomic) NSString *appType; // @synthesize appType;
@property(copy, nonatomic) NSString *appVer; // @synthesize appVer;
@property(copy, nonatomic) NSString *userInfo; // @synthesize userInfo;
- (void).cxx_destruct;
- (void)uploadImageToOSS:(id)arg1;
- (void)paningGestureReceive:(id)arg1;
- (void)showAlertMsg:(id)arg1;
- (void)requestConfigTask;
- (void)uploadScreenShotInfoTask;
- (void)uploadScreenShotTask;
- (void)configssBtn;
- (id)viewInfoWithView:(id)arg1 elementId:(id)arg2;
- (void)findTabBar:(id)arg1;
- (void)findSubView:(id)arg1;
- (void)findNavBar:(id)arg1;
- (void)traverseViewInfo;
- (id)imageDataScreenShot;
- (void)screenShotAction:(id)arg1;
- (void)showScreenShotImage:(id)arg1;
- (void)quiteScreenShotAction;
- (void)configScreenShotImage;
- (void)startScreenShotAction:(id)arg1;
- (void)showScreenShotBtn;
- (_Bool)openScreenShot;
- (void)initConfig;
- (void)removeScreenShotNotification;
- (void)addScreenShotNotification;
- (void)stopService;
- (void)startService;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

