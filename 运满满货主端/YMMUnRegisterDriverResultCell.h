//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YMMUnRegisterDriverResultCell : YMMBaseTableViewCell
{
    UIImageView *_resultImg;
    UILabel *_tipLb;
    UIView *_line;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *tipLb; // @synthesize tipLb=_tipLb;
@property(retain, nonatomic) UIImageView *resultImg; // @synthesize resultImg=_resultImg;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

