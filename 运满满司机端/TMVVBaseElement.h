//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TMLazyItemViewProtocol.h"
#import "TangramEasyElementProtocol.h"
#import "TangramElementHeightProtocol.h"
#import "TangramElementReuseIdentifierProtocol.h"
#import "VirtualViewDelegate.h"

@class NSMutableDictionary, NSString, TangramBus, TangramDefaultItemModel, VVViewContainer;

@interface TMVVBaseElement : UIView <VirtualViewDelegate, TMLazyItemViewProtocol, TangramElementReuseIdentifierProtocol, TangramEasyElementProtocol, TangramElementHeightProtocol>
{
    _Bool _disableCache;
    _Bool _appear;
    VVViewContainer *_contentView;
    TangramDefaultItemModel *_tangramItemModel;
    TangramBus *_tangramBus;
    NSMutableDictionary *_vvDict;
}

+ (id)reuseIdByModel:(id)arg1;
+ (double)heightByModel:(id)arg1;
+ (void)initVirtualViewSystem;
@property(nonatomic) _Bool appear; // @synthesize appear=_appear;
@property(retain, nonatomic) NSMutableDictionary *vvDict; // @synthesize vvDict=_vvDict;
@property(nonatomic) __weak TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(retain, nonatomic) TangramDefaultItemModel *tangramItemModel; // @synthesize tangramItemModel=_tangramItemModel;
@property(nonatomic) _Bool disableCache; // @synthesize disableCache=_disableCache;
@property(retain, nonatomic) VVViewContainer *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mui_afterGetView;
- (void)virtualViewClickedWithAction:(id)arg1 andValue:(id)arg2;
- (void)calculateLayout;
- (struct CGRect)fitRect:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

