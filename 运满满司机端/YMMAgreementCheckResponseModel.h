//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, YMMAgreementCheckLastAgreementResponseModel;

@interface YMMAgreementCheckResponseModel : YMMCommonModel
{
    NSNumber *_isSignedLast;
    YMMAgreementCheckLastAgreementResponseModel *_lastAgreement;
}

@property(retain, nonatomic) YMMAgreementCheckLastAgreementResponseModel *lastAgreement; // @synthesize lastAgreement=_lastAgreement;
@property(retain, nonatomic) NSNumber *isSignedLast; // @synthesize isSignedLast=_isSignedLast;
- (void).cxx_destruct;

@end

