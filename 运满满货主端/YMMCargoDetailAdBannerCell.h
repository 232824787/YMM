//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSArray, YMMInfiniteScrollView;

@interface YMMCargoDetailAdBannerCell : YMMBaseTableViewCell
{
    _Bool _bannerScrollIng;
    CDUnknownBlockType _clickAdBlock;
    YMMInfiniteScrollView *_bannerView;
    NSArray *_adModelArray;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(nonatomic) _Bool bannerScrollIng; // @synthesize bannerScrollIng=_bannerScrollIng;
@property(retain, nonatomic) NSArray *adModelArray; // @synthesize adModelArray=_adModelArray;
@property(retain, nonatomic) YMMInfiniteScrollView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType clickAdBlock; // @synthesize clickAdBlock=_clickAdBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deallocAdBanner;
- (void)startAdBannerScroll;
- (void)stopAdBannerScroll;
- (void)openActivity:(id)arg1 withIndex:(long long)arg2;
- (void)openActivityByTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)ymm_configWithItemModel:(id)arg1;

@end

