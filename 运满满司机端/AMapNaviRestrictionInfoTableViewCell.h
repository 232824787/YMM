//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AMapNaviRestrictionVCObj, UILabel, UIView;

@interface AMapNaviRestrictionInfoTableViewCell : UITableViewCell
{
    AMapNaviRestrictionVCObj *_obj;
    UILabel *_titleLabel;
    UIView *_effectBgView;
    UILabel *_effectLabel;
    UILabel *_infoLabel;
}

@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UILabel *effectLabel; // @synthesize effectLabel=_effectLabel;
@property(nonatomic) __weak UIView *effectBgView; // @synthesize effectBgView=_effectBgView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AMapNaviRestrictionVCObj *obj; // @synthesize obj=_obj;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

