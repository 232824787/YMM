//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SDCycleScrollViewDelegate.h"

@class NSArray, NSString, SDCycleScrollView;

@interface HCBLoanAdView : UIView <SDCycleScrollViewDelegate>
{
    NSArray *_imageUrls;
    CDUnknownBlockType _didTapImage;
    SDCycleScrollView *_bannerView;
}

@property(retain, nonatomic) SDCycleScrollView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType didTapImage; // @synthesize didTapImage=_didTapImage;
@property(copy, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
- (void).cxx_destruct;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)cycleScrollView:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)p_setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

