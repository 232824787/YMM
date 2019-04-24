//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMSensitiveWordCell.h"

@class NSString, UILabel;

@interface YMMGoodsRemarkCell : YMMSensitiveWordCell
{
    NSString *kDefaultTip;
    unsigned long long _publishScene;
    unsigned long long _mybRoleType;
    NSString *_goodsRemark;
    UILabel *_goodsRemarkTitleLabel;
    UILabel *_goodsRemarkValueLabel;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)createReuseCellForTableView:(id)arg1 withCellIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *goodsRemarkValueLabel; // @synthesize goodsRemarkValueLabel=_goodsRemarkValueLabel;
@property(retain, nonatomic) UILabel *goodsRemarkTitleLabel; // @synthesize goodsRemarkTitleLabel=_goodsRemarkTitleLabel;
@property(retain, nonatomic) NSString *goodsRemark; // @synthesize goodsRemark=_goodsRemark;
@property(nonatomic) unsigned long long mybRoleType; // @synthesize mybRoleType=_mybRoleType;
@property(nonatomic) unsigned long long publishScene; // @synthesize publishScene=_publishScene;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initControls;
- (void)setHasSensitiveWord;
- (void)setNeedsUpdateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

