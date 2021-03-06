//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, MASConstraint, UILabel;

@interface HCBETCSROrderHeaderView : UIView
{
    UIView *_topView;
    UILabel *_statusLabel;
    UILabel *_detailLabel;
    UILabel *_roadSectionLabel;
    UILabel *_routeLabel;
    UILabel *_extraLabel;
    MASConstraint *_extraLabelBottomCons;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MASConstraint *extraLabelBottomCons; // @synthesize extraLabelBottomCons=_extraLabelBottomCons;
@property(retain, nonatomic) UILabel *extraLabel; // @synthesize extraLabel=_extraLabel;
@property(retain, nonatomic) UILabel *routeLabel; // @synthesize routeLabel=_routeLabel;
@property(retain, nonatomic) UILabel *roadSectionLabel; // @synthesize roadSectionLabel=_roadSectionLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)configureViewWithData:(id)arg1;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

