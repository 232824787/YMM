//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YMMMyCargoDetailTipCell : YMMBaseTableViewCell
{
    UIImageView *_securityIcon;
    UILabel *_securityTipLb;
    UILabel *_securityDetailLb;
    UIView *_topLine;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *securityDetailLb; // @synthesize securityDetailLb=_securityDetailLb;
@property(retain, nonatomic) UILabel *securityTipLb; // @synthesize securityTipLb=_securityTipLb;
@property(retain, nonatomic) UIImageView *securityIcon; // @synthesize securityIcon=_securityIcon;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addSubViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)ymm_configWithItemModel:(id)arg1;

@end

