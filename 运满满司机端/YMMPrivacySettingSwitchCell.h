//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UILabel, UISwitch, UIView, YMMPrivacySettingItemModel;

@interface YMMPrivacySettingSwitchCell : YMMBaseTableViewCell
{
    _Bool _showBottomLine;
    YMMPrivacySettingItemModel *_itemModel;
    CDUnknownBlockType _valueChangedBlock;
    UILabel *_titleLb;
    UILabel *_descLb;
    UISwitch *_valueSwitch;
    UIView *_bottomLineView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UISwitch *valueSwitch; // @synthesize valueSwitch=_valueSwitch;
@property(retain, nonatomic) UILabel *descLb; // @synthesize descLb=_descLb;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(nonatomic) _Bool showBottomLine; // @synthesize showBottomLine=_showBottomLine;
@property(copy, nonatomic) CDUnknownBlockType valueChangedBlock; // @synthesize valueChangedBlock=_valueChangedBlock;
@property(retain, nonatomic) YMMPrivacySettingItemModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)changeSelectValue:(id)arg1;
- (void)setOn:(_Bool)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

