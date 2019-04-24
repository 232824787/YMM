//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TangramFlowLayout.h"

@class NSArray, NSObject<TangramItemModelProtocol>;

@interface TangramSingleAndDoubleLayout : TangramFlowLayout
{
    int _numberOfReloadRequests;
    NSArray *_itemModels;
    NSArray *_rows;
    double _firstReloadRequestTS;
    NSObject<TangramItemModelProtocol> *_headerItemModel;
    NSObject<TangramItemModelProtocol> *_footerItemModel;
}

@property(retain, nonatomic) NSObject<TangramItemModelProtocol> *footerItemModel; // @synthesize footerItemModel=_footerItemModel;
@property(retain, nonatomic) NSObject<TangramItemModelProtocol> *headerItemModel; // @synthesize headerItemModel=_headerItemModel;
@property double firstReloadRequestTS; // @synthesize firstReloadRequestTS=_firstReloadRequestTS;
@property int numberOfReloadRequests; // @synthesize numberOfReloadRequests=_numberOfReloadRequests;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (id)itemModels;
- (void).cxx_destruct;
- (void)heightChangedWithElement:(id)arg1 model:(id)arg2;
- (void)calculateLayout;
- (void)setItemModels:(id)arg1;
- (unsigned long long)numberOfColumns;

@end

