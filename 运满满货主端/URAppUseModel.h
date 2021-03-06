//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "URBaseModel.h"

#import "URModelProtocol.h"

@class NSString, URCommonModel;

@interface URAppUseModel : URBaseModel <URModelProtocol>
{
    URCommonModel *_commonData;
    NSString *_lm;
    NSString *_dt;
    NSString *_pv;
}

@property(copy, nonatomic) NSString *pv; // @synthesize pv=_pv;
@property(copy, nonatomic) NSString *dt; // @synthesize dt=_dt;
@property(copy, nonatomic) NSString *lm; // @synthesize lm=_lm;
@property(retain, nonatomic) URCommonModel *commonData; // @synthesize commonData=_commonData;
- (void).cxx_destruct;
- (_Bool)saveWithDB:(id)arg1 uuid:(id)arg2;
- (void)save2DBWithCompletedBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

