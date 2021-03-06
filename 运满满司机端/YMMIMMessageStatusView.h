//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface YMMIMMessageStatusView : UIView
{
    UIImageView *_statusImgView;
    UILabel *_statusLabel;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *statusImgView; // @synthesize statusImgView=_statusImgView;
- (void).cxx_destruct;
- (void)addSubContraints;
- (void)showLoadingStatusView;
- (void)showFailedStatusView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

