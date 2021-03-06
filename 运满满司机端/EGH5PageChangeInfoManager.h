//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EGBaseInfoManager.h"

#import "NSCoding.h"

@class EGPageChangeInfoModel, NSMutableArray;

@interface EGH5PageChangeInfoManager : EGBaseInfoManager <NSCoding>
{
    NSMutableArray *_h5InfoArray;
    EGPageChangeInfoModel *_theLastUploadModel;
}

@property(retain, nonatomic) EGPageChangeInfoModel *theLastUploadModel; // @synthesize theLastUploadModel=_theLastUploadModel;
@property(retain, nonatomic) NSMutableArray *h5InfoArray; // @synthesize h5InfoArray=_h5InfoArray;
- (void).cxx_destruct;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)uploadFailureNotification:(id)arg1;
- (void)uploadSuccessNotification:(id)arg1;
- (void)uploadingNotification:(id)arg1;
- (void)cleanInvalidData;
- (id)h5PageInfoModelArray;
- (_Bool)endH5PageParameters:(id)arg1;
- (_Bool)beginH5PageParameters:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

