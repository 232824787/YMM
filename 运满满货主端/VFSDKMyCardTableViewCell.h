//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CAGradientLayer, UIImageView, UILabel, UIView, VFBankcardInfoModel;

@interface VFSDKMyCardTableViewCell : UITableViewCell
{
    UIView *bankContentView;
    UIImageView *bankImageView;
    UILabel *cardLabel;
    UILabel *bankLabel;
    UILabel *cardTypeLabel;
    CAGradientLayer *gradientLayer;
    VFBankcardInfoModel *bankcardInfo;
    UIImageView *_rightIconIV;
    UIImageView *_leftIconIV;
}

@property(nonatomic) __weak UIImageView *leftIconIV; // @synthesize leftIconIV=_leftIconIV;
@property(nonatomic) __weak UIImageView *rightIconIV; // @synthesize rightIconIV=_rightIconIV;
@property(retain, nonatomic) VFBankcardInfoModel *bankcardInfo; // @synthesize bankcardInfo;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer;
- (void).cxx_destruct;
- (void)configBankInformation:(id)arg1;
- (void)awakeFromNib;

@end

