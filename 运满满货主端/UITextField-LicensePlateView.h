//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "YMMLicensePlateViewDelegate.h"

@class NSString;

@interface UITextField (LicensePlateView) <YMMLicensePlateViewDelegate>
- (void)licensePlateViewDidClickCancel:(id)arg1;
- (void)licensePlateView:(id)arg1 didSelectText:(id)arg2;
- (void)pressedLicensePlateKeyboard:(id)arg1;
- (void)deleteKeyAction:(id)arg1;
- (void)commitAction;
- (void)setupKeyboardView;
@property(copy, nonatomic) CDUnknownBlockType licensePlateViewHideHandler; // @dynamic licensePlateViewHideHandler;
@property(nonatomic) unsigned long long licensePlateMode; // @dynamic licensePlateMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

