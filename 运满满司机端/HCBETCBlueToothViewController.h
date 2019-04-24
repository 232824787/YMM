//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

@class UIButton, UIImageView;

@interface HCBETCBlueToothViewController : HCBETCBaseViewController
{
    _Bool _isForRecharge;
    CDUnknownBlockType _removeBlock;
    UIButton *_openBlueToothBtn;
    UIButton *_cancelBtn;
    UIImageView *_imageView;
}

@property(nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) UIButton *openBlueToothBtn; // @synthesize openBlueToothBtn=_openBlueToothBtn;
@property(copy, nonatomic) CDUnknownBlockType removeBlock; // @synthesize removeBlock=_removeBlock;
@property(nonatomic) _Bool isForRecharge; // @synthesize isForRecharge=_isForRecharge;
- (void).cxx_destruct;
- (void)clickCancelBtn:(id)arg1;
- (void)clickOpenBtn:(id)arg1;
- (void)observerForBluetoothStateChanged:(id)arg1;
- (void)loadUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

