//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface HCBETCInvoiceGuideView : UIView
{
    long long _type;
    UIImageView *_guideImageView;
}

@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)loadGuideView;
- (void)showTo:(id)arg1;
- (void)tapGuideView;
- (void)initView;
- (id)init;

@end

