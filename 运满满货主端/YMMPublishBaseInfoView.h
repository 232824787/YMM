//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel, UITextField, UIView, YMMPublishBaseInfoViewModel, YYLabel;

@interface YMMPublishBaseInfoView : UIControl
{
    YMMPublishBaseInfoViewModel *_viewModel;
    UILabel *_titleLabel;
    UITextField *_contentTextField;
    UIImageView *_indicatorImageView;
    UIView *_bottomLineView;
    YYLabel *_contentLabel;
}

@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UITextField *contentTextField; // @synthesize contentTextField=_contentTextField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YMMPublishBaseInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)attributedString;
- (float)widthWithText:(id)arg1 font:(id)arg2;
- (void)updateViewConstraints;
- (void)initConstraints;
- (void)initUI;
- (void)bindingModel:(id)arg1;
- (id)init;

@end

