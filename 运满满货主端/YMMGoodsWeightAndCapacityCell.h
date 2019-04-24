//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface YMMGoodsWeightAndCapacityCell : YMMBaseTableViewCell
{
    unsigned long long _publishScene;
    NSString *_goodsWeight;
    NSString *_goodsCapacity;
    CDUnknownBlockType _weightCallback;
    CDUnknownBlockType _capacityCallback;
    UIImageView *_iconImageView;
    UILabel *_tipLabel;
    UIView *_weightView;
    UILabel *_weightLabel;
    UILabel *_weightTipLabel;
    UIView *_splitLineView;
    UIView *_capacityView;
    UILabel *_capacityLabel;
    UILabel *_capacityTipLabel;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)createReuseCellForTableView:(id)arg1 withCellIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *capacityTipLabel; // @synthesize capacityTipLabel=_capacityTipLabel;
@property(retain, nonatomic) UILabel *capacityLabel; // @synthesize capacityLabel=_capacityLabel;
@property(retain, nonatomic) UIView *capacityView; // @synthesize capacityView=_capacityView;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UILabel *weightTipLabel; // @synthesize weightTipLabel=_weightTipLabel;
@property(retain, nonatomic) UILabel *weightLabel; // @synthesize weightLabel=_weightLabel;
@property(retain, nonatomic) UIView *weightView; // @synthesize weightView=_weightView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType capacityCallback; // @synthesize capacityCallback=_capacityCallback;
@property(copy, nonatomic) CDUnknownBlockType weightCallback; // @synthesize weightCallback=_weightCallback;
@property(retain, nonatomic) NSString *goodsCapacity; // @synthesize goodsCapacity=_goodsCapacity;
@property(retain, nonatomic) NSString *goodsWeight; // @synthesize goodsWeight=_goodsWeight;
@property(nonatomic) unsigned long long publishScene; // @synthesize publishScene=_publishScene;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)tapCapacityView;
- (void)tapWeightView;
- (void)setViewGesture:(id)arg1;
- (void)initControls;
- (void)setNeedsUpdateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

