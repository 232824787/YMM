//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBPetrolBaseViewController.h"

@class UIButton, UILabel;

@interface HCBNetworkErrorVC : HCBPetrolBaseViewController
{
    UILabel *_lblNetworkErrorMsg;
    UILabel *_lblNetworkErrorMemo;
    UIButton *_btnGoToWifi;
}

@property(nonatomic) __weak UIButton *btnGoToWifi; // @synthesize btnGoToWifi=_btnGoToWifi;
@property(nonatomic) __weak UILabel *lblNetworkErrorMemo; // @synthesize lblNetworkErrorMemo=_lblNetworkErrorMemo;
@property(nonatomic) __weak UILabel *lblNetworkErrorMsg; // @synthesize lblNetworkErrorMsg=_lblNetworkErrorMsg;
- (void).cxx_destruct;
- (void)clickGotoSetting:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

