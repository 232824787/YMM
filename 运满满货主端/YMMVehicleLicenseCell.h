//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, YMMPicView;

@interface YMMVehicleLicenseCell : YMMBaseTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_actionBtn;
    YMMPicView *_positiveView;
    YMMPicView *_reverseView;
    UIImageView *_arrowIcon;
}

+ (id)cellIdentifier;
+ (id)createReuseCellForTableView:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) YMMPicView *reverseView; // @synthesize reverseView=_reverseView;
@property(retain, nonatomic) YMMPicView *positiveView; // @synthesize positiveView=_positiveView;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

