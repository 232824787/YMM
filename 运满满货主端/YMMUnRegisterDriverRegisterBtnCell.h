//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIView;

@interface YMMUnRegisterDriverRegisterBtnCell : YMMBaseTableViewCell
{
    CDUnknownBlockType _invitationRegisterBlock;
    UIView *_topLine;
    UIButton *_registerBtn;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(copy, nonatomic) CDUnknownBlockType invitationRegisterBlock; // @synthesize invitationRegisterBlock=_invitationRegisterBlock;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)invitationRegisterClick;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

