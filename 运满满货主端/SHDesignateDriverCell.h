//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class SHDesignateDriverBottomView, UIImageView, UILabel, UIView;

@interface SHDesignateDriverCell : YMMBaseTableViewCell
{
    SHDesignateDriverBottomView *_bottomView;
    UIImageView *_avatarImageView;
    UILabel *_driverNameLabel;
    UILabel *_statusLabel;
    UILabel *_licenseStatusLabel;
    UILabel *_desLabel;
    UIView *_lineView;
    UIView *_bottomLineView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *licenseStatusLabel; // @synthesize licenseStatusLabel=_licenseStatusLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *driverNameLabel; // @synthesize driverNameLabel=_driverNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) SHDesignateDriverBottomView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)setViewsConstrains;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)ymm_configWithItemModel:(id)arg1;

@end

