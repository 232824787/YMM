//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMImagePickerManagerDelegate.h"

@class NSString, UIView, YMMAdvertisementModel, YMMTextFieldTableViewCellStyleModel, YMMUnRegisterDriverModel;

@interface YMMUnRegisterDriverManager : NSObject <YMMImagePickerManagerDelegate>
{
    NSString *_queryCode;
    NSString *_queryType;
    YMMUnRegisterDriverModel *_model;
    UIView *_view;
    unsigned long long _driverType;
    YMMTextFieldTableViewCellStyleModel *_nameModel;
    YMMTextFieldTableViewCellStyleModel *_idCardModel;
    CDUnknownBlockType _ocrBlock;
    id <YMMMineServiceProtocol> _mineService;
    YMMAdvertisementModel *_adverModel;
}

@property(retain, nonatomic) YMMAdvertisementModel *adverModel; // @synthesize adverModel=_adverModel;
@property(retain, nonatomic) id <YMMMineServiceProtocol> mineService; // @synthesize mineService=_mineService;
@property(copy, nonatomic) CDUnknownBlockType ocrBlock; // @synthesize ocrBlock=_ocrBlock;
@property(retain, nonatomic) YMMTextFieldTableViewCellStyleModel *idCardModel; // @synthesize idCardModel=_idCardModel;
@property(retain, nonatomic) YMMTextFieldTableViewCellStyleModel *nameModel; // @synthesize nameModel=_nameModel;
@property(nonatomic) unsigned long long driverType; // @synthesize driverType=_driverType;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) YMMUnRegisterDriverModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(copy, nonatomic) NSString *queryCode; // @synthesize queryCode=_queryCode;
- (void).cxx_destruct;
- (id)modelWithIndexPath:(id)arg1;
- (unsigned long long)type;
- (void)reloadDriverType;
- (void)ymm_imagePickerManagerDidSelectItem:(id)arg1 dataStringArray:(id)arg2;
- (void)reQueryDriverCompletion:(CDUnknownBlockType)arg1;
- (void)queryDriverCompletion:(CDUnknownBlockType)arg1;
- (void)ocrForImagePath:(id)arg1;
- (void)openImagePickerForIndex:(long long)arg1;
- (void)ocrQueryCompletion:(CDUnknownBlockType)arg1;
- (void)requestAdvertDataCompletion:(CDUnknownBlockType)arg1;
- (void)requestUnRegisterDriverCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

