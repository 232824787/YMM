//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMOrderDetailBaseCell.h"

@class UIButton, UIImageView, UILabel, UIView, YMMOrderTransportInfoModel;

@interface YMMOrderTransportInfoCell : YMMOrderDetailBaseCell
{
    UILabel *_titleLab;
    UILabel *_transportTypeLab;
    UILabel *_detailLab;
    UIImageView *_detailMoreIcon;
    UIImageView *_carIconImage;
    UIView *_grayView;
    UIView *_yellowView;
    UILabel *_lastMilesDesLab;
    UIView *_bottomView;
    UIButton *_transPortBtn;
    YMMOrderTransportInfoModel *_transportInfo;
}

@property(retain, nonatomic) YMMOrderTransportInfoModel *transportInfo; // @synthesize transportInfo=_transportInfo;
@property(retain, nonatomic) UIButton *transPortBtn; // @synthesize transPortBtn=_transPortBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *lastMilesDesLab; // @synthesize lastMilesDesLab=_lastMilesDesLab;
@property(retain, nonatomic) UIView *yellowView; // @synthesize yellowView=_yellowView;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) UIImageView *carIconImage; // @synthesize carIconImage=_carIconImage;
@property(retain, nonatomic) UIImageView *detailMoreIcon; // @synthesize detailMoreIcon=_detailMoreIcon;
@property(retain, nonatomic) UILabel *detailLab; // @synthesize detailLab=_detailLab;
@property(retain, nonatomic) UILabel *transportTypeLab; // @synthesize transportTypeLab=_transportTypeLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)insertModel:(id)arg1;
- (void)transPortBtnClicked:(id)arg1;
- (void)resetConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

