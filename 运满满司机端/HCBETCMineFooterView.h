//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView, UIImageView, UILabel;

@interface HCBETCMineFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSMutableArray *_mArrServiceModel;
    id <HCBETCMineFooterViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UILabel *_labTitle;
    UIView *_viewLine;
    UIImageView *_imgVSlogon;
}

@property(retain, nonatomic) UIImageView *imgVSlogon; // @synthesize imgVSlogon=_imgVSlogon;
@property(retain, nonatomic) UIView *viewLine; // @synthesize viewLine=_viewLine;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <HCBETCMineFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *mArrServiceModel; // @synthesize mArrServiceModel=_mArrServiceModel;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateCollectionViewHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

