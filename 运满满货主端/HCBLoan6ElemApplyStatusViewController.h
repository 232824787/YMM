//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

@class HCBLoan6ElemOpenStatusViewModel, MASConstraint, UIButton, UIImageView, UILabel;

@interface HCBLoan6ElemApplyStatusViewController : HCBLoanBaseViewController
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_phoneButton;
    UIButton *_leftButton;
    UIButton *_rightButton;
    MASConstraint *_buttonsGapConstraint;
    HCBLoan6ElemOpenStatusViewModel *_viewModel;
}

+ (_Bool)baseLoadFromNib;
@property(retain, nonatomic) HCBLoan6ElemOpenStatusViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MASConstraint *buttonsGapConstraint; // @synthesize buttonsGapConstraint=_buttonsGapConstraint;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)p_relayoutButtonsWithStatus:(id)arg1;
- (void)p_refreshUIWithStatus:(id)arg1;
- (void)p_loadDataAndRefreshUI;
- (void)p_buttonDidPressed:(id)arg1;
- (void)p_phoneButtonDidPressed:(id)arg1;
- (void)p_setupUILayouts;
- (void)clickBackButton:(id)arg1;
- (void)viewWillFirstAppear;
- (void)viewDidLoad;

@end

