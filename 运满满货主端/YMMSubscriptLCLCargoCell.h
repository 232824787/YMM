//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface YMMSubscriptLCLCargoCell : YMMBaseTableViewCell
{
    UILabel *_cellTitleLabel;
    UILabel *_cellSeperatorLine;
    UILabel *_cellSubTitleLabel;
    UIImageView *_cellIconImageView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *cellIconImageView; // @synthesize cellIconImageView=_cellIconImageView;
@property(retain, nonatomic) UILabel *cellSubTitleLabel; // @synthesize cellSubTitleLabel=_cellSubTitleLabel;
@property(retain, nonatomic) UILabel *cellSeperatorLine; // @synthesize cellSeperatorLine=_cellSeperatorLine;
@property(retain, nonatomic) UILabel *cellTitleLabel; // @synthesize cellTitleLabel=_cellTitleLabel;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)updateConstraints;
- (void)initControls;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

