//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface YMMTrunkSelectTableViewCell : YMMBaseTableViewCell
{
    NSString *_trunkInfo;
    UILabel *_trunkInfoLb;
    UIImageView *_iconImageView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *trunkInfoLb; // @synthesize trunkInfoLb=_trunkInfoLb;
@property(copy, nonatomic) NSString *trunkInfo; // @synthesize trunkInfo=_trunkInfo;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

