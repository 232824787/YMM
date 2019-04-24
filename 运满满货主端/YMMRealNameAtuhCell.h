//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface YMMRealNameAtuhCell : YMMBaseTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIImageView *_statusIconImg;
    UIImageView *_arrowIcon;
}

+ (id)cellIdentifiler;
+ (id)ymm_createCellForTableView:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UIImageView *statusIconImg; // @synthesize statusIconImg=_statusIconImg;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)configConstraints;
- (void)ymm_configWithItemModel:(id)arg1 showStatusIcon:(_Bool)arg2 canEdit:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

