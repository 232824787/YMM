//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface YMMUnRegisterDriverInfoCell : YMMBaseTableViewCell
{
    UIImageView *_avatarImg;
    UILabel *_telephoneLb;
    UILabel *_unRegisterTipLb;
    UILabel *_tipLb;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UILabel *tipLb; // @synthesize tipLb=_tipLb;
@property(retain, nonatomic) UILabel *unRegisterTipLb; // @synthesize unRegisterTipLb=_unRegisterTipLb;
@property(retain, nonatomic) UILabel *telephoneLb; // @synthesize telephoneLb=_telephoneLb;
@property(retain, nonatomic) UIImageView *avatarImg; // @synthesize avatarImg=_avatarImg;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

