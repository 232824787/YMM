//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUStationHomeBaseCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class HCBUStationHomeDetailCell, HCBUStationHomeNoticeCell, HCBUStationPopularityTag, NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel, UIView;

@interface HCBUStationHomeHeaderCell : HCBUStationHomeBaseCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    CDUnknownBlockType _selectLocationBlock;
    CDUnknownBlockType _selectShowImageBlock;
    CDUnknownBlockType _selectLabelShowOrHiddenBlock;
    CDUnknownBlockType _onTapRecommendedDescAction;
    NSArray *_tags;
    UILabel *_stationNameLabel;
    UILabel *_stationSubDescLabel;
    UIView *_sep;
    HCBUStationPopularityTag *_popularity;
    UICollectionViewFlowLayout *_collectionViewLayout;
    UICollectionView *_albumCollectionView;
    HCBUStationHomeNoticeCell *_notice;
    HCBUStationHomeDetailCell *_detail;
}

@property(retain, nonatomic) HCBUStationHomeDetailCell *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) HCBUStationHomeNoticeCell *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) UICollectionView *albumCollectionView; // @synthesize albumCollectionView=_albumCollectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) HCBUStationPopularityTag *popularity; // @synthesize popularity=_popularity;
@property(retain, nonatomic) UIView *sep; // @synthesize sep=_sep;
@property(retain, nonatomic) UILabel *stationSubDescLabel; // @synthesize stationSubDescLabel=_stationSubDescLabel;
@property(retain, nonatomic) UILabel *stationNameLabel; // @synthesize stationNameLabel=_stationNameLabel;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) CDUnknownBlockType onTapRecommendedDescAction; // @synthesize onTapRecommendedDescAction=_onTapRecommendedDescAction;
@property(copy, nonatomic) CDUnknownBlockType selectLabelShowOrHiddenBlock; // @synthesize selectLabelShowOrHiddenBlock=_selectLabelShowOrHiddenBlock;
@property(copy, nonatomic) CDUnknownBlockType selectShowImageBlock; // @synthesize selectShowImageBlock=_selectShowImageBlock;
@property(copy, nonatomic) CDUnknownBlockType selectLocationBlock; // @synthesize selectLocationBlock=_selectLocationBlock;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onDetailNavButtonAction;
- (void)onDetailExpandButtonAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)onTapSubDescLabelAction;
- (void)reAddTags;
- (void)setModel:(id)arg1;
- (void)setupUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

