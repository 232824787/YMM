//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, YMMCargoReturnRouteAddressModel;

@interface YMMCargoReturnRoutePopupViewCell : YMMBaseTableViewCell
{
    _Bool _choosen;
    YMMCargoReturnRouteAddressModel *_model;
    UIImageView *_locationImageView;
    UILabel *_titleLab;
    UILabel *_subTitleLab;
    UIImageView *_checkImageView;
}

@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) UILabel *subTitleLab; // @synthesize subTitleLab=_subTitleLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(retain, nonatomic) YMMCargoReturnRouteAddressModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool choosen; // @synthesize choosen=_choosen;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

