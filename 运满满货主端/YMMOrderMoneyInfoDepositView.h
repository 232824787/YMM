//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, YMMOrderMoneyInfoDepositModel, YMMOrderMoneyInfoItemBeansView;

@interface YMMOrderMoneyInfoDepositView : UIView
{
    double _itemHeight;
    UILabel *_depositTitleLab;
    UILabel *_depositDetailLab;
    UIImageView *_depositMoreIcon;
    UIButton *_depositDetailBtn;
    YMMOrderMoneyInfoItemBeansView *_itemBeansView;
    YMMOrderMoneyInfoItemBeansView *_couponItemBeans;
    YMMOrderMoneyInfoDepositModel *_depositInfo;
}

@property(retain, nonatomic) YMMOrderMoneyInfoDepositModel *depositInfo; // @synthesize depositInfo=_depositInfo;
@property(retain, nonatomic) YMMOrderMoneyInfoItemBeansView *couponItemBeans; // @synthesize couponItemBeans=_couponItemBeans;
@property(retain, nonatomic) YMMOrderMoneyInfoItemBeansView *itemBeansView; // @synthesize itemBeansView=_itemBeansView;
@property(retain, nonatomic) UIButton *depositDetailBtn; // @synthesize depositDetailBtn=_depositDetailBtn;
@property(retain, nonatomic) UIImageView *depositMoreIcon; // @synthesize depositMoreIcon=_depositMoreIcon;
@property(retain, nonatomic) UILabel *depositDetailLab; // @synthesize depositDetailLab=_depositDetailLab;
@property(retain, nonatomic) UILabel *depositTitleLab; // @synthesize depositTitleLab=_depositTitleLab;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
- (void).cxx_destruct;
- (void)depositDetailBtnClicked:(id)arg1;
- (void)insertModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

