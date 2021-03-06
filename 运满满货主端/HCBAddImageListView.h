//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDelegate.h"

@class NICollectionViewModel, NSMutableArray, NSString, UICollectionView;

@interface HCBAddImageListView : UIView <UICollectionViewDelegate>
{
    NSMutableArray *_imageUrlList;
    CDUnknownBlockType _addImageBlock;
    long long _maxImageNumber;
    UICollectionView *_collectionView;
    NICollectionViewModel *_collectionViewModel;
}

@property(retain, nonatomic) NICollectionViewModel *collectionViewModel; // @synthesize collectionViewModel=_collectionViewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long maxImageNumber; // @synthesize maxImageNumber=_maxImageNumber;
@property(copy, nonatomic) CDUnknownBlockType addImageBlock; // @synthesize addImageBlock=_addImageBlock;
@property(retain, nonatomic) NSMutableArray *imageUrlList; // @synthesize imageUrlList=_imageUrlList;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)reloadData;
- (void)updateWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

