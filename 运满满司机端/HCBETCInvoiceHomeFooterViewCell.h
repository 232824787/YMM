//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class HCBETCInvoiceHomeGuideModel, UIButton, UIImageView, UILabel;

@interface HCBETCInvoiceHomeFooterViewCell : UICollectionViewCell
{
    HCBETCInvoiceHomeGuideModel *_guideModel;
    UIButton *_buttonTitle;
    UILabel *_labSubTitle;
    UILabel *_labTitle;
    UIImageView *_imgVArrow;
}

@property(retain, nonatomic) UIImageView *imgVArrow; // @synthesize imgVArrow=_imgVArrow;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UILabel *labSubTitle; // @synthesize labSubTitle=_labSubTitle;
@property(retain, nonatomic) UIButton *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) HCBETCInvoiceHomeGuideModel *guideModel; // @synthesize guideModel=_guideModel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

