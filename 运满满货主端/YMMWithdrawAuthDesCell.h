//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UILabel;

@interface YMMWithdrawAuthDesCell : YMMBaseTableViewCell
{
    UILabel *_titleDesLab;
    UILabel *_subTitleDesLab;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *subTitleDesLab; // @synthesize subTitleDesLab=_subTitleDesLab;
@property(retain, nonatomic) UILabel *titleDesLab; // @synthesize titleDesLab=_titleDesLab;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

