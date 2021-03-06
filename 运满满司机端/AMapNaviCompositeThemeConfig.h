//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface AMapNaviCompositeThemeConfig : NSObject
{
    long long _themeType;
    UIColor *_baseThemeColor;
    UIColor *_addWayPOICompleteBtnBgColor;
    UIColor *_routePlanVCNaviBtnsColor;
    UIColor *_routePlanVCRetryBtnNormalTitleColor;
    UIColor *_rscvcContainerViewBgColorNormal;
    UIColor *_rscvcContainerViewBgColorSelected;
    UIColor *_rscvcContainerViewBorderColorNormal;
    UIColor *_rscvcContainerViewBorderColorSelected;
    UIColor *_rscvcRouteLabelTextColorNormal;
    UIColor *_rscvcRouteLabelTextColorSelected;
    UIColor *_rscvcRouteLabelBgColorNormal;
    UIColor *_rscvcRouteLabelBgColorSelected;
    UIColor *_rscvcTimeLabelTextColorNormal;
    UIColor *_rscvcTimeLabelTextColorSelected;
    UIColor *_rscvcLengthLabelTextColorNormal;
    UIColor *_rscvcLengthLabelTextColorSelected;
    UIColor *_searchPOIVCTopBarBgColor;
    UIColor *_searchPOIVCMyPosTextColor;
    UIColor *_searchPOIVCMatchTextHighlightColor;
    UIColor *_driveViewInfoViewBgColor;
    UIColor *_driveViewSpeedTextColor;
}

+ (id)sharedThemeConfig;
@property(retain, nonatomic) UIColor *driveViewSpeedTextColor; // @synthesize driveViewSpeedTextColor=_driveViewSpeedTextColor;
@property(retain, nonatomic) UIColor *driveViewInfoViewBgColor; // @synthesize driveViewInfoViewBgColor=_driveViewInfoViewBgColor;
@property(retain, nonatomic) UIColor *searchPOIVCMatchTextHighlightColor; // @synthesize searchPOIVCMatchTextHighlightColor=_searchPOIVCMatchTextHighlightColor;
@property(retain, nonatomic) UIColor *searchPOIVCMyPosTextColor; // @synthesize searchPOIVCMyPosTextColor=_searchPOIVCMyPosTextColor;
@property(retain, nonatomic) UIColor *searchPOIVCTopBarBgColor; // @synthesize searchPOIVCTopBarBgColor=_searchPOIVCTopBarBgColor;
@property(retain, nonatomic) UIColor *rscvcLengthLabelTextColorSelected; // @synthesize rscvcLengthLabelTextColorSelected=_rscvcLengthLabelTextColorSelected;
@property(retain, nonatomic) UIColor *rscvcLengthLabelTextColorNormal; // @synthesize rscvcLengthLabelTextColorNormal=_rscvcLengthLabelTextColorNormal;
@property(retain, nonatomic) UIColor *rscvcTimeLabelTextColorSelected; // @synthesize rscvcTimeLabelTextColorSelected=_rscvcTimeLabelTextColorSelected;
@property(retain, nonatomic) UIColor *rscvcTimeLabelTextColorNormal; // @synthesize rscvcTimeLabelTextColorNormal=_rscvcTimeLabelTextColorNormal;
@property(retain, nonatomic) UIColor *rscvcRouteLabelBgColorSelected; // @synthesize rscvcRouteLabelBgColorSelected=_rscvcRouteLabelBgColorSelected;
@property(retain, nonatomic) UIColor *rscvcRouteLabelBgColorNormal; // @synthesize rscvcRouteLabelBgColorNormal=_rscvcRouteLabelBgColorNormal;
@property(retain, nonatomic) UIColor *rscvcRouteLabelTextColorSelected; // @synthesize rscvcRouteLabelTextColorSelected=_rscvcRouteLabelTextColorSelected;
@property(retain, nonatomic) UIColor *rscvcRouteLabelTextColorNormal; // @synthesize rscvcRouteLabelTextColorNormal=_rscvcRouteLabelTextColorNormal;
@property(retain, nonatomic) UIColor *rscvcContainerViewBorderColorSelected; // @synthesize rscvcContainerViewBorderColorSelected=_rscvcContainerViewBorderColorSelected;
@property(retain, nonatomic) UIColor *rscvcContainerViewBorderColorNormal; // @synthesize rscvcContainerViewBorderColorNormal=_rscvcContainerViewBorderColorNormal;
@property(retain, nonatomic) UIColor *rscvcContainerViewBgColorSelected; // @synthesize rscvcContainerViewBgColorSelected=_rscvcContainerViewBgColorSelected;
@property(retain, nonatomic) UIColor *rscvcContainerViewBgColorNormal; // @synthesize rscvcContainerViewBgColorNormal=_rscvcContainerViewBgColorNormal;
@property(retain, nonatomic) UIColor *routePlanVCRetryBtnNormalTitleColor; // @synthesize routePlanVCRetryBtnNormalTitleColor=_routePlanVCRetryBtnNormalTitleColor;
@property(retain, nonatomic) UIColor *routePlanVCNaviBtnsColor; // @synthesize routePlanVCNaviBtnsColor=_routePlanVCNaviBtnsColor;
@property(retain, nonatomic) UIColor *addWayPOICompleteBtnBgColor; // @synthesize addWayPOICompleteBtnBgColor=_addWayPOICompleteBtnBgColor;
@property(retain, nonatomic) UIColor *baseThemeColor; // @synthesize baseThemeColor=_baseThemeColor;
@property(nonatomic) long long themeType; // @synthesize themeType=_themeType;
- (void).cxx_destruct;
- (void)setup;
- (id)init;

@end

