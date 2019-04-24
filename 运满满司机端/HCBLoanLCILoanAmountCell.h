//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface HCBLoanLCILoanAmountCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UILabel *_markLabel;
    UIView *_boxView;
    UIImageView *_markView;
    UIImageView *_bottomCenterHLine;
    UIImageView *_bottomCenterVLine;
    UIButton *_bottomCenterButton;
    UIButton *_bottomLeftButton;
    UIButton *_bottomRightButton;
    NSLayoutConstraint *_bottomButtonHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomButtonHeightConstraint; // @synthesize bottomButtonHeightConstraint=_bottomButtonHeightConstraint;
@property(nonatomic) __weak UIButton *bottomRightButton; // @synthesize bottomRightButton=_bottomRightButton;
@property(nonatomic) __weak UIButton *bottomLeftButton; // @synthesize bottomLeftButton=_bottomLeftButton;
@property(nonatomic) __weak UIButton *bottomCenterButton; // @synthesize bottomCenterButton=_bottomCenterButton;
@property(nonatomic) __weak UIImageView *bottomCenterVLine; // @synthesize bottomCenterVLine=_bottomCenterVLine;
@property(nonatomic) __weak UIImageView *bottomCenterHLine; // @synthesize bottomCenterHLine=_bottomCenterHLine;
@property(nonatomic) __weak UIImageView *markView; // @synthesize markView=_markView;
@property(nonatomic) __weak UIView *boxView; // @synthesize boxView=_boxView;
@property(nonatomic) __weak UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)setBottomButtonsShowingCount:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setupBottomButton:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

