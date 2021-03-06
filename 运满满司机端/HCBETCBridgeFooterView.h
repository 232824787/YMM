//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary, UIButton, UIWebView;

@interface HCBETCBridgeFooterView : UIView
{
    UIWebView *_webView;
    UIButton *_loadMoreBtn;
    UIButton *_rechargeBaiTiaoBtn;
    UIButton *_rechargeOtherBtn;
    NSMutableDictionary *_webPararms;
    CDUnknownBlockType _finishChooseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType finishChooseHandler; // @synthesize finishChooseHandler=_finishChooseHandler;
@property(copy, nonatomic) NSMutableDictionary *webPararms; // @synthesize webPararms=_webPararms;
@property(copy, nonatomic) UIButton *rechargeOtherBtn; // @synthesize rechargeOtherBtn=_rechargeOtherBtn;
@property(copy, nonatomic) UIButton *rechargeBaiTiaoBtn; // @synthesize rechargeBaiTiaoBtn=_rechargeBaiTiaoBtn;
@property(copy, nonatomic) UIButton *loadMoreBtn; // @synthesize loadMoreBtn=_loadMoreBtn;
@property(copy, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)hiddenLoadMore:(_Bool)arg1;
- (void)btnAction:(id)arg1;
- (void)masonryLayout;
- (void)setOwnFreeCoupon:(_Bool)arg1;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

