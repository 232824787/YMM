//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUMCBaseTableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class HCBUMCADSectionModel, HCBUSmallADView, NSString, UICollectionView, UIPageControl;

@interface HCBUMCHomeADSectionCell : HCBUMCBaseTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    CDUnknownBlockType _onTapAdHandler;
    HCBUMCADSectionModel *_model;
    HCBUSmallADView *_leftView;
    HCBUSmallADView *_rightView;
    UICollectionView *_collectionView;
    UIPageControl *_pager;
}

@property(retain, nonatomic) UIPageControl *pager; // @synthesize pager=_pager;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HCBUSmallADView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) HCBUSmallADView *leftView; // @synthesize leftView=_leftView;
@property(retain, nonatomic) HCBUMCADSectionModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType onTapAdHandler; // @synthesize onTapAdHandler=_onTapAdHandler;
- (void).cxx_destruct;
- (void)autoScrollToNext;
- (void)scrollToNextWithDelay;
- (void)cancelAutoScroll;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onTapRightItemAction;
- (void)onTapLeftItemAction;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

