//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AMapNaviRouteExtendSegment, UIImageView, UILabel;

@interface AMapNaviRouteSegmentCollectionViewCell : UICollectionViewCell
{
    AMapNaviRouteExtendSegment *_myObj;
    UIImageView *_imageView;
    UILabel *_infoLabel;
}

@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AMapNaviRouteExtendSegment *myObj; // @synthesize myObj=_myObj;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

