//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUStationHomeBaseCell.h"

@class UIImageView, UILabel;

@interface HCBUStationHomeCertCell : HCBUStationHomeBaseCell
{
    UIImageView *_icon;
    UILabel *_titleLb;
    UIImageView *_indicator;
}

@property(retain, nonatomic) UIImageView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupUI;

@end

