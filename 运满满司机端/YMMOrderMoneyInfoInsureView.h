//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, YMMOrderMoneyInfoInsureModel, YMMOrderMoneyInfoItemBeansView;

@interface YMMOrderMoneyInfoInsureView : UIView
{
    double _itemHeight;
    UILabel *_insureTitleLab;
    YMMOrderMoneyInfoInsureModel *_insureInfo;
    YMMOrderMoneyInfoItemBeansView *_itemBeansView;
    YMMOrderMoneyInfoItemBeansView *_couponItemBeans;
}

@property(retain, nonatomic) YMMOrderMoneyInfoItemBeansView *couponItemBeans; // @synthesize couponItemBeans=_couponItemBeans;
@property(retain, nonatomic) YMMOrderMoneyInfoItemBeansView *itemBeansView; // @synthesize itemBeansView=_itemBeansView;
@property(retain, nonatomic) YMMOrderMoneyInfoInsureModel *insureInfo; // @synthesize insureInfo=_insureInfo;
@property(retain, nonatomic) UILabel *insureTitleLab; // @synthesize insureTitleLab=_insureTitleLab;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
- (void).cxx_destruct;
- (void)insertModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

