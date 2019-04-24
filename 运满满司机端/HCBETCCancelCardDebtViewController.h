//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

@class UIButton, UIImageView, UILabel;

@interface HCBETCCancelCardDebtViewController : HCBETCBaseViewController
{
    long long _debtType;
    UIImageView *_imgVSuccess;
    UILabel *_labTitle;
    UILabel *_labSubtitle;
    UIButton *_btnBack;
    UIButton *_btnRight;
}

@property(retain, nonatomic) UIButton *btnRight; // @synthesize btnRight=_btnRight;
@property(retain, nonatomic) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(retain, nonatomic) UILabel *labSubtitle; // @synthesize labSubtitle=_labSubtitle;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIImageView *imgVSuccess; // @synthesize imgVSuccess=_imgVSuccess;
@property(nonatomic) long long debtType; // @synthesize debtType=_debtType;
- (void).cxx_destruct;
- (void)actionRightButton:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)updateView;
- (void)setupView;
- (void)viewDidLoad;
- (void)dealloc;

@end

