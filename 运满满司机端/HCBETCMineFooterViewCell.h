//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class HCBETCMineServiceModel, UIImageView, UILabel;

@interface HCBETCMineFooterViewCell : UICollectionViewCell
{
    UIImageView *_imgVIcon;
    UILabel *_labTitle;
    HCBETCMineServiceModel *_serviceModel;
}

@property(retain, nonatomic) HCBETCMineServiceModel *serviceModel; // @synthesize serviceModel=_serviceModel;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIImageView *imgVIcon; // @synthesize imgVIcon=_imgVIcon;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

