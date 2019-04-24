//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

@class UIButton, UIView;

@interface HCBETCFailScanningViewController : HCBETCBaseViewController
{
    CDUnknownBlockType _rescanHandler;
    CDUnknownBlockType _dismissHandler;
    UIButton *_rescanButton;
    UIView *_deviceImageContainerView;
}

@property(nonatomic) __weak UIView *deviceImageContainerView; // @synthesize deviceImageContainerView=_deviceImageContainerView;
@property(nonatomic) __weak UIButton *rescanButton; // @synthesize rescanButton=_rescanButton;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) CDUnknownBlockType rescanHandler; // @synthesize rescanHandler=_rescanHandler;
- (void).cxx_destruct;
- (void)call:(id)arg1;
- (void)rescan:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)setupUI;
- (void)setup;

@end

