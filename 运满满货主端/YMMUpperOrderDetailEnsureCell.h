//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, YYLabel;

@interface YMMUpperOrderDetailEnsureCell : YMMBaseTableViewCell
{
    UIImageView *_imageViewEnsure;
    YYLabel *_labelEnsure;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) YYLabel *labelEnsure; // @synthesize labelEnsure=_labelEnsure;
@property(retain, nonatomic) UIImageView *imageViewEnsure; // @synthesize imageViewEnsure=_imageViewEnsure;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)setUpViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

