//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

@class NSArray, NSMutableArray, NSString, UISegmentedControl, UIViewController, YMMPublishCompanyQuoteGoodsViewController, YMMPublishGoodsModel, YMMPublishGoodsViewController, YMMPublishMYBGoodsViewController, YMMPublishRNViewController;

@interface YMMPublisGoodsManagerViewController : YMMBaseViewController
{
    long long _vcIndex;
    _Bool _isCargoNameRequire;
    _Bool _isLoadDateTimeRequire;
    _Bool _isFromResend;
    _Bool _needRefreshQuoteScene;
    _Bool _didShowEAlert;
    YMMPublishGoodsModel *_publishGoodsModel;
    NSArray *_cargoTypeArr;
    NSString *_referPageName;
    long long _scene;
    unsigned long long _lastQuoteSceneType;
    unsigned long long _lastPublishScene;
    long long _startRegionCode;
    unsigned long long _companyQuoteScene;
    CDUnknownBlockType _clickDepositBlock;
    UIViewController *_currentVC;
    UISegmentedControl *_segmentControl;
    YMMPublishGoodsViewController *_normalGoodsVC;
    YMMPublishRNViewController *_normalGoodsRNVC;
    YMMPublishMYBGoodsViewController *_mybGoodsVC;
    YMMPublishMYBGoodsViewController *_brokerGoodsVC;
    YMMPublishCompanyQuoteGoodsViewController *_companyQuoteGoodsVC;
    long long _tapCount;
    NSMutableArray *_titlesArray;
    NSString *_selectedTitle;
}

@property(nonatomic) _Bool didShowEAlert; // @synthesize didShowEAlert=_didShowEAlert;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) NSMutableArray *titlesArray; // @synthesize titlesArray=_titlesArray;
@property(nonatomic) long long tapCount; // @synthesize tapCount=_tapCount;
@property(retain, nonatomic) YMMPublishCompanyQuoteGoodsViewController *companyQuoteGoodsVC; // @synthesize companyQuoteGoodsVC=_companyQuoteGoodsVC;
@property(retain, nonatomic) YMMPublishMYBGoodsViewController *brokerGoodsVC; // @synthesize brokerGoodsVC=_brokerGoodsVC;
@property(retain, nonatomic) YMMPublishMYBGoodsViewController *mybGoodsVC; // @synthesize mybGoodsVC=_mybGoodsVC;
@property(retain, nonatomic) YMMPublishRNViewController *normalGoodsRNVC; // @synthesize normalGoodsRNVC=_normalGoodsRNVC;
@property(retain, nonatomic) YMMPublishGoodsViewController *normalGoodsVC; // @synthesize normalGoodsVC=_normalGoodsVC;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(copy, nonatomic) CDUnknownBlockType clickDepositBlock; // @synthesize clickDepositBlock=_clickDepositBlock;
@property(nonatomic) unsigned long long companyQuoteScene; // @synthesize companyQuoteScene=_companyQuoteScene;
@property(nonatomic) long long startRegionCode; // @synthesize startRegionCode=_startRegionCode;
@property(nonatomic) unsigned long long lastPublishScene; // @synthesize lastPublishScene=_lastPublishScene;
@property(nonatomic) unsigned long long lastQuoteSceneType; // @synthesize lastQuoteSceneType=_lastQuoteSceneType;
@property(nonatomic) _Bool needRefreshQuoteScene; // @synthesize needRefreshQuoteScene=_needRefreshQuoteScene;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isFromResend; // @synthesize isFromResend=_isFromResend;
@property(retain, nonatomic) NSString *referPageName; // @synthesize referPageName=_referPageName;
@property(retain, nonatomic) NSArray *cargoTypeArr; // @synthesize cargoTypeArr=_cargoTypeArr;
@property(retain, nonatomic) YMMPublishGoodsModel *publishGoodsModel; // @synthesize publishGoodsModel=_publishGoodsModel;
- (void).cxx_destruct;
- (void)normalRNViewController:(id)arg1;
- (void)replaceController:(id)arg1 newController:(id)arg2 withAnimate:(_Bool)arg3;
- (id)normalPublishTitle;
- (void)resetSegmentControl;
- (void)normalPublishStatus:(_Bool)arg1;
- (void)initSegmentData;
- (void)setCurrentStartRegion;
- (void)initCheckDataRequire;
- (void)showQualityGuideView:(id)arg1;
- (void)showEAlertView:(id)arg1;
- (_Bool)selectCompanyQuoteType;
- (void)selectNormalType;
- (void)gotoQualityPage;
- (void)showPopDetail:(id)arg1 isReturn:(_Bool)arg2;
- (id)getschemeUrl:(id)arg1;
- (void)segmentedValueChanged:(id)arg1;
- (void)setFirstViewChildVC:(id)arg1;
- (_Bool)shouldDoTabJournal;
- (void)ymm_doBack;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

@end

